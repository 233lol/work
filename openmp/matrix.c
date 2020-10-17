#include<stdio.h>
#include<omp.h>
#include"timer.h"
#include<stdlib.h>
typedef long long ll;
int m = 10000;
int mat[10000][10000];

void makeRandomMatrix()
{
    srand(time(NULL));
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            mat[i][j] = rand() % 10000 + 1;
        }
    }
}

int main (){
    ll sum=0;
    double ks,js;
    makeRandomMatrix();
    GET_TIME(ks);
    #pragma omp parallel for reduction(+:sum)
    for (int i = 0; i < m; i++)
    {
        ll temp_sum=0;
        for (int a=0 ; a<m;a++){
            temp_sum+=mat[a][i];
        }
        sum=temp_sum/m+sum;
    }
    int max =mat[0][0];
    #pragma omp parallel for 
    for (int i = 0; i < m; i++)
    {
        for (int a = 0; a < m; a++)
        {
            if (max<mat[a][i])
            {
                max=mat[a][i];
            }
            
        }
        
    }
    int min=mat[0][0];
    #pragma omp parallel for 
    for (int i = 0; i < m; i++)
    {
        for (int a = 0; a < m; a++)
        {
            if (min>mat[a][i])
            {
                min=mat[a][i];
            }
            
        }
        
    }
    GET_TIME(js);
    printf("Parallel: AVG = %ld,MAX = %d,MIN = %d,Time = %lf\n",sum/m,max,min,js-ks);
    sum =0;
    GET_TIME(ks);
    for (int i = 0; i < m; i++)
    {
        ll temp_sum=0;
        for (int a=0 ; a<m;a++){
            temp_sum+=mat[a][i];
        }
        sum=temp_sum/m+sum;
    }
    max =mat[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int a = 0; a < m; a++)
        {
            if (max<mat[a][i])
            {
                max=mat[a][i];
            }
            
        }
        
    }
    min=mat[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int a = 0; a < m; a++)
        {
            if (min>mat[a][i])
            {
                min=mat[a][i];
            }
            
        }
        
    }
    GET_TIME(js);
    printf("Single: AVG = %ld,MAX = %d,MIN = %d,Time = %lf\n",sum/m,max,min,js-ks);

    return 0;
}
