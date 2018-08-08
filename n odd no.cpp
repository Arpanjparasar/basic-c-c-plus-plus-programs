// n odd numbers 2
#include<iostream>
	main()
{
	int n;
	std::cout<<"Enter the number=";
	std::cin>>n;
	if(n%2==0)
	{
		n--;
		while(n>=1)
		{
			std::cout<<"\t"<<n;
			n-=2;
		}
	}
	else
	{
		while(n>=1)
		{
			std::cout<<"\t"<<n;
			n-=2;
		}
	}
}
