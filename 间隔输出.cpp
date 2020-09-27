# include<stdio.h>
int main()
{
	int a,x[100],i=0,j;
	scanf("%d",&a);
	while(a>0)
	{
		x[i]=a%10;
		a/=10;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d ",x[j]); 
	}
	return 0;
}