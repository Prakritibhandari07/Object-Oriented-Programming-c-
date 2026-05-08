#include<iostream>
#include<string>
using namespace std;
class string
{
	private:
		int len;
		char *str;
		public:
			string()
			{
				len=0;
				str=new char[len+1];
			}
			string(char s[])
			{
				len=strlen(s);
				str=new char[len+2];
				strcpy(str,s);
			}
			void display()
			{
				cout<<str<<endl;
				
			}
			string operator+(string s2)
			{
				string temp;
				temp.len=len+s2.len;
				temp.str=new char(temp.len+3);
				strcpy(temp.str,str);
				strcat(temp.str,str);
				strcat(temp.str,s2.str);
				return temp;
			}
};
int main()
{
	string s1("united");
	string s2("states of america");
	string s3;
	s3=s1+s2;
	s3.display();
	return 0;
}
