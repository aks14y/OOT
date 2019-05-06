#include<iostream>
using namespace std;
class Student
{
	int USN,m1,m2,m3,avg;
	char name[30];
	public:
	void getdata()
	{
		
		cout<<"Enter the USN: ";
		cin>>USN;
		cout<<"Enter the name : ";
		cin>>name;
		cout<<"Enter the mark 1 : ";
		cin>>m1;
		cout<<"Enter the mark 2 : ";
		cin>>m2;
		cout<<"Enter the mark 3 : ";
		cin>>m3;
	}
	void aver()
	{
		if((m1>m2)&&(m2>m3))
			avg=(m1+m2)/2;
		else if((m1>m2)&&(m3>m2))
			avg=(m1+m3)/2;
		else
			avg=(m2+m3)/2;
	}
	void disp()
	{
		cout<<"Student USN : "<<USN<<"  "<<endl;
		cout<<"Student name : "<<name<<endl;
		cout<<"Average marks : "<<avg<<endl;
	}
};
int main()
{
	int n;
	cout<<"Enter the number of employees : ";
	cin>>n;
	Student  obj[20];
	for(int i=0;i<n;i++)
	{
		obj[i].getdata();
		obj[i].aver();
		
	}
	for(int i=0;i<n;i++)
	{
		obj[i].disp();
		cout<<endl;
	}
	return 0;
}
