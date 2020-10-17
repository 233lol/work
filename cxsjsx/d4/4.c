#include <stdio.h>
#include <string.h>

int main(void){
void sort(char str[10][30]);
char str[10][30];
char (*p)[30];
p=str;
int i;
for(i=0;i<10;i++){
	scanf("%s",p++);
}
sort(str);
for(i=9;i>=0;i--){
	printf("%s\n",str[i]);
}
return 0;
}
void sort(char str[10][30]){
int i;
int j;
char temp[30];
for(i=0;i<9;i++){
for(j=i+1;j<10;j++){
if(strcmp(str[i],str[j])<0){
strcpy(temp,str[i]);
strcpy(str[i],str[j]);
strcpy(str[j],temp);
}
}
}
}