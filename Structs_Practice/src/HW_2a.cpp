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

struct Management
{
	std::string MgrName;
	std::string Department;

	//Management(std::string Manager, std::string Dept){
	//	MgrName = Manager;
	//	Department = Dept;
	//}
};

struct EmployeeRecord
{
	int wagerate;
	int accruedVacation;
	char status; // hourly (H) or salary (S)
	Management Manager;

	EmployeeRecord(int wg, int accrueV, char stat, std::string Mname, std::string dept){
		wagerate = wg;
		accruedVacation = accrueV;
		status = stat;
		Manager.MgrName = Mname;
		Manager.Department = dept;
	}
};

int prob_2(void);
int prob_3(void);

int main() {
	prob_2();
	prob_3();

	return 0;
}

int prob_2(void){
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

	return(0);
}

// verify that this is the same as the one in the 1st edition
int prob_3(void){
	//EmployeeRecord Jimmy;
	//EmployeeRecord John;
	EmployeeRecord Jimmy(40000, 5, 'H', "Bob", "Shipping");
	EmployeeRecord John(50000, 6, 'S', "Jane", "Sales");
	std::cout << Jimmy.wagerate << " " << Jimmy.accruedVacation << " " << Jimmy.status << " " << Jimmy.Manager.MgrName << std::endl;
}
