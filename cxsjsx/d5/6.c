#include<stdio.h>
int in(){
    int fun=0;
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[100];
    int i;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int flag =0;
    int cnt=0;
    for ( i = 0; i < n; i++)
    {
        if(a[i]>x){
            printf("%d ",x);
            printf("%d ",a[i]);
            flag =i;
            break;
        }else 
        {
            printf("%d ",a[i]);
        }
        cnt++;
    }
    if(cnt<n){
    for ( i = flag+1; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    }else
    {
        printf("%d",x);
    }
    
    return 0;
    
}