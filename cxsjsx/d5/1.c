#include <stdio.h>
int main()
{
    double i,s=0,x=0,y; 
    scanf("%lf",&x);              
    for(i=1;i<=10;i++)    
    {
        y=x/2;            
        s=s+x+y;          
        x=y;              
    }
    s=s-y;                
                          
    printf("%.5lf %.5lf",s,y);
    return 0;
}