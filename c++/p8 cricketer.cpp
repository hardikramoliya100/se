#include<iostream>
using namespace std;

class cricketer
{
	public:
		int a[50],total=0,best,average,i,j,n;
		
		void data()
		{
			cout<<"Enter total number match: ";
			cin>>n;
			
			cout<<"\nEnter run of each match: \n";
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
};

class batsman : public cricketer
{
	public:
		
		void total_run()
		{
			for(i=0;i<n;i++)
			{
				total+=a[i];
			}
			
			average=total/n;
		}
		
		void best_run()
		{
			for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
				{
					if(a[j]>a[i])
					{
						best=a[j];
					}
					else
					{
						best=a[i];
					}
				}
			}
		}
		
		void display()
		{
			cout<<"\n\n-------------Cricketer Data------------\n\n";
			
			cout<<"Total match: "<<n<<endl;
			cout<<"Total Run: "<<total<<endl;
			cout<<"Avrage Run: "<<average<<endl;
			cout<<"Best performance: "<<best<<endl;
		}
};

main()
{
	batsman c1;
	c1.data();
	c1.total_run();
	c1.best_run();
	c1.display();
	
}
