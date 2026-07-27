//Program to find the prime numbers between 300 and 500.

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
int main(){

cout<<"Prime numbers between 300 and 500 are: \n";
for(int i=300;i<=500;i++)
{
	if(isPrime(i))
	{
		cout<<i<<" ";
	}
}
cout<<endl;
return 0;
}
