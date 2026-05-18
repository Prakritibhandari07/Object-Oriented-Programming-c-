//Program to find simple interest

#include<iostream>
using namespace std;
float simpleInterest(float principal,float rate,int time)
{
	return(principal*rate*time)/100;
}
int main(){
float p,r;
int t;
cout<<"Enter principal amount:";
cin>>p;
cout<<"Enter rate of interest:";
cin>>r;
cout<<"Enter time in years:";
cin>>t;
float Interest=simpleInterest(p,t,r);
cout<<"Simple Interest="<< Interest <<endl;
return 0;
}
