#include<iostream>
using namespace std;
class Bill
{
	int amount;
	public:
	Bill():amount(50)
	{
	}
	void comp(int x)
	{
		if(x<100)
			amount=amount+x*.60;
		else if(x<200)
			amount=amount+x*.80;
		else
		{
	
			amount=amount+x*.90;
			amount=amount+amount*.15;
		}
	}
	void display()
	{
		cout<<"Amount ="<<amount<<endl;
	}
};
int main()
{
	Bill obj[10];
	int n;
	char name[30];
	cout<<"Enter the no of customers : ";
	cin>>n;
	int units;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the name of the customer : ";
		cin>>name;
		cout<<"Enter the units consumed : ";
		cin>>units;
		obj[i].comp(units);
		obj[i].display();
	}
}


