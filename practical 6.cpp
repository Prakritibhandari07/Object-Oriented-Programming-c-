#include<iostream>
using namespace std;
int isPrime(int num)
{
	if(num<=1)
	return false;
	for(int i=2;i*i<=num;i++)
	{
		if(num%i==0)
		return false;
	}
	return true;
}
int main()
{
	int n1,n2;
	cout<<"Enter two numbers n1 & n2:";
	cin>>n1>>n2;
	if(n1>n2)
	{
		int temp=n1;
		n1=n2;
		n2=temp;
	}
	cout<<"Prime numbers between"<<n1<<"and"<<n2<<"are:\n";
	for(int i=n1;i<n2;i++)
	{
		if(isPrime(i))
		{
			cout<<i<<" ";
		}
	}
}
