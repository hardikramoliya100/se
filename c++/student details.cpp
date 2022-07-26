#include<iostream>
using namespace std;

class A
{
	public:
		int number;
		char lecturer[20],subject[20],course[20];
		
		void detail()
		{
			cout<<"Enter a Name: ";
			cin>>lecturer;
			
			fflush(stdin);
			cout<<"Enter subject Name: ";
			cin.get(subject,20);
			
			cout<<"Enter course Name: ";
			cin>>course;
			
			cout<<"Enter number of lecturers:  ";
			cin>>number;
		}
		
		void dispaly()
		{
			cout<<"Enter a Name: "<<lecturer<<endl;
			
			
			cout<<"Enter subject Name: "<<subject<<endl;
			
			cout<<"Enter course Name: "<<course<<endl;
			
			
			cout<<"Enter number of lecturers:  "<<number<<endl;
			
		}
};

main()
{
	A obj[5];
	
	cout<<"\n\n---------------Enter lecturer details---------------\n\n";
	for(int i=0;i<5;i++)
	{
		cout<<endl<<"Enter lecuter "<<i+1<<endl<<endl;
		obj[i].detail();
	}
	
	cout<<"\n\n---------------Display Details---------------\n\n";
	
	for(int i=0;i<5;i++)
	{
		cout<<endl<<"lecuter details "<<i+1<<endl<<endl;
		obj[i].dispaly();
	}
}










