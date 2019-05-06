#include<iostream>
using namespace std;
class Bank
{
	int count;
	public:
	Bank():count(0)
	{
	}
	void getcount()
	{
		cout<<count<<endl;
	}
	void operator ++()
	{
		++count;
	}
	void operator --()
	{
		--count;
	}
};
int main()
{
	Bank c1;
	int n,opt=1;;
	do
	{
		cout<<"1.for adding 2.for removing : ";
		cin>>n;
		if(n==1)
			++c1;
		else
			--c1;
		cout<<"Do you want to continue..[1/0]";
		cin>>opt;
	}
	while(opt!=0);
	c1.getcount();
	return 0;
}
