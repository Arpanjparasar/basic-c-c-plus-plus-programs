#include<iostream>
using namespace std;
	main()
	{
		float x, y;
		int choice;
		cout<<"Enter the first number=";
		cin>>x;
		cout<<"Enter the second number=";
		cin>>y;
		cout<<"*****Main Menu*****\n";
		cout<<"1. Add\n";
		cout<<"2. Subtract\n";
		cout<<"3. Multiply\n";
		cout<<"4. Division\n";
		cout<<"Enter your choice=";
		cin>>choice;
		
		switch(choice)
			{
				case 1 : cout<<"Addition is="<<x+y;
					break;
				case 2: cout<<"Substraction is="<<x-y;
					break;
				case 3 : cout<<"Multiplication is="<<x*y;
					break;
				case 4: if(y==0)
						{
							
							cout<<"cannot divide by zero";
						}
					
					cout<<"Division is="<<x/y;
					break;
			
				default: cout<<"WRONG CHOICE";
			}
	}
	 
	 
