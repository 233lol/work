#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <pthread.h>
#include "timer.h"

const int MAX_THREADS = 1024;

long thread_count;
long long n;
double a;
double b;
long double h;
long long trap_count;

long double sum;
pthread_mutex_t mutex;


void* Thread_sum(void* rank);

void Get_args(int argc, char* argv[]);
void Usage(char* prog_name);

double f(double x);

int main(int argc, char* argv[])
{
    long       thread;  
    pthread_t* thread_handles;
    double start, finish, elapsed;

    Get_args(argc, argv);

    thread_handles = (pthread_t*) malloc (thread_count*sizeof(pthread_t));
    pthread_mutex_init(&mutex, NULL);
    sum = 0.0;
    h = (long double)(b-a)/n;
    trap_count = n/thread_count;

    GET_TIME(start);
    for (thread = 0; thread < thread_count; thread++)
        pthread_create(&thread_handles[thread], NULL, Thread_sum, (void*)thread);

    for (thread = 0; thread < thread_count; thread++)
        pthread_join(thread_handles[thread], NULL);
    GET_TIME(finish);
    elapsed = finish - start;

    sum = h*sum;
    printf("Time is %e seconds\n", elapsed);
    pthread_mutex_destroy(&mutex);
    free(thread_handles);
    return 0;
}
void* Thread_sum(void* rank)
{
    long my_rank = (long) rank;
    long double x;
    long double my_sum = 0.0;
    long double start = a+trap_count*my_rank*h;
    long double end = a+trap_count*(my_rank+1)*h;

    my_sum = (f(start) + f(end))/2.0;
    for (long long i = 1; i <= trap_count; i++)
    {
        x = start+i*h;
        my_sum += f(x);
    }

    pthread_mutex_lock(&mutex);
    sum += my_sum;
    pthread_mutex_unlock(&mutex);

    return NULL;
} 
void Get_args(int argc, char* argv[])
{
    if (argc != 5)
        Usage(argv[0]);
    thread_count = strtol(argv[1], NULL, 10);
    if (thread_count <= 0 || thread_count > MAX_THREADS)
        Usage(argv[0]);
    n = strtoll(argv[2], NULL, 10);
    if (n <= 0)
        Usage(argv[0]);
    a = strtod(argv[3],NULL);
    b = strtod(argv[4],NULL);
    if(a>b)
        Usage(argv[0]);
} 
void Usage(char* prog_name)
{
    fprintf(stderr, "usage: %s <number of threads> <n>\n", prog_name);
    fprintf(stderr, "   n >= 1\n");
    fprintf(stderr, "   a < b\n");
    exit(0);
}
double f(double x)
{
    return x*x;
}