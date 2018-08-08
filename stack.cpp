#include<iostream>
int top=-1, a[5];
void push();
void pop();
void display();
void menu();
main()
{
menu();
}
void push()
{
	if(top>5)
	{
		std::cout<<"Stack is full";
	}
	else
	{
		top++;
		std::cin>> a[top];
	}
	display();
	menu();
}
void pop()
{
	int p;
	if(top==-1)
	{
		std::cout<<"Stack is empty";
		menu();
	}
	else
	{
		p= a[top];
		std::cout<<"Deleted item is="<<p<<"\n";
		top--;
		display();
    	menu();
	}
	
}
void display()
{
	int i;
	for(i=0;i<=top;i++)
	{
		std::cout<<a[i];
	}
}
void menu()
{
		int ch;
	std::cout<<"\n\t****STACK****\n";
	std::cout<<"\t1.Push\n";
	std::cout<<"\t2.Pop\n";
	std::cout<<"\tEnter the choice=";
	std::cin>>ch;
	do{
		switch(ch)
		{
			case 1:push();
			break;
			case 2: pop();
		}
	}
	while(top>=5);
	
}
