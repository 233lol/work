#include<stdio.h>
int main(){
int g,m,x,i=0; 
for(g=0;g<=20;g++){
for(m=0;m<=33;m++){
x=100-g-m;
if(x%3==0){
if(5*g+3*m+x/3==100){
i++;
printf("%d %d %d\n",g,m,x);
}
}
}
}
return 0;
}