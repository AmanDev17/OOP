/*
experimgment no.3
create a class complex to add and multiply complex no 
and overlod insertion and extraction operators
*/
#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
	complex()
	{
		real=0;
		img=0;
	}
	
	void operator +(complex&c2)
	{
		complex c3;
		c3.real=real+c2.real;
		c3.img=img+c2.img;
		cout<<"sum is"<<c3;
	}
	
	void operator *(complex&c2)
	{
		complex c3;
		c3.real=(real*c2.real)-(img*c2.img);
		c3.img=(img*c2.real)+(real*c2.img);
		cout<<"product is"<<c3;
	}
	
	friend void operator >>(istream &in ,complex &c1);
	friend void operator <<(ostream &out,complex &c1);
	
};

void operator >>(istream &in ,complex &c1)
{
	cout<<"enter complex 1";
	in>>c1.real>>c1.img;
}

void operator <<(ostream &out,complex &c1)
{
	out<<c1.real<<" + "<<c1.img<<" i ";
}

int main()
{
	complex c1,c2;
	cout<<"enter complex no 1::::";
	cin>>c1;
	cout<<"enter complex no 2::::";
	cin>>c2;
	cout<<"addition is ::::";
	c1+c2;
	cout<<"multiplication is::::";
	c1*c2;
	
	return 0;
}









