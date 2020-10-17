#include<stdio.h>
int main()
{
 char a[4][100];
 int e=0,b1=0,c1=0,d1=0,b=0,c=0,d=0,f=1,g=1;
 while(f<4)
 {
  scanf("%c",&a[f][g]);
  if(a[f][g]<='Z'&&a[f][g]>='A') b++;
  else if(a[f][g]<='z'&&a[f][g]>='a') c++;
  else if(a[f][g]<='9'&&a[f][g]>='0') d++;
  else if(a[f][g]==' ') b1++;
  else c1++;
  
  if(a[f][g]=='\n') 
  {
   f++;
   g=1;
  }
  else g++;
  
 }
 printf("%d %d %d %d %d",b,c,d,b1,c1-3);
}