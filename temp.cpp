/*PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS PALINDROME OR NOT*/

#include<iostream>
using namespace std;

class palindrome

{

int n,temp,rev,rem;

public:

void input();

void output();

};

void palindrome::input()

{

cout<<“Enter any number: “;

cin>>n;

}

void palindrome::output()

{

temp=n;

rev=0;

while(temp>0)

{

rem=temp%10;

temp=temp/10;

rev=rev*10+rem;

}

if(rev==n)

cout<<n<<” is palindrome”;

else

cout<<n<<” is not palindrome”;

}

void main()

{

palindrome p1;

clrscr();

p1.input();

p1.output();

getch();

}
