/*
experimgment no.6:
demonstrate use of vector containers and sort the elements in vector
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class person
{
	int tel;
	string name;
	public:
		void get()
		{
			cout<<"enter name";
			cin>>name;
			cout<<"enter number";
			cin>>tel;
		}
		
		void set(string n)
		{
			name=n;
		}
		
		bool operator ==(const person &p)
		{
			return name==p.name;
		}
	
		friend void display(person &p);
	
};

void display(person &p)
{
	cout<<"name "<<p.name;
	cout<<"number "<<p.tel;
}

bool sorting(person &p1,person &p2)
{
	return p1.name<p2.name;
}

void search(vector<person>v)
{
	string n;
	cout<<"enter name to search";
	cin>>n;
	person p;
	p.set(n);
	vector <person> :: iterator s;
	s=find(v.begin(),v.end(),p);
	if(s!=v.end())
	{
		cout<<"element found";
		display(*s);
	}
	else
		cout<<"nnnn";
}

int main()
{
	vector<person>v;
	person p;
	int ch;
	while(ch!=5)
	{
		cout<<"\n\n\n What operation to perform : ";
        cout<<"\n1. Add entry ";
        cout<<"\n2. Display entries ";
        cout<<"\n3. Sort entries ";
        cout<<"\n4. Search an entry ";
        cout<<"\n5. Exit ";
        cout<<"\n\n Choose an operation : ";
        cin>>ch
		
		switch(ch)
		{
			case 1:
				p.get();
				v.push_back(p);
				break;
				
			case 2:
				for_each(v.begin(),v.end(),display);
				break;
				
			case 3:
				sort(v.begin(),v.end(),sorting);
				for_each(v.begin(),v.end(),display);
				break;
				
			case 4:
				search(v);
				break;
				
			case 5:
				cout<<"byeee !!!!";
				break;
		}
	}
	return 0;
}