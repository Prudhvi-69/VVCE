#include<stdio.h>
#include<string.h>
void main()
{
	int n,total=0;int i;
	char* s1="Car";
	char* s2="Bike";
	char* s3="Truck";
	char val[10];
	
	printf("Enter the number of vehicles : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Vehicle %d : ",i);
		scanf("%s",&val);
		
		if(!(strcmp(s1,val)))
		{
			total+=50;
		}
		else if(!(strcmp(s2,val)))
		{
			total+=20;
		}
		else if(!(strcmp(s3,val)))
		{
			total+=100;
		}
		else
		{
			total=total;
		}
	}
	printf("Total toll collection = %d",total);
}
