#include<stdio.h>
int main(){
 int x;
 scanf("%d",&x);
 int a,b,c,d,e;
 a=x/10000;
 b=(x%10000)/1000;
 c=((x%10000)%1000)/100;
 d=(((x%10000)%1000)%100)/10;
 e=x%10;
 int s=1;
 if(a!=0) s++;
 if(b!=0) s++;
 if(c!=0) s++;
 if(d!=0) s++;
 printf("%d\n",s);
 if(s==5){
  printf("%d %d %d %d %d\n",a,b,c,d,e);
  printf("%d",e*10000+d*1000+c*100+b*10+a);
  }
 if(s==4){
  printf("%d %d %d %d\n",b,c,d,e);
  printf("%d",e*1000+d*100+c*10+b);
  }
 if(s==3){
  printf("%d %d %d\n",c,d,e);
  printf("%d",e*100+d*10+c);
  }
 if(s==2){
  printf("%d %d\n",d,e);
  printf("%d",e*10+d);
  }
 if(s==1){
  printf("%d\n",e);
  printf("%d",e);}
 
} 