#include<iostream>
using namespace std;
main()
{

 long int n,rev=0,d;
 cout<<"Enter the number:";
 cin>>n;

 while(n!=0)
 {
  d=n%10;
  rev=(rev*10)+d;
  n=n/10;
 }

 cout<<"The reversed number is "<<rev;
 
}

