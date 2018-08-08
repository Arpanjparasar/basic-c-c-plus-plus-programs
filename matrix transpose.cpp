#include<iostream>
	main()
{
	int a[3][3],b[3][3],i,j;
	std::cout<<"Enter the elements in matrix A=";
	for(i=0;i<=2;i++)
	for(j=0;j<=2;j++)
	{	
		std::cin>>a[i][j];
		std::cout<<"\t";
	}
	for(i=0;i<=2;i++)
	for(j=0;j<=2;j++)
	{
		b[i][j]=a[j][i];
	}
	std::cout<<"\n";
	for(i=0;i<=2;i++)
	for(j=0;j<=2;j++)
	{
		std::cout<<"\t"<<b[i][j];
	}
}
