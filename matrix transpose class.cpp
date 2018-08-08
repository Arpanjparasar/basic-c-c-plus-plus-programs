#include<iostream>
using namespace std;
class Matrix
{
	int a[2][2],b[2][2];
	
	public :
		int i,j;
		void enter();
	void fn();
	void Show();
		
	};
void Matrix::enter()
{
	cout<<"enter the elements in the array=";
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		
		cin>>a[i][j];
	}
}
void Matrix:: fn()
{
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		b[i][j]=a[j][i];
	}
}
void Matrix::Show()
{
	cout<<"Transpose is=";
		for(i=0;i<2;i++)
	    for(j=0;j<2;j++)
	    {
	    	cout<<"\t"<<b[i][j];
	    }
}
main()
{
	Matrix a;
	a.enter();
	a.fn();
	a.Show();
}	

