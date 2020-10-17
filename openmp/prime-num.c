#include<stdio.h>
#include "timer.h"
#include<omp.h>
int pdss (int n){        
	if (n <= 3) {
        return n > 1;
    } else if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    } else {
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % （i + 2） == 0) {
                return 0;
            }
        }
        return 1;
    }
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