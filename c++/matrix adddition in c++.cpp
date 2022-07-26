#include<iostream>
using namespace std;

class matrix
{
	public:
		int a[2][2];
		int i,j;
		void input();
		void display();
		void operator +(matrix x);
		
};

void matrix :: input()
{
	cout<<"\nEnter matrix (2 x 2):\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<" ";
			cin>>a[i][j];
		}
	}
}

void matrix :: display()
{
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
}

void  matrix :: operator +(matrix x)
{
	int mat[2][2];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			mat[i][j]=a[i][j]+x.a[i][j];
		}
	}
	
	cout<<"\n\nAddition of matrix:\n\n";
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
}

main()
{
	matrix c,b;
	c.input();
	b.input();
	
	cout<<"\nFirst matrix:\n";
	c.display();
	
	cout<<"\nsecond matrix:\n";
	b.display();
	
	c+b;
		
}





















