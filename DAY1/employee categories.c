#include<stdio.h>
void main()
{
	int n,i,sal[20],h=0,l=0,m=0;
	printf("enter the no of employees");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the salary-%d:",i+1);
		scanf("%d",&sal[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(sal[i]>=70000)
		 h++;
		else if(sal[i]>=30000 && sal[i]<70000)
		 m++;
		else
		l++;
	}
	printf("high income:%d",h);
	printf("medium income:%d",m);
	printf("low income:%d",l);
}
