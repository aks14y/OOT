#include<iostream>
#include<math.h>
using namespace std;
class Area
{
	public:
		float area,s;
		void triangle(int a)
		{
			area=(pow(3,0.5)*a*a)/4;
			cout<<"Area of given equilateral trangle = "<<area<<endl;
		}
		void triangle(int a,int b)
		{
			area=0.5*a*b;
			cout<<"\nArea of given right angled trangle = "<<area<<endl;
		}
		void triangle(int a,int b,int c)
		{
			s=(float)(a+b+c)/2;
			area=sqrt(s*(s-a)*(s-b)*(s-c));
			cout<<"\nArea of given scalene trangle = "<<area<<endl;
		}
};
int main()
{
	int a,b,c;		
	cout<<"Enter the value for a,b and c :\n";
	cin>>a>>b>>c;
	Area obj;
	obj.triangle(a);
	obj.triangle(a,b);
	obj.triangle(a,b,c);
	return 0;
}
	
		
