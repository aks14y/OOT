#include<iostream>
using namespace std;
class complex
{
	int r,i;
	public:
	void read()
	{
		cout<<"Enter real and imaginary numbers : ";
		cin>>r>>i;
	}
	void display()
	{
		cout<<r<<"+"<<i<<"i"<<endl;
	}
	complex operator +(complex z)
	{
		complex temp;
		temp.r=r+z.r;
		temp.i=i+z.i;
		return temp;
	}
};
int main()
{	
	complex c1,c2,c3;
	c1.read();
	c2.read();
	c3=c2+c1;
	c3.display();
}
