#include<stdio.h>
void main()
{
	char Name[50];
	int ID, NOD, Salary, Bonus=0;
	printf("\nEmployee Name : ");
	scanf("%s",Name); // scanf("%[^\n]s",Name);
	printf("\nEmployee ID : ");
	scanf("%d",&ID);
	printf("\nDays worked : ");
	scanf("%d",&NOD);
	printf("\nSalary : ");
	scanf("%d",&Salary);
	
	if(NOD>=25)
	{
		Salary = Salary + (Salary*0.25);
		Bonus = Salary*0.25;
	}
	else if(NOD<10)	
		Salary = Salary / 2;
		
	printf("\nFinal Salary : %d", Salary);
	if(NOD>=25)
		printf("\nBonus Salary : %d",Bonus);
	if(NOD>=25)
		printf("\nExcellent");
	else if(NOD>10 && NOD<25)
		printf("\nGood");
	else
		printf("\nNeeds improv");
		
}
