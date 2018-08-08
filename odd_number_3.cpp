// n odd numbers 3
#include<stdio.h>
	main()
{
	int n,i=1;
	printf("Enter the number=");
	scanf("%d",&n);
	if(n%2==0)
	{
		n--;
		while(i<=n)
		{
			printf("%d\t",i);
			i+=2;
		}
    }
	else
	{
		while(i<=n)
		{
			printf("%d\t",i);
			i+=2;
		}
	}
}
