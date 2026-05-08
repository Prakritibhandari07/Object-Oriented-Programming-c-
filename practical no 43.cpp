#include<iostream>
using namespace std;
class distance
{
	private:
		int feet;
		int inch;
		public:
			distance()
			{
				inch=feet=0;
			}
			distance(int f,int i)
			{
				feet=f;
				inch=i;
			}
			void display()
			{
				cout<<feet<<","<<inch<<",,"<<endl;
			}
			int operator+(distance d2)
			{
				distance temp;
				temp.feet=feet+d2.feet;
				temp.inch=inch+d2.inch;
				if(temp.inch>=12)
				{
					temp.feet++;
					temp.inch++;
						temp.inch=12;
				}
				return temp;
			}
		};
			int main()
			{
				distance d1(2,4);
				distance d2(2,2);
				d3=d1+d2;
				d3.display();
				return 0;
			}

