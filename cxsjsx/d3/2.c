#include <stdio.h>
void main()
{
	int flag=0,n,z,m,i,j,l,h,k,A[10][10],max1;
	scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
		for(j=0;j<n;j++)
			scanf("%d",&A[i][j]);
	}
	
	z=1;
	for(i=0;i<m;i++)
	{
		max1=A[i][0];
	    h=i;
	    l=0;
	for(j=0;j<n;j++)
		{
			if(A[i][j]>max1)
			{
			    max1=A[i][j];
			    h=i;
			    l=j;
			}
		}
		for(k=0;k<m;k++)
		{
			if(A[k][l]>=max1)
			   flag=1;
			else
			{
			   flag=0;
			   break;
			}
		}
		if(flag==1)
		{
		printf("A[%d][%d]=%d是鞍点",h,l,max1);
		z=0;
		}
	}
	if(flag==0&&z!=0)
	printf("没有鞍点");
}