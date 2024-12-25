/*
/*
experiment no.4:
demonstrate file handling operations such as read and write
*/
#include<iostream>
#include<fstream>
using namespace std;
class student
{
	int roll;
	string name;
	char division;
	
	public:
	
		void getdata()
		{
			ofstream fout("aman1",ios::app);
			if (fout.is_open())
			{
				for(int i=0;i<2;i++)
				{
					cout<<"enter name";
					cin>>name;
					fout<<name<<"\n";
				}
				fout.close();
			}
			else
				cout<<"no file exist";
		}
		
		void display()
		{
			char line[20];
			ifstream fin;
			/*if(fin.is_open())
			{*/
				while(fin)
				{
					fin.getline(line,20);
					cout<<"line is--->"<<line;
				}
				for(int i=0;i<2;i++)
				{
					fin>>name>>roll>>division;
					cout<<"\nwe have read : "<<name<<roll<<division;
				}
			//}
			/*else
				cout<<"no file";//cerr
		*/
		}
		
};

int main()
{
	student s;
	s.getdata();
	s.display();
	return 0;
}