#include<stdio.h>
void main()
{
	int products;
	scanf("%d",&products);
	int qv[products];
	int accept=0,reject=0;
	int i;
	for(i=0;i<products;i++)
	{
		scanf("%d",&qv[i]);
		if(qv[i]>=950 && qv[i]<=1050)
			accept++;
		else
			reject++;
	}
	printf("Accepted : %d",accept);
	printf("\nRejected : %d",reject);
}
