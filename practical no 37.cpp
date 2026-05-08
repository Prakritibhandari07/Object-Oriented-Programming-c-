#include<iostream>
using namespace std;
class space
{
	private:
		int x;
		int y;
		int z;
		public:
			space()
			{
				x=y=z=0;
			}
			space(int a,int b,int c)
			{
				x=a;
				y=b;
				z=c;
			}
			void display()
			{
				cout<<"("<<x<<","<<y<<","<<z<<")";
				cout<<endl;
			}
			void operator-()
			{
				x=-x;
				y=-y;
				z=-z;
			}
		};
		int main()
		{
			space s;
			-s;
			s.display();
			return 0;
}
