#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include "omp.h"
int s1=0,s2=0,s3=0,s4=0,s5=0;
int main()
{
	srand(time(0));
	double fl[1000];
	int i;
	for(i=0;i<1000;i++)
	{
		fl[i]=rand()*(5.0/RAND_MAX);
	}
	# pragma omp for
	for(i=0;i<1000;i++)
	{
		if(fl[i]<=1)
			s1++;
	    else if(fl[i]<=2)
	       s2++;
	       else if(fl[i]<=3)
	       s3++;
	       else if(fl[i]<=4)
	       s4++;
	       else if(fl[i]<=5)
	       s5++;
	}
	printf("%d %d %d %d %d",s1,s2,s3,s4,s5);
 }
