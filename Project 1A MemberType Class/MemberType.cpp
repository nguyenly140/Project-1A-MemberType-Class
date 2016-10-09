/*
TeamName: WoofPack
Nguyen, Ly
CS A250
September 15, 2016

Project 1A: MemberType Class
*/

#include "MemberType.h"

MemberType::MemberType() 
{
	memberID = 0;
};
MemberType::MemberType(string newFirstName, string newLastName, int newMemberID) // other Constructors
{
	firstName = newFirstName;
	lastName = newLastName;
	memberID = newMemberID;
}

// MUTATOR
void MemberType::setMemberInfo(const string &newFirstName, const string &newLastName, int newMemberID)
{
	firstName = newFirstName;
	lastName = newLastName;
	memberID = newMemberID;
}

// ACCESSOR
string MemberType::getFirstName() const
{
	return firstName;
}
string MemberType::getLastName() const
{
	return lastName;
}
int MemberType::getMembershipNo() const
{
	return memberID;
}

// Print
void MemberType::printName() const
{
	cout << lastName << ", " << firstName << endl;
}
void MemberType::printMemberInfo() const
{
	cout << memberID << " - " << lastName << " " << firstName << endl;
}

MemberType::~MemberType() {}