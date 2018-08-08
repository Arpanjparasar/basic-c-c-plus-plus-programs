//Fibonacci series for loop
#include<iostream>
	main()
{
	long int n,fn=0,sn=1,cur,count=2;
	std::cout<<"Enter the range=";
	std::cin>>n;
	std::cout<<"\t"<<fn;
	std::cout<<"\t"<<sn;
	for(count;count<n;count++)
		{
			cur=fn+sn;
			std::cout<<"\t"<<cur;
			fn=sn;
			sn=cur;
		}

}
