#include<iostream>
using namespace std;
int main()
{
	int num;
	int isPrime=true;
	cout<<"Enter a positive integer:";
	cin>>num;
	if(num<=1){
	
	cout<<"Number is neither prime nor composite."<<endl;
}
else{
	for(int i=2;i<=num/2;++i)
	{
		if(num%i==0)
		{
			isPrime = false;
			break;
		}
	}
	if(isPrime)
	cout<<num<<"is a prime number."<<endl;
	else
	cout<<num<<"is a composite number."<<endl;
}return 0;
}
