#include<iostream>
using namespace std;
class Employee
{
	int empno;
	char empname[20];
	float basic,DA,IT,grosssal,netsal;
	public:
	void getdata()
	{
		cout<<"Enter the employee no : ";
		cin>>empno;
		cout<<"Enter the employee name : ";
		cin>>empname;
		cout<<"Enter the basic salary amount : ";
		cin>>basic;
	}
	void comp()
	{
		DA=0.52*basic;
		grosssal=(basic+DA)*12;
		IT=0.3*grosssal;
		netsal=grosssal-IT;
	}
	void display()
	{
		cout<<"Empolyee code : "<<empno<<"  "<<endl;
		cout<<"Employee name : "<<empname<<endl;;
		cout<<"Basic salary : "<<basic<<endl;
		cout<<"Net sal : "<<netsal<<endl;
	}
};
int main()
{
	int n;
	cout<<"Enter the number of employees : ";
	cin>>n;
	Employee obj[20];
	for(int i=0;i<n;i++)
	{
		obj[i].getdata();
		obj[i].comp();
	}
	for(int i=0;i<n;i++)
	{
		obj[i].display();
		cout<<endl;
	}
	return 0;
}
