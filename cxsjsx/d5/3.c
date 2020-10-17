#include<stdio.h>
#define N 50
long htoi(char *s)
{
	int i,t;            
	long sum =0;
	for(i=0;s[i];i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		t=s[i]-'0';       
		if(s[i]>='a'&&s[i]<='z')
		t=s[i]-'a'+10;
		if(s[i]>='A'&&s[i]<='Z')
		t=s[i]-'A'+10;
		sum=sum*16+t;
	}
	return sum;
 } 
int main()
{
	int m;
	char s[N];        
	scanf("%s",s);   
	m=htoi(s);
	printf("%d",m);
 }