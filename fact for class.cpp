
// factorial by using for loop
#include<iostream>
using namespace std;
class Fact
{
	int n,i;
	public:
		void fn();
};
void Fact::fn()
	{
		cout<<"Enter the number:";
		cin>>n;
		i=1;
		for(n;n>=1;n--)
		{
			i=i*n;
		}
		cout<<"Factorial:"<<i;
	}
main()
{
	Fact f;
	f.fn();
}
