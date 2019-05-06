#include<iostream>
#include<fstream>
using namespace std;
class first
{
	int rollno,m1,m2,m3;
	char name[20];
	public :
		void getdata()
		{
			cout<<"Enter the roll no : ";
			cin>>rollno;
			cout<<"Enter name :";
			cin>>name;
			cout<<"Enter mark 1 : ";
			cin>>m1;
			cout<<"Enter mark 2 : ";
			cin>>m2;
			cout<<"Enter mark 3 : ";
			cin>>m3;
		}
		void putdata()
		{
			cout<<"Roll no : "<<rollno<<"\nName : "<<name<<"\nMark 1 :"<<m1<<"\nMark 2 :"<<m2<<"\nMark 3 :"<<m3;
		}
};
int main()
{
	first s;
	ofstream obj("student.txt",ios::out);
	int opt;
	do
	{
		s.getdata();
		obj.write((char*)&s,sizeof(s));
		cout<<"Do you want to write again..[1/0] : ";
		cin>>opt;
	}while(opt!=0);
	obj.close();
	ifstream obj1("student.txt",ios::in);
	obj1.read((char*)&s,sizeof(s));
	while(!obj1.eof())
	{
		s.putdata();
		obj1.read((char*)&s,sizeof(s));
	}
	return 0;
	obj1.close();
		
}	
	
