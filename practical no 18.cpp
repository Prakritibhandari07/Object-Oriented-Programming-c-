//Program to find larger distance.

#include<iostream>
using namespace std;
class Distance
{
	private:
		int meter;
		int centimeter;
		
		public:
			Distance()
			{
				meter=centimeter=0;
			}
			Distance(int m,int cm)
			{
				meter=m;
				centimeter=cm;
			}
			void display()
			{
				cout<<meter<<","<<centimeter<<" "<<endl;
			}
			int operator>(Distance d2)
			{
				if(meter>d2.meter)
				return 1;
				else if (meter==d2.meter&&centimeter>d2.centimeter)
				return 1;
				else return 0;
			}
};
int main()
{
	Distance d1(3,5);
	Distance d2(4,5);
	cout<<"The Larger distance:";
	if (d1>d2)
	d1.display();
	else 
	d2.display();
	return 0;
}
