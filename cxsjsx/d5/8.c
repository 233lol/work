#include <stdio.h>
#include <string.h>
void main()
{
char a[100];
char week_day[][100]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
gets(a);
int i;
for(i=0;i<7;i++)
{
if(strcmp(a,week_day[i])==0)
break;
}
if(i<7)
printf("%d\n",i);
else
printf("Error\n");
}