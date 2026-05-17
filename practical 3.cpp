//Calculating the circumference of a circle.

#include<iostream>
using namespace std;
int main()
{
	float radius,area,Circumference;
	const float PI=3.1416;
	cout<<"Enter the radius of the circle:";
	cin>>radius;
	area=PI*radius*radius;
	Circumference=2*PI*radius;
	cout<<"Area of the Circle:"<<area<<endl;
	cout<<"Circumference of the Circle:"<<Circumference<<endl;
	return 0;
}
