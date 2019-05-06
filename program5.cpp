#include<iostream>
#include<math.h>
using namespace std;
class quadratic
{	
	int rp,ip,a,b,d,c;
	double r1,r2,r;
	public:
	void quad(int a,int b,int c)
	{
		d=(b*b)-(4*a*c);
		if(d>0)
		{
			cout<<"The roots are real and distinct";
			r1=(-b+sqrt(d))/(2*a);
			r2=(-b-sqrt(d))/(2*a);
			cout<<"Root 1 ="<<r1<<" root 2 ="<<r2;
		}
		else if(d==0)
		{
			cout<<"The roots are real and equal";
			r=-b/(2*a);
			cout<<"Root 1 ="<<r<<" root 2 ="<<r;
		}
		else
		{
			cout<<"The roots are imaginary ";
			rp=-b/(2*a);
			ip=2*a;
			cout<<"Roots are "<<rp<<"+i"<<(d/ip)<<","<<rp<<"-i"<<(d/ip);
		}
			
	}
};
int main()
{
	quadratic s;
	int x,y,z;
	cout<<"Enter the value of coeff : ";
	cin>>x>>y>>z;
	s.quad(x,y,z);
	return 0;
}
