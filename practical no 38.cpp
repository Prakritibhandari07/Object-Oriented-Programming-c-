
#include<iostream>
using namespace std;
class complex
{
	private:
		int real;
		int img;
		public:
			complex()
			{
				real=img=0;
			}
			complex(int r,int i)
			{
				real=r;
				img=i;
			}
			void display()
			{
				cout<<real<<"+"<<img<<"i";
				cout<<endl;
			}
			complex operator+(complex c2)
			{
				complex temp;
				temp.real=real+c2.real;
				temp.img=img+c2.img;
				return temp;
			}
};
int main()
{
	complex c1(2,3);
	complex c2(4,3);
	complex c3;
	c3=c2+c1;
	c3.display();
	return 0;
}
