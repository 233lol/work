#include<stdio.h>
struct student
{   char name[20];
    char num[20];
    int X;
    int Y;
    int Z;
    float avg;
}st[20];
int main(){
 int i;
 int flag;
 float max;
 float p,sum=0.0;
 for(i=0;i<10;i++)
 scanf("%s%s%d%d%d",&st[i].num ,&st[i].name,&st[i].X,&st[i].Y,&st[i].Z);
 
 for(i=0;i<10;i++)
 {
  st[i].avg=(st[i].X+st[i].Y+st[i].Z)*1.0/3;
 }
 
 for(i=0;i<10;i++)
 {
  sum=sum+st[i].avg;
 }
 p=sum/10;
 max=st[0].avg;
 for(i=0;i<10;i++)
 {
  if(st[i].avg>=max)  {
  max=st[i].avg  ;flag=i;  }
  
 }
 
 printf("%.2f\n",p);
 printf("%s %s %d %d %d %.2f",st[flag].num,st[flag].name,st[flag].X,st[flag].Y,st[flag].Z,st[flag].avg);
 return 0;
}  