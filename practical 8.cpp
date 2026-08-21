//program to find cube of a number.
#include<iostream>
using namespace std;
inline int cube(int num)
{
	return num*num*num;
}
int main()
{
	int number;
	cout<<"Enter a number:";
	cin>>number;
	int result=cube(number);
	cout<<"Cube of"<<number<<"is"<<result<<endl;
	return 0;
}
