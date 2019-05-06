#include<iostream>
using namespace std;
class fibonacci
{
	int a,b,c;
	public:
	void fib(int n)
	{
		int i;
		a=0,b=1;
		cout<<"fibonacci series is : "<<a<<"  "<<b<<"  ";
		for(i=0;i<n-2;i++)
		{
			c=a+b;
			cout<<c<<"  ";
			a=b;
			b=c;
		}
	}
};
int main()
{
	fibonacci s;
	int a;
	cout<<"Enter the range to generate fibonacci series : ";
	cin>>a;
	s.fib(a);
	return 0;
}

