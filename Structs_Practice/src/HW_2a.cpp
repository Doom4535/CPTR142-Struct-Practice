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

struct Date
{
	int month;
	int day;
	int year;
};

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

struct ShoeType
{
	char style;
	double price;
};

int prob_1(void);
int prob_2(void);
int prob_3(void);
int prob_4(void);
int prob_4a(void);
int prob_4b(void);
void readShoeRecord(ShoeType& newShoe);
ShoeType discount(ShoeType oldRecord);

int main() {
	prob_1();
	prob_2();
	prob_3();
	prob_4();

	return 0;
}

int prob_1(void){
	Date dueDate1 = {12, 21};			// This line is dangerous; it will work, but only initializes the 1st 2 values and not the 3rd
	Date dueDate2 = {12, 21, 1995};
	//Date dueDate3 = {12, 21, 19, 95};	// This line tries to assign too many values into
	std::cout << "This is the dangerous one (part a.), notice that the year is uninitialized and will take an unknown value: " << std::endl;
	std::cout << "Day: " << dueDate1.day << std::endl;
	std::cout << "Month: " << dueDate1.month << std::endl;
	std::cout << "Year: " << dueDate1.year << std::endl;
	std::cout << "This is the valid line (part b.): " << std::endl;
	std::cout << "Day: " << dueDate2.day << std::endl;
	std::cout << "Month: " << dueDate2.month << std::endl;
	std::cout << "Year: " << dueDate2.year << std::endl;
	std::cout << "The erroneous line (part c.) does not compile because it tries to assign 4 values to a structure that only supports 3 values" << std::endl;

	return(0);
}

int prob_2(void){
	//std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
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

	return(0);
}

int prob_4(void){
	prob_4a();
	prob_4b();

	return(0);
}

int prob_4a(void){
	std::cout << "Prob. 4a: " << std::endl;
	ShoeType shoe1, shoe2;
	shoe1.style= 'A';
	shoe1.price = 9.99;
	shoe2 = shoe1;
	ShoeType shoe3;
	std::cout << shoe1.style << " $" << shoe1.price << std::endl;
	readShoeRecord(shoe3);
	std::cout << shoe3.style << " $" << shoe3.price << std::endl;

	return(0);
}

int prob_4b(void){
	std::cout << std::endl;
	std::cout << "Prob. 4b: " << std::endl;
	ShoeType overpricedShoe, discountedShoe;
	readShoeRecord(overpricedShoe);
	discountedShoe = discount(overpricedShoe);
	std::cout << "Original Price: " << overpricedShoe.price << std::endl;
	std::cout << "Discounted Price: " << discountedShoe.price << std::endl;

	return(0);
}
void readShoeRecord(ShoeType& newShoe){
// Fills in newShoe values
	std::cout << "Shoe style: ";
	std::cin >> newShoe.style;
	std::cout << "Shoe price: ";
	std::cin >> newShoe.price;
	std::cout << std::endl;
}

ShoeType discount(ShoeType oldRecord){
// Returns a new 10% discounted shoe structure
	ShoeType newRecord = oldRecord;
	newRecord.price = oldRecord.price * 0.9;
	return(newRecord);
}
