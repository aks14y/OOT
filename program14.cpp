#include<iostream>
using namespace std;
class student 
{
	public:
		int rollno;
		void read()
		{
			cout<<"Enter the rollno : ";
			cin>>rollno;
		}
};
class test:public student
{
	public:
		int m1,m2;
		void read1()	
		{
			cout<<"Enter the marks :";
			cin>>m1>>m2;
		}
};
class sports
{
	public:
		int weightage;
		void sports_weightage()	
		{
			cout<<"Enter the weightage :";
			cin>>weightage;
		}
};
class result:public test ,public sports
{
	public:
		int sum;
		
		void display()
		{
			sum=m1+m2+weightage;
			cout<<"Roll no : "<<rollno<<"\nMark1 :"<<m1<<"\nMark2 : "<<m2<<"\nWeightage : "<<weightage<<"\nThe final result : "<<sum<<endl;
		}
};
int main()
{
	result r;
	r.read();
	r.read1();
	r.sports_weightage();
	r.display();
	return 0;
}
