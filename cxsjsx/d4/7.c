#include<stdio.h>
struct d
{
    int sss;
};

int dayofyear(int flag,int mo,int day){
    int sum=0;
    int total=0;
        switch (mo)
        {
        case 1:
            sum=0;
            break;
        case 2:
            sum=31;
            break;
        case 3:
            sum=60;
            break;
        case 4:
            sum=91;
            break;
        case 5:
            sum=121;
            break;
        case 6:
            sum=152;
            break;
        case 7:
            sum=182;
            break;
        case 8:
            sum=213;
            break;
        case 9:
            sum=244;
            break;
        case 10:
            sum=274;
            break;
        case 11:
            sum=305;
            break;
        case 12:
            sum=335;
            break;
        
        } 
   
    
    if (flag==0&&mo<=2)
    {
        total=day+sum; 
    }else if (flag==0&&mo>2)
    {
        total=day+sum-1;
    }else
    {
        total=day+sum;
    }
     return total;   
    }
    
    
int main (){
    int year,mo,day;
    int flag=0;
    scanf("%d %d %d",&year,&mo,&day);
    if (year%400==0){
        flag=1;
    }else if (year%100!=0 && year%4==0)
    {
        flag=1;
    }else
    {
        flag=0;
    }
    printf("%d",dayofyear(flag,mo,day));
    return 0;
}