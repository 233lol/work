#include<stdio.h>
#include<omp.h>
int c =1;
#pragma omp threadprivate(c)
void inc_c(){
    c*=2;
}
int main(){
    #pragma omp parallel
    for (int i=0;i<10;i++){
        inc_c();
    }
    printf("c=%d\n",c);
    return 0;
}