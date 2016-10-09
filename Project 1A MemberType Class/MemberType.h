/*
TeamName: WoofPack
Nguyen, Ly
CS A250
September 15, 2016

Project 1A: MemberType Class
*/

#ifndef MEMBERTYPE_H
#define MEMBERTYPE_H

#include <iostream>
#include <string>
using namespace std;

class MemberType
{
public:
	MemberType();	//Default Constructor
	MemberType(string newFirstName, string newLastName, int newMemberID);	//Overloaded Constructor

	// MUTATOR
	void setMemberInfo(const string &newFirstName, const string &newLastName, int newMemberID);

	// ACCESSOR
	string getFirstName() const;
	string getLastName() const;
	int getMembershipNo() const;

	void printName() const;
	void printMemberInfo() const;

	//Destructor
	~MemberType();

private:
	string firstName;
	string lastName;
	int memberID;
};
#endif // !MEMBERTYPE_H