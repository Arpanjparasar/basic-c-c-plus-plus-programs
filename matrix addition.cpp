#include<iostream>
using namespace std;
	main()
{
	int a[2][2],b[2][2],c[2][2],i,j,r,d,p,q;
	cout<<"Enter the rows in matrix A=";
	cin>>r;
	cout<<"Enter the columns in matrix A=";
	cin>>d;
	cout<<"Enter the rows in matrix B=";
	cin>>p;
	cout<<"Enter the columns in matrix B=";
	cin>>q;
	if((r==p)&&(d==q))
{
	cout<<"Matrix can be added\n";
	cout<<"Enter the elements in matrix A=";
	for(i=0;i<=r-1;i++)
	for(j=0;j<=d-1;j++)
	{
		cin>>a[i][j];
	}
	cout<<"Enter the elements in matrix B=";
	for(i=0;i<=p-1;i++)
	for(j=0;j<=q-1;j++)
	{
		cin>>b[i][j];
	}
	for(i=0;i<=1;i++)
	for(j=0;j<=1;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
	for(i=0;i<=1;i++)
	for(j=0;j<=1;j++)
	{
		cout<<"\t"<<c[i][j];
    }
}	
	else
	{
		cout<<"Matrix cannot be added";
	}
}
