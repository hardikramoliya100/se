#include<iostream>
using namespace std;

class interest
{
	public:
	
	interest(int principal,int year,float rate)
	{
		float i;
		
		i=(principal*year*rate)	/100;
		
		cout<<endl<<"Your simpal intrest :"<<i;
	}	
};

main()
{
	
	int m,y;
	float r;
	
	cout<<"Enter a principal: ";
	cin>>m;
	
	cout<<"Enter a year: ";
	cin>>y;
	
	cout<<"Enter a rate: ";
	cin>>r;
	
	interest obj(m,y,r);
	
	
}
