//Fibonacci series using do while loop
#include<iostream>
using namespace ::std;
class fibo
{
		int fn,sn,cur,count;
		public:
		fibo()
		{
		fn=0,sn=1,count=2;
		int n;
	cout<<"Enter the range=";
	cin>>n;
	cout<<"\t"<<fn;
	cout<<"\t"<<sn;
	do
	{
	    cur=fn+sn;
		cout<<"\t"<<cur;
		fn=sn;
		sn=cur;
		count++;
	}
	while(count<n);
		}
		
};
main()
{
	fibo f;
}
