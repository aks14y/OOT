#include<iostream>
using namespace std;
class Employee
 {
  protected:
  char name[10];
  int sal,exp;
  public:
  void read()
   {
    cout<<"enter the name\n";
    cin>>name;
    cout<<"enter the salary\n";
    cin>>sal;
    cout<<"enter the years of experience\n";
    cin>>exp;
   }
 };
class Department:public Employee
 {
  public:
  char dept_name[10];
  void read1()
   {
    cout<<"enter the name of department\n";
    cin>>dept_name;
   }
 };
class Senior:public Department
 {
  public:
  void disp()
   {
    if(exp>=10)
     {
      cout<<"\nname:"<<name<<"\nsalary:"<<sal<<"\nyears of experience"<<exp;
     }
   }
 };
int main()
 {
  Senior k[10];
	int n;
	cout<<"Enter the number of employees : ";
	cin>>n;
  for(int i=0;i<n;i++)
   {
    k[i].read();
    k[i].read1();
    
   }
  for(int i=0;i<n;i++)
   {
    k[i].disp();
   }
  return 0;
 }


