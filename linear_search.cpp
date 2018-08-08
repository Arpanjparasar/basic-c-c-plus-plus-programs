// linear search
#include<iostream>
main()
{
	int a[5],i,key,flag=0;
	std::cout<<"\n Enter the elements in the array=";
	for(i=0;i<=4;i++)
	{
		std::cin>>a[i];
	}
	std::cout<<"\n Enter the element to be searched=";
	std::cin>>key;
	for(i=0;i<=4;i++)
	{
		if(a[i]==key)
		{
			std::cout<<"\n\n Search successful\n position of element found is="<<i+1;
			flag=1;
		}
	}
		if(flag==0)
		{
			std::cout<<("\n Search unsuccessful...");
		}
	
}
