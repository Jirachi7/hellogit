#include <iostream>
#include <vector>
#include "Student.h"

using namespace std;

int main()
{
	vector <Student> info;
	string i, x;
	Student a;
	int z;
	
	for(z=0; z<4; z++)
	{
		cin >> i >> x >> endl;
		a.setFname(i);
		a.setLName(x);
		info.push_back(a)
	}

	for(z=0; z<info.size(); z++)
	{
		cout << info[z].getFName();
		cout << info[z].getLName();
	}
}

