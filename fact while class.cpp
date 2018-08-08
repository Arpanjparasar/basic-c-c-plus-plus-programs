//factorial using while loop
#include<iostream>
using namespace std;
class fact
	{
		int n,i;
		public:
			
			void fn();
	};
void fact::fn()
	{
		cout<<"Enter the number:";
		cin>>n;
		i=1;
		while(n>=1)
		{
			i=i*n;
			n--;
		}
		
		
		cout<<"Factorial:"<<i;
	}
main()
{
	fact f;
	f.fn();
}
