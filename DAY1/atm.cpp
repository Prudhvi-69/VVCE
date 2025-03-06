#include<stdio.h>

int main()
{

int bal,with,total;
char name[10];
printf("Enter the name");
scanf("%s",&name);
printf("Enter acc balance");
scanf("%d",&bal);
printf("Enter withdrawal amount");
scanf("%d",&with);
if(bal>5000 && with/100!=0)
{
	printf("Transaction Successful!");
	total=bal-with;
}
printf("total amount:%d",total);
return 0;
}

