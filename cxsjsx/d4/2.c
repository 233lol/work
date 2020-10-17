#include<stdio.h>
#include<string.h>
void insertchar(char a[10])
{
 int i,l;
  l=strlen(a);
 for(i=0; i<l; i++)
 {
  printf("%c",a[i]);
  printf(" ");
 }
}
int main()
{
 int i, l;
 char a[10];
 gets(a);
 insertchar(a);
 return 0;
}