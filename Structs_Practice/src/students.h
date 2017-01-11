/*
 * students.h
 *
 *  Created on: Jan 11, 2017
 *      Author: aaron.covrig
 */

#ifndef STUDENTS_H_
#define STUDENTS_H_


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



#endif /* STUDENTS_H_ */
