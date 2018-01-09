#include<stdio.h>
int main(void)
{
	int n;
	int a[20],i;
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	for(i=i-1;i>=0;i--)
	{
		if(a[i]==1 || a[i]==0)
		printf("%d",a[i]);
		else
		{
		printf("Error");
		break;
		}
	}
return 0;	
}
