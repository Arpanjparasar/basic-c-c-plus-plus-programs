#include<iostream>
main()
{
	int fn=0, sn=1, cur, count=2,n;
	std::cout<<"Enter the no";
	std::cin>>n;
	std::cout<<fn;
	std::cout<<sn;
     do
	{
		cur=fn+sn;
		std::cout<<cur;
		fn=sn;
		sn=cur;
		count++;
	}
		while(count<n);
}
