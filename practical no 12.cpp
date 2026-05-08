#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"Enter three numbers:";
	cin>>num1>>num2>>num3;
	int sum=num1+num2+num3;
	int average=sum/3;
	int largest= max(num1,max(num2,num3));
	int smallest= min(num1,(num2,num3));
	cout<<"\n  Results:\n";
	cout<<"sum="<<sum<<"\n";
	cout<<"average="<<average<<"\n";
	cout<<"largest="<<largest<<"\n";
	cout<<"smallest="<<smallest<<"\n";
	return 0;
}
