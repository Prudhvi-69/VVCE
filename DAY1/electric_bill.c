#include<stdio.h>

void main()
{
	int units,total;
	printf("Enter the units: ");
	scanf("%d",&units);
	
	if(units<=100)
	{
		total=units*2;
	}
	else if(units>100 && units<=200)
	{
		total=((units-100)*3)+(100*2);
	}
	else if(units>200)
	{
		total=((units-200)*5)+(100*2)+(100*3);
	}
	
	printf("Total Amount payable : %d",total);
	
}
	

