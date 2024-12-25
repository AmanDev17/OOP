/*
Experiment No.2:Initiate a class publication which stores title and price of book derive tape and book from it and demonstrate use of exceptional error handling
*/
#include<iostream>
using namespace std;
class publication{
	string title;
	float price;
	public:
		void getdata()
		{
			cout<<"\nenter title";
			cin>>title;
			cout<<"\nenter price";
			cin>>price;
		}
		
		void display(){
				if (price==0||price<0)
						throw(5);
				else
				{
				cout<<"\nTitle is ::::"<<title;
				cout<<"\nPrice is ::::"<<price;
				}
		}
		
		void setval(){
			title='0';
			price=0;
			cout<<"\nTitle is ::::"<<title;
			cout<<"\nPrice is ::::"<<price;
		}
};

class book:public publication{
	int pgcount;
	public:
		void getdata()
		{
			cout<<"\nenter page count";
			cin>>pgcount;
		}
		
		void display(){
			
				if(pgcount==0||pgcount<0)
					throw('m');
				else
					cout<<"\nPage count is ::::"<<pgcount;
		}
		
		void setval(){
			pgcount=0;
			cout<<"\nPage count is ::::"<<pgcount;
		}
};

class tape:public publication{
	float playtime;
	public:
		void getdata()
		{
			cout<<"\nenter play time";
			cin>>playtime;
		}
		
		void display(){
			
				if(playtime==0||playtime<0)
					throw"playtime exception caught";
				else
					cout<<"\nPlay time is ::::"<<playtime;
		
		}
		
		void setval(){
			playtime=0;
			cout<<"\nPlay time is ::::"<<playtime;
		}
};

int main(){
	tape t;
	book b;
	try
	{
		cout<<"publication mf called";
		b.publication::getdata();
		b.publication::display();
		cout<<"class book member fn called";
		b.getdata();
		b.display();
		cout<<"class tape member fn called";
		t.getdata();
		t.display();
	}
	catch(...){
		cout<<"exception caught";
		t.publication::setval();
		t.setval();
		b.setval();
	}
	
	return 0;
	
}