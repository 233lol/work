#include<stdio.h>

void DataSort (int arr[], int len) {
    int temp;
    int i, j;
    for (i=0; i<len-1; i++) /* 外循环为排序趟数，len个数进行len-1趟 */
        for (j=0; j<len-1-i; j++) { /* 内循环为每趟比较的次数，第i趟比较len-i次 */
            if (arr[j] > arr[j+1]) { /* 相邻元素比较，若逆序则交换（升序为左大于右，降序反之） */
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
}
int main(){
    int a[1000];
    int n=0;
    scanf("%d",&n);
    int i=0;
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    DataSort(a,n);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}