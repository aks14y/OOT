#include<iostream>
using namespace std;
class checknum
{
	public:
		void num(int x)
		{
			if(x%2==0)
			{
				cout<<"The number is evedvdn ";
			}	
			else
			{
				cout<<"The number is odd ";
			}
		}
};
int main()
{
	checknum obj;
	int n;
	cout<<"Enter the number to check : ";
	cin>>n;
	obj.num(n);
	return(0);
}
