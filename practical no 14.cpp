//Program to find area of triangle.
#include<iostream>
using namespace std;
void area(double base,double height)
{
	double result=0.5*base*height;
	cout<<"Area of triangle="<<result<<endl;
}
void area(double radius)
{
	const double pi=3.14;
	double result=pi*radius*radius;
	cout<<"Area of circle="<<result<<endl;
}
int main()
{

double r,b,h;
cout<<"Enter radius of circle:";
cin>>r;
area(r);
cout<<"Enter base and height of triangle:";
cin>>b>>h;
area(b,h);
return 0;
}
