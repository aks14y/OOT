#include<iostream>
using namespace std;
class prime
{	
	int flag,x,i;
	public:
	void checkprime(int n,int m)
	{
		
		x=n+1;
		cout<<"prime numbers in the range "<<n<<" and "<<m<<" are : ";	
		while(x<m)
		{
			flag=0;
			for(i=2;i<=x/2;i++)
			{
				if(x%i==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				cout<<x<<"  ";
			}
			++x;
		}
		
	}
};
int main()
{
	prime s;
	int a,b;
	cout<<"Enter the range(upper and lower) to check : ";
	cin>>a>>b;
	s.checkprime(a,b);
	return 0;
}

	
