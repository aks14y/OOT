#include<iostream>
using namespace std;
class Example
{
	public:
		int max,min;
		void find_max(int a[],int n)
		{	
			max=a[0];
			for(int i=1;i<n;i++)
			{
				if(a[i]>max)
					max=a[i];
			}
			cout<<"Maximum element in array : "<<max<<endl;
		}
		void find_min(int a[],int n)
		{	
			min=a[0];
			for(int i=1;i<n;i++)
			{
				if(a[i]<min)
					min=a[i];
			}
			cout<<"Minimum element in array : "<<min<<endl;
		}
		
};
int main()
{
	int i,arr[50],num;
	Example obj;
	Example *p;
	p=new Example;
	cout<<"Enter the size of array :";
	cin>>num;
	for(i=0;i<num;i++)
	{
		cout<<"Enter the element "<<i+1<<" : ";
		cin>>arr[i];
	}
	obj.find_max(arr,num);
	obj.find_min(arr,num);
	p->find_max(arr,num);
	p->find_min(arr,num);
}
	
			
