#include<stdio.h>
typedef struct st
{   char num[20];
    char name[20];
    int a;
    int b;
    int c;
    float avg;
}st;
int main(){
    st st[10];
    int sum;
    for (int i = 0; i < 10; i++)
   {
       scanf("%s%s%d%d%d",&st[i].num,&st[i].name,&st[i].a,&st[i].b,&st[i].c);
   }
    for (int i = 0; i < 10; i++)
   {
       int my_sum=0;
       my_sum=(st[i].a+st[i].b+st[i].c);
       sum+=my_sum;
       st[i].avg=my_sum/3.0;
   }
    float max =st[0].avg;
    int flag=0;
    for(int i=0;i<10;i++)
    {
        if(st[i].avg>max){
            max=st[i].avg;
            flag=i;
        }
    }
    printf("%.2f\n",sum/30.0);
    printf("%s %s %d %d %d %.2f",st[flag].num,st[flag].name,st[flag].a,st[flag].b,st[flag].c,st[flag].avg);
    return 0;
}