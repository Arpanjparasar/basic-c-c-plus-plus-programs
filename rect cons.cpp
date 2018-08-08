#include<iostream>
class rectangle;
{
	float l, b, a;
	public:
		rectangle(float,float);
		void display()
		{
			std::cout<<"Area of rectangle is="<<a;
		}
};
rectangle::rectangle(float x, float y)
{
	l=x;
	b=y;
	a=l*b;
}
main()
{
	float x,y;
	std::cout<<"Enter the length and breadth of the rectangle=";
	cin>>x>>y;
	rectangle r(x,y);
	r.display();
}
