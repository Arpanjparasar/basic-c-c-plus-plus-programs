// n odd numbers 3
#include<iostream>
	main()
{
	int n,i=1;
	std::cout<<"Enter the range=";
	std::cin>>n;
	if(n%2==0)
	{
		n--;
		while(i<=n)
		{
			std::cout<<"\t"<<i;
			i+=2;
		}
    }
	else
	{
		while(i<=n)
		{
			std::cout<<"\t"<<i;
			i+=2;
		}
	}
}
