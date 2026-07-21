//program to find product of two numbers.
#include<iostream>
using namespace std;
int product(int a,int b)
{
	if (b==0)
	return 0;
	if(b<0)
	return -product(a,-b);
	return a + product(a,b-1);
	
}
int main()
{

int num1,num2;
cout<<"Enter two integers:";
cin>>num1>>num2;
int result=product(num1,num2);
cout<<"Product of "<<num1<<"and "<<num2<<"is:"<<result<<endl;
return 0;
}
