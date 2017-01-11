/*
 * humanresources.h
 *
 *  Created on: Jan 11, 2017
 *      Author: aaron.covrig
 */

#ifndef HUMANRESOURCES_H_
#define HUMANRESOURCES_H_

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



#endif /* HUMANRESOURCES_H_ */
