#include<iostream>
using namespace std;
class Polygon
{
	
	public:
		int a,b;
		void read()
		{
			cout<<"enter the sides : ";
			cin>>a>>b;
		}
		virtual void area()
		{
			cout<<"Area of ploygons ";
		}
};
class triangle : public Polygon
{
	float area1;
	public:
		void area()
		{
			area1=0.5*a*b;
			cout<<"Area of triangle : "<<area1<<endl;
		}
};
class rectangle : public Polygon
{
	float area1;
	public:
		void area()
		{
			area1=a*b;
			cout<<"Area of rectangle : "<<area1<<endl;
		}
};
int main()
{
	int n;
	triangle obj1;
	rectangle obj2; 
	cout<<"Enter 1.Triangle \n2.Rectangle : ";
	cin>>n;
	switch(n)
	{
		case 1:
		{
			obj1.read();
			Polygon *p;
			p=&obj1;
			p->area();
			break;
		}
		case 2:
		{
			obj2.read();
			Polygon *p;
			p=&obj2;
			p->area();
			break;
		}
	}
	return 0;
}
			


