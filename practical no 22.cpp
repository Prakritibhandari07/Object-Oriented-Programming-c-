//Program to find student detail..
#include<iostream>
#include<limits>
using namespace std;
class student
{
	private:
		int rollno;
		char name[20];
		float marks;
		public:
			void read()
			{
			
			cout<<"Enter student roll-no:";
			cin>>rollno;
			cout<<"Enter student name:";
	    	cin>>name;
			cout<<"Enter student marks:";
			cin>>marks;
			cout<<endl;
}
void display()
const{

cout<<" student rollno:"<<rollno<<endl;
cout<<" student name:"<<name<<endl;
cout<<" student marks:"<<marks<<endl;
cout<<"...................."<<endl;
}
};
int main()
{
	student s1,s2,s3;
	cout<<"Entering details of student 1:\n";
	s1.read();
	cout<<"Entering details of student 2:\n";
	s2.read();
	cout<<"Entering details of student 3:\n";
	s3.read();
	cout<<"\nDisplaying all student records:\n";
	s1.display();
	s2.display();
	s3.display();
	return 0;
}
