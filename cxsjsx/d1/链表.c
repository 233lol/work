#include <stdio.h>
#include <string.h>
#define N 10
#define M 20
void invert(char *p[], int n)
{
     ///������գ��뽫�ú�����д����
     int a,b,c;
     char *s;
     for(a=0,b=n-1;a<n/2;a++,b--)
     {
     	s=p[a];
     	p[a]=p[b];
     	p[b]=s;
	 }
     
}
int main( )
{
    char str[N][M], *p[10];
    int i, n;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        gets(str[i]);
        p[i] = str[i];
    }
    invert(p, n);
    for(i = 0; i < n; i++)
        puts(p[i]);
    return 0;
}