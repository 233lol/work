#include<stdio.h>
int main()
{
	int i,x,b=0;
	int a[15];
	for(i=0;i<15;i++)
	   scanf("%d",&a[i]);
	scanf("%d",&x)  ;
	for(i=0;i<15;i++)
	{
			if(x==a[i])
		b=i+1;
	
		}  
    if(b!=0)
    	printf("%d",b); 
    else
        printf("ÎÞ´ËÊý") ; 
		
 } 