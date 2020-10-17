#include<stdio.h>
struct student
{   char name[20];
    char num[20];
    int X;
    int Y;
    int Z;
}st[20];
void input (){
    int i;
    for(i=0;i<5;i++)
    scanf("%s%s%d%d%d",&st[i].num ,&st[i].name,&st[i].X,&st[i].Y,&st[i].Z);
}
void print(){
    int i;
    for (i=0;i<5;i++)
    printf("%-13s%-9s%4d%4d%4d\n",st[i].num ,st[i].name,st[i].X,st[i].Y,st[i].Z);
}
int main(){
 input();
 print();
 return 0;
}  