#include<iostream>
#include<fstream>
using namespace std;
class armstrong
{
	public:
		int sum,rem;
		int arm(int a)
		{
			int t=a,sum=0;
			while(a!=0)
			{
				rem=a%10;
				sum=sum+(rem*rem*rem);
				a=a/10;
			}
			if(sum==t)
			{
				cout<<"\nArmstrong number : "<<t<<" Its square : "<<t*t;
				return t;
			}
			else
				return 0;
		}
};
int main()
{
	armstrong s,p;
	int a,b;
	ifstream file;
	file.open("num.dat");
	ofstream obj;
	obj.open("arms.dat");
	while(!file.eof())
	{
		file>>a;
		b=s.arm(a);
		if(b!=0)
			obj<<b*b<<"\n";
	}
	file.close();
	obj.close();
}
	
	
