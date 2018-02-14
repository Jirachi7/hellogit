#include "Student.h"

Student::Student(string i, string x)
{
	fname= i;
	lname= x;
}

void Student::setFName(string i)
{
	fname= i;
}

string Student::getFName()
{
	return fname;
}

void Student::setLName(string x)
{
	lname= x;
}

string Student::getLName()
{
	return lname;
}

