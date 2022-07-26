#include<iostream>
using namespace std;

class A
{
	 public:
	 	
	 	int squer(int a)
	 	{
	 		int s;
	 		
	 		s=a*a;
	 		
	 		return s;
		}
		
		int cube(int a)
	 	{
	 		int c;
	 		
	 		c=a*a*a;
	 		
	 		return c;
		}
};

main()
{
	int num;
	
	cout<<"Enter a Number: ";
	cin>>num;
	
	A obj;
	
	cout<<"Your number squre is "<<obj.squer(num)<<endl;
	cout<<"Your number cube is "<<obj.cube(num);
}











