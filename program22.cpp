#include<iostream>
using namespace std;
class Employee
{
	public:
		int id;
		float basic_pay;
		char name[30];char desig[40];
		void accept()
		{
			cout<<"Enter the ID : ";
			cin>>id;
			cout<<"Enter the name : ";
			cin>>name;
			cout<<"Enter the basic pay : ";
			cin>>basic_pay;
			cout<<"Enter the designation : ";
			cin>>desig;
		}
		void display()
		{
			cout<<"\nName : "<<name<<"\nID : "<<id<<"\nBasic pay : "<<basic_pay<<"\ndesignation : "<<desig;	
		}
};
class otherincome:public virtual Employee
{
	public:
		float income;
		char source[30];
		void read()
		{
			cout<<"\nEnter the income : ";
			cin>>income;
			cout<<"\nEnter the source : ";
			cin>>source;
			
		}
		void show()
		{
			cout<<"\nsource : "<<source<<"\nincome : "<<income;	
		}
};
class increment:public virtual Employee
{
	public:
		float increment;
		int exp;
		void calc()
		{
			cout<<"Enter the experience : ";
			cin>>exp;
			if(exp<25)
				increment=2000;
			else
				increment=5000;
		}
};
class netsalary:public otherincome,public increment
{
	public:
		int totalsal;
		void calc_netsal()
		{
			totalsal=basic_pay+income+increment;
			cout<<"\nTotal salary : "<<totalsal;
		}
};
int main()
{
	netsalary k;
	k.accept();
	k.read();
	k.calc();
	k.calc_netsal();
	k.display();
	k.show();
	return 0;
}
			
