#include<iostream>
#include<cstring>
using namespace std;

class addstring
{
	public:
		char str1[50];
		
		void s()
		{
			cout<<"Enter first string:";
			cin.get(str1,50);
			
		}	
		
		void operator +(addstring x)
		{
			cout<<"Add two string:"<<strcat(str1,x.str1);
		}
		
};

main()
{
	addstring a,b;
	a.s();
	fflush(stdin);
	b.s();
	
	a+b;
	
	
	
	
		
}



















