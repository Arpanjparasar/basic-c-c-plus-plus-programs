#include <iostream>
using namespace std;
class Area
{
    private:
       int length;
       int breadth;

    public:
       Area(): length(), breadth(){ }   /* Constructor */
       void GetLength()
       {
           cout<<"Enter length and breadth respectively: ";
           cin>>length>>breadth;
       }
       int AreaCalculation() {  return (length*breadth);  }
       void DisplayArea(int temp)
       {
           cout<<"Area: "<<temp;
       }
};
int main()
{
    Area A1,A2;
    int temp;
    A1.GetLength();
    temp=A1.AreaCalculation();
    A1.DisplayArea(temp);
	return 0;
}

