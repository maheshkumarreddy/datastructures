#include<stdio.h>
void main()
{
	long a,n;
	int i,temp;
	printf("Enter the value of n \t:");
	scanf("%d",&n);
	printf("\n Enter %d values into the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		while(i!<0 && (a[i-1]>a[i]))
		{
			temp=a[i];
			a[i]=a[i-1];
			a[i-1]=temp;	
		}
	}
	for(i=0;i<n;i++)
	{
		printf(a[i]);
	}

}
