#include<iostream>
using namespace std;
class Example
{
	public:
		int a,b;
		void swap_value(int a,int b)
		{
			int temp;
			temp=a;
			a=b;
			b=temp;
			cout<<"Pass by value : ";
			cout<<"\na="<<a<<"\nb="<<b;
		}
		void swap_address(int *a,int *b)
		{
			int temp;
			temp=*a;
			*a=*b;
			*b=temp;
			cout<<"Pass by reference : ";
			cout<<"\na="<<*a<<"\nb="<<*b;
		}
		void swap_reference(int &a,int &b)
		{
			int temp;
			temp=a;
			a=b;
			b=temp;
			cout<<"Pass by address : ";
			cout<<"\na="<<a<<"\nb="<<b;
		}
};
int main()
{
	int x,y,ch;
	Example obj;
	cout<<"1.call by value \n2.call by reference \n3.call by address : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
		{
			cout<<"Enter value of x and y : ";
			cin>>x>>y;
			obj.swap_value(x,y);
			break;
		}
		case 2:
		{
			cout<<"Enter value of x and y : ";
			cin>>x>>y;
			obj.swap_address(&x,&y);
			break;
		}
		case 3: 
		{
			cout<<"Enter value of x and y : ";
			cin>>x>>y;
			obj.swap_reference(x,y);
			break;
		}
	}
	return 0;
}

