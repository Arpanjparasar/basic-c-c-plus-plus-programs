// average of n numbers
#include<iostream>
	main()
{
	int n,sum=0,count=0;
	float avg;
	std::cout<<"Enter the number(Put -1 at the end)=";
	std::cin>>n;
	while(1)
	{
		if(n==-1)
		{
			break;
		}
	sum=sum+n;
	count++;
	std::cin>>n;	
	}
	avg=(float)sum/count;
	std::cout<<"Average of the numbers is="<<avg;
} 
