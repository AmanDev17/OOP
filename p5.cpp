#include<iostream>
using namespace std;

class array
{
	public:
		template<class t>
		void getdata(t a[])
		{
			for (int i=0;i<4;i++)
			{
				cout<<"\nenter elements";
				cin>>a[i];
			}
		}
		template<class t>
		void display(t a[])
		{
			for (int i=0;i<4;i++)
			{
				cout<<"\n\t"<<a[i];
			}
		}
		template<class t>
		void sort(t a[])//selection sort
		{
			for (int i=0;i<4;i++)
			{
				for(int j=i+1;j<4;j++)
				{
					if (a[i]>a[j])
					{
						t temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
			
			display(a);
			
		}

};

int main()
{
	array a1;
	int a[20];
	a1.getdata(a);
	a1.display(a);
	a1.sort(a);
	
	float b[20];
	a1.getdata(b);
	a1.display(b);
	a1.sort(b);
	
	return 0;
}