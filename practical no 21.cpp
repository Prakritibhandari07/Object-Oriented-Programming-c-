#include<iostream>
using namespace std;
class Employee
{
	private:
		char name[15];
		long EmpNumber;
		public:
			void getData()
			{
				cout<<"Enter Employee name:";
				cin>>name;
				cout<<"Enter Employee number:";
				cin>>EmpNumber;
			}
			void putData()
			const
			{
				cout<<"Employee name:"<<name<<endl;
				cout<<"Employee number:"<<EmpNumber<<endl;
			}
			
};
int main()
{
	Employee Emp;
	Emp.getData();
	cout<<"\n Stored Employee Data:\n";
	Emp.putData();
	return 0;

}
