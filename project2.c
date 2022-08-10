#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,sum=0,t;
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		r=t%10;
		sum=sum+r;
		t=t/10;
	}
	if(n%sum==0)
	{
		printf("harshad number");
	}
	else
	{
		printf("not harshad number");
	}
  
}
