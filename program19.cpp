#include<iostream>
using namespace std;
class side
{
	protected :
		int s;
	public :
		void read()
		{
			cout<<"Enter the side : ";
			cin>>s;
		}
};
class square:public virtual side
{
	public:
		int x;
		void square1()
		{
			x=s*s;
			cout<<"square ="<<x;
		}
};
class cube:public virtual side
{
		public:
		int p;
		void cube1()
		{
			p=s*s*s;
			cout<<"cube ="<<p;
		}
};
int main()
{
	int n,opt;
	cube obj;
	square obj1;
	
	do
	{
		cout<<"1.square\n2.cube : ";
		cin>>n;
		switch(n)
		{
			case 1:
			{
				obj1.read();
				obj1.square1();
				break;
			}
			case 2:
			{
				obj.read();
				obj.cube1();
				break;
			}
		}
		cout<<"\nDo you want to continue..[1/0] : ";
		cin>>opt;
	}while(opt!=0);
	return 0 ;
}


