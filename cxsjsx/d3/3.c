#include <stdio.h>
#define N 3
void inputmatrix(int *p)
{
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++,p++)
        scanf("%d",p); ///程序填空，请将该函数填写完整
}
void transpose(int *p)
{ 
    int i,j,t;
    for (i=0;i<3;i++)
        for (j=0;j<=i;j++)
        {   t= p[j*3+i]; 
            p[j*3+i]=p[i*3+j];
            p[i*3+j]=t;}///程序填空，请将该函数填写完整
}
void printmatrix(int *p)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++,p++)
        printf("%d ",*p);
        printf("\n");
    } ///程序填空，请将该函数填写完整
}
int main()
{
    int s[N][N], *p;
    p = &s[0][0];
    inputmatrix(p);
    transpose(p);
    printmatrix(p);
    return 0;
}