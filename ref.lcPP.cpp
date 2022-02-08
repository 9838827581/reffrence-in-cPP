#include<iostream>
using namespace std;
int main()
{
int x=10;
int &y=x;
cout<<"val of X="<<x<<endl;
cout<<"val of Y="<<y<<endl;
x++;
y++;
cout<<"val of X="<<x<<endl;
cout<<"val of Y="<<y<<endl;

}
