//factorial using do while loop
#include<iostream>
using namespace :: std;
class fact
{
	int fac;
	public:
		int i=1;
		void fn(int x);
		void show();
};

void fact::fn(int x)
	{
		fac=1;
		do
			{
				fac=fac*i;
				i++;
			}
		while(i<=x);
	}	
void fact::show()
	{
		cout<<"Factorial="<<fac;
	}
main()
	{
		int a;
		cout<<"Enter the number:";
		cin>>a;
		fact f1;
		f1.fn(a);
		f1.show();
	}
