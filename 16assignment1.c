int main() {
	int a[10],i,count=0;
	for(i=0;i<=4;i++)
	{
	    scanf("%d",&a[i]);
	}
	while(i>=0)
	{
	    if(a[i]>=10)
	    {
	        count++;
	    }
	    i--;
	}
	printf("%d",count);
}
