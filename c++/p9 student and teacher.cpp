#include<iostream>
using namespace std;

class person
{
	public:
		void displayp(string n,int a)
		{
			cout<<"Name : "<<n<<endl;
			cout<<"Age : "<<a<<endl;
			
		}
};

class student : public person
{
	public:
	void prints()
	{
		cout<<"\n\n----------student Detail---------\n\n";
	}
	void displays(float p)
	{
		cout<<"percentage : "<<p<<endl;
		
	}
};

class teacher : public person
{
	public:
	void printt()
	{
		cout<<"\n\n----------Teacher Detail---------\n\n";
	}
	void displayt(int s)
	{
		cout<<"salary : "<<s<<endl;
		
	}
};

main()
{
	int sage,tage,salary;
	float per;
	char sname[20],tname[20];
	
	cout<<"Enter student Name: ";
	cin>>sname;
	
	cout<<"Enter student Age: ";
	cin>>sage;
	
	cout<<"Enter student percentage: ";
	cin>>per;
	
	cout<<"Enter teacher Name: ";
	cin>>tname;
	
	cout<<"Enter teacher Age: ";
	cin>>tage;
	
	cout<<"Enter teacher salary: ";
	cin>>salary;
	
	
	student objs;
	objs.prints();
	objs.displayp(sname,sage);
	objs.displays(per);
	
	teacher objt;
	objt.printt();
	objt.displayp(tname,tage);
	objt.displayt(salary);
	
}



















