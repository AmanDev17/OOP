/*
Experiment No.1 : Develop a program in C++ to create a database of
student’s information system
containing the following information: Name, Roll number, Class, Division,
Date of Birth, Blood group,
Contactaddress, Telephone number, Driving license no. and other. Construct
the database with
suitable member functions. Make use of constructor, default constructor,
copy constructor,
destructor, static member functions, friend class, this pointer, inline
code and dynamic
memory allocation operators-new and delete as well as exception handling.
*/
#include<iostream>
using namespace std;
class student
{
	string dlno,bloodgrp,address,dob;
	string* name=new string;
	static int count;
	int classs,rollno;
	char division;
	long int number;
	
	public:
		student()
		{
			dob="dd/mm/yyyy";
			division='A';
		}
		
		student(char x)
		{
			division=x;
		}
		
		student(const student &s)
		{
			this->name=s.name;
			this->dlno=s.dlno;
			this->bloodgrp=s.bloodgrp;
			this->rollno=s.rollno;
			
		}
		
		void getdata()
		{
			cout<<"\nenter name";
			cin>>*name;
			cout<<"\nenter dl number";
			cin>>dlno;
			cout<<"\nenter bloodgrp";
			cin>>bloodgrp;
			cout<<"\nenter address";
			cin>>address;
			cout<<"\nenter dob";
			cin>>dob;
			cout<<"\nenter number";
			cin>>number;
			cout<<"\nenter division";
			cin>>division;
			cout<<"\nenter class";
			cin>>classs;
			cout<<"\nenter roll::::";
		    cin>>rollno;
		}

		void display()
		{
			cout<<"\nname ::::"<<*name;
			cout<<"\ndl number ::::"<<dlno;
			cout<<"\nbloodgrp ::::"<<bloodgrp;
			cout<<"\naddress ::::"<<address;
			cout<<"\ndob ::::"<<dob;
			cout<<"\nnumber ::::"<<number;
			cout<<"\ndivision ::::"<<division;
			cout<<"\nclass ::::"<<classs;
			cout<<"\nroll num ::::"<<rollno;
		}

		static void counter()
		{
			cout<<"no of students are::::"<<count;
		}
		
		~student()
		{
			delete name;
			cout<<"data destroyed";
		}

		friend class marks;
};

class marks
{
	float score;
	public:
	void getscore(student &s1)
	{	cout<<"\nenter the marks of student::::"<<s1.rollno;
		cout<<"\nenter percentage ::::";
		cin>>score;
		cout<<"\nroll ::::"<<s1.rollno<<"scored::::"<<score;
	}
	
};
int student::count;

int main()
{	char n;
	n='v';
	student s(n);
	marks m;
	cout<<"!!!!!!!!!!!!!!!!!!!!!";
	s.getdata();
	s.display();
	cout<<"\ncopppppppppppppppppppppppppppppppppppppppppppppy";
	student s2(s);
	s.display();
	s2.display();
	cout<<"\n#############################";
	s.counter();
	cout<<"\nmarkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk";
	m.getscore(s);
	
	return 0;
}
