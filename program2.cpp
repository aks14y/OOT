#include<iostream>
using namespace std;
class palindrome
{
	int x;
	int num;
	public:
	void rev(int n)
	{
		num=0;
		int temp=n;
		while(n>0)
		{
			x=n%10;
			num=(num*10)+x;
			n=n/10;
		}
		if(temp==num)
			cout<<"palindrome";
		else
			cout<<"Not a palindrome";
	}		
};
int main()
{
	palindrome s;
	int a;
	cout<<"Enter the number : ";
	cin>>a;
	s.rev(a);
	return(0);
}	
