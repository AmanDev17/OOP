/*
experimgment no.7:
demonstrate use of map containers and search the element in map
*/
#include <iostream>
#include <map>
using namespace std;

int main() {
	string name;
	long int population;

	map<string, long int> m1;
	m1["Maharashtra"] = 940000;
	m1["Gujarat"]= 78777;
	m1["AP"]= 521212;
	for(int i=0;i<4;i++)
	{
	cout<<"Enter the state name:";
	cin>>name;
	cout<<"Enter the population of the state :";
	cin>>population;
	m1[name]=population;
	}
	
	for (auto pair : m1) {
		cout << pair.first << "\t" << pair.second << "\n";
	}

	cout << "Enter the state name to be searched:\n";
	cin >> name;

	population = m1[name];

	if (population == 0) {
		cout << "Record not found::\n"; 
	} else {
		cout << "Population is: " << population << "\n";
	}
  
	return 0;
}