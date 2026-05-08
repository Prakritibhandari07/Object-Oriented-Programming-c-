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
			void operator++()
			{
				x=x+1;
				y=y+1;
				z=z+1;
			}
		};
		int main()
		{
			space s;
			++s;
			s.display();
			return 0;
}
