//average using array
#include<iostream>
using namespace std;
main()
	{
		int a[6],i,count=0,sum=0;
		float avg;
		cout<<"Enter the elements in the array=";
		for(i=0;i<=5;i++)
			{
				cin>>a[i];
			}
		for(i=0;i<=5;i++)
			{
				sum=sum+a[i];
				count++;
			}
		avg=(float)(sum/count);
		cout<<"\n Average="<<avg;
	}
