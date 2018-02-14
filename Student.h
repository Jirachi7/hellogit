#ifndef STUDENT_H
#define STUDENT_H
class Student
{
	private:
		string fname;
		string lname;

	Public:
		Student()
		{
			fname= " ";
			lanme= " ";
		}
	void setFName(string i)
	{
		fname= i;
	}
	string getFName()
	{
		return fname;
	}

	void setLName(string x)
	{
		lname= x;
	}
	string getLName()
	{
		return lname;
	}
};

#endif
