#include<iostream>
using namespace std;
class time
{
	private:
		int hr;
		int min;
		int sec;
		public:
			time()
			{
				hr=min=sec=0;
			}
			time(int hr,int min,int sec)
			{
				this->hr=hr;
				this->min=min;
				this->sec=sec;
			}
			void display()
			{
				cout<<hr<<"+"<<min<<"+"<<sec;
				cout<<endl;
			}
			time operator+(time t2)
			{
				time temp;
				temp.hr=hr+t2.hr;
				temp.min=min+t2.min;
				temp.sec=sec+t2.sec;
				return temp;
			}
};
int main()
{
	time t1(2,20,10);
	time t2(5,20,10);
	time t3;
	t3=t3+t2;
	t3.display();
	return 0;
}
