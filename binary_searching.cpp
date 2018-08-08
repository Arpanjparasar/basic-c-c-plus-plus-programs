//Binary Searching
#include<iostream>
using namespace ::std;
main()
{
	int a[5],i,j,temp,key,flag=0;
	cout<<"Enter the elements in the array=";
	for(i=0;i<=4;i++)
	{
		cin>>a[i];
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
	cout<<"Array Elements after sorting....";
	for(i=0;i<=4;i++)
	{
		cout<<a[i];
	}
	cout<<"\n Enter the element to be searched=";
	cin>>key;
	int low=0,high=4,mid=(low+high)/2;
	for(i=0;i<=4;i++)
	{
		if(key==a[mid])
		{
			cout<<"\n Search successful in position="<<mid+1;
			flag=1;
		}
		else if(key>a[mid])
		{
			low=mid+1;
			mid=(high+low)/2;	
		}
		else
		{
			high=mid+1;
		
		}
	}
if(flag==0)
{	
		cout<<"Search Unsuccessful......";
	}
}

