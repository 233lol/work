#include<stdio.h>
#include<omp.h>
#include<stdlib.h>
#include<time.h>
int bin0=0,bin1=0,bin2=0,bin3=0,bin4=0;
int main(){
    srand(time(0));
    int count =100000;
    double fl[count];
    int i;
    for ( i = 0; i < count; i++)
    {
        fl[i]=rand()*(5.0/RAND_MAX);
    }
    #pragma omp parallel for schedule(dynamic) reduction(+:bin0,bin1,bin2,bin3,bin4)
    for ( i = 0; i < count; i++)
    {
        if (fl[i]>=0&&fl[i]<1)
        {
            bin0++;
        }else if (fl[i]>=1&&fl[i]<2)
        {
            bin1++;
        }else if (fl[i]>=2&&fl[i]<3)
        {
            bin2++;
        }else if (fl[i]>=3&&fl[i]<4)
        {
            bin3++;
        }else if (fl[i]>=4&&fl[i]<=5)
        {
            bin4++;
        }
    }
    printf("%d %d %d %d %d",bin0,bin1,bin2,bin3,bin4);
    return 0;
}