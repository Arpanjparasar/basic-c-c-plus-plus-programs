//pallindrome no. using while loop
#include<iostream>
using namespace ::std;
class pallin
{
	int rev;
	public:
	int num,ld;
	void pal(int n);	
};
void pallin::pal(int n)
{
	rev=0;
num=n;
while(n!=0)
		{
			ld=n%10;
			rev=rev*10+ld;
			n/=10;
		}
	if(rev==num)
	 {
	 	cout<<"The number is palindrome";
	 }
	 else
	 {
	 	cout<<"The number is not palindrome";
	 }
}
main()
{
	int c;
	cout<<"Enter the number=";
	cin>>c;
	pallin p;
	p.pal(c);
}

		
	 

