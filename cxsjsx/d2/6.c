#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Magic(int m);
int Tput(int a,int b,int c);
int main()
{
    int m;
    int M;
    scanf("%d",&m);
    M=Magic(m);
    if(M==99){
    printf("error");
    }else{
    printf("%d",M);
    }
    return 0;
}
int Magic(int m)
{
    int a, b, c;
    int i ;
    int s ;
    for(i=999;i>99;i--)
    {   
    a=i/100;
    b=i%100/10;
    c=i%10;
    s=Tput(a,c,b)+Tput(b,a,c)+Tput(b,c,a)+Tput(c,a,b)+Tput(c,b,a);
    if(s==m){
    break;}
    }
    return i;
}
int Tput(int a,int b,int c)
{
return a*100+b*10+c;
}