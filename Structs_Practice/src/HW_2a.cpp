//============================================================================
// Name        : HW_2a.cpp
// Author      : Aaron C.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
//using namespace std;

struct Info
{
	std::string fname;
	std::string lname;
};

struct Birth
{
	int day;
	std::string month;
	int year;
};

struct Student
{
	int ID;
	Info data;
	int gradYear;
	Birth birthdate;

	Student(int id, std::string fn, std::string ln, int yr, std::string m, int d, int byr){
		ID = id;
		data.fname = fn;
		data.lname = ln;
		gradYear = yr;
		birthdate.month = m;
		birthdate.day = d;
		birthdate.year = byr;
	}
};

int main() {
	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
	//Student s1;
	Student s1(567, "Harry", "Smith", 2020, "August", 31, 1994);
	Student s2(457, "Jane", "Doe", 2020, "June", 19, 1995);
	Student s3(601, "John", "Heimerdinger", 2018, "November", 5, 1992);
	Student s4(786, "Marry", "Nelson", 2020, "February", 10, 1998);

	/*
	s1.ID = 567;
	s1.data.fname = "Harry";
	s1.data.lname = "Smith";
	s1.gradYear = 2020;
	s1.birthdate.day = 31;
	s1.birthdate.month = "August";
	s1.birthdate.year = 1994;
	*/


	std::cout << s1.ID << " " << s1.data.fname << " " << s1.birthdate.year << std::endl;
	std::cout << s2.ID << " " << s2.data.fname << " " << s2.birthdate.year << std::endl;
	std::cout << s3.ID << " " << s3.data.fname << " " << s3.birthdate.year << std::endl;
	std::cout << s4.ID << " " << s4.data.fname << " " << s4.birthdate.year << std::endl;

	return 0;
}
