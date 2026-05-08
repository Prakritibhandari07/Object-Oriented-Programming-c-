#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter two integers(m&n):";
	cin>>m>>n;
	if(n==0)
	{
	
	cout<<"n can not be zero,zero cannot divide any number:"<<endl;
	}
	else if(m%n==0)
	{
		cout<<"m is divisible by n."<<endl;
	}
	else
	{
		cout<<"m is not divisible by n."<<endl;
	}
	return 0;
	
	
}
