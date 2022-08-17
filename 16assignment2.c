#include<stdio.h>
int main()
{
	int a[50],n,i,j,c=0;
	printf("enter size");
	scanf("%d",&n);
	printf("enter eleemnts");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
			}
			for(i=n-1;i>=0;i--)
			{
			for(j=1;j<=a[i];j++)
			{
				if(a[i]%j==0)
				{
					c++;
				}
				}	
				if(c==2)
				{
					printf("%d\n",a[i]);
				}
			}
			return 0;
}
