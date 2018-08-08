// factorial using for loop and constructor
#include<iostream>
class factorial ;
{

	int num;
	int fact;
	public:
		factorial(int);
		void display();
		{
			std::cout<<"Factorial"<<fact;
		}
};
factorial::factorial(int n)
{
	int i;
	num=n;
	fact=1;
	for(i=1;i<=num;i++)
	{
		fact=fact*i
	}
	
}
main()
{
	int x;
	std::cout<<"Enter the number=";
	std::cin>>x;
	factorial f(x);
	f.display()
}
