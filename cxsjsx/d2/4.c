#include<stdio.h>
#include<string.h>
char* helper(char* month[],int n){
    return month[n-1];
}
int main(){
    char month[20][10]={
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December",
    };
    int val;
    char* res;
    scanf("%d",&val);
    if(val>12||val<1)
        printf("Illegal month");
    else printf("%s",month[val-1]);
}