#include<iostream>
using namespace std;
class Area
{
	public:
		int length,breadth,base,height,area1,area2;
		void getdata1()
		{
			cout<<"Enter the length and breadth : ";
			cin>>length>>breadth;
		}
		void getdata2()
		{
			cout<<"Enter the base and height : ";
			cin>>base>>height;
		}
};
class triangle: public Area
{
	public:
		void triangle1()	
		{
			area1=0.5*base*height;
		}
};
class rectangle: public Area
{
	public:
		void rectangle1()	
		{
			area2=length*breadth;
		}
};
class result:public rectangle,public triangle
{
	public: 
		void display1()
		{
			cout<<"Area of triangle = "<<area1;
		}
		void display2()
		{
			cout<<"Area of rectangle = "<<area2;
		}
};
int main()
{
	result r;
	int n;
	cout<<"Enter 1.for arae of rectangle\n2.for area of triangle :";
	cin>>n;
	if(n==1)
	{
		r.getdata1();
		r.rectangle1();
		r.display2();
	}
	else
	{
		r.getdata2();
		r.triangle1();
		r.display1();
	}
	return 0;
}
