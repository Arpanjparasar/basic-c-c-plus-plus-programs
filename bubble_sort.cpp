#include<iostream>
main()
{
	int a[5],i,j,temp;
	std::cout<<"\n Enter the elements in the array=";
	for(i=0;i<=4;i++)
	{
		std::cin>>a[i];
	}
	for(i=0;i<=4;i++)
	
	
	for(j=0;j<4-i;j++)

	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
		std::cout<<"\n\n Sorted elements are=";
		for(i=0;i<=4;i++)
		{
		std::cout<<a[i];
		}
	
}
