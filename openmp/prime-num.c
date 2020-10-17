#include<stdio.h>
#include "timer.h"
#include<omp.h>
int pdss (int x){        
	int r=1;     
	int i;     
	if(x==1||(x%2==0&&x!=2)||(x%3==0&&x!=3)){         
		r=0;     
	}else{         
		for(i=5;i*i<x;i+=6){             
			if(x%i==0||x%(i+2)==0){                 
				r=0;         
				break;             
			}         
		}     
	}     
	return r; 
}
int main (){
	int a;
	double ks ,js;
	scanf("%d",&a);
	int n=0;
	GET_TIME(ks);
    #pragma omp parallel for schedule(dynamic) reduction(+:n)
	for(int i=0;i<=a;i++){
		n+=pdss(i);
    }
	GET_TIME(js);
	printf("n=%d,  time=%lf\n",n,js-ks);
	return 0;
}