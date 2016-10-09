/*
TeamName: WoofPack
Nguyen, Ly
CS A250
September 15, 2016

Project 1B: DonorType Class
*/
#ifndef DONORTYPE_H
#define DONORTYPE_H

#include "MemberType.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class DonorType : public MemberType
{
public:
	DonorType(); //Default Construtor
	DonorType(const string& newFirstName, const string& newLastName, int newMemberID, double newDonations);

	//Mutators
	void setDonorInfo(const string& newFirstName, const string& newLastName, int newMemberID, double newDonations);
	void setAmountDonated(double newDonation);
	
	//Accessor
	double getAmountDonated() const;

	void printDonor() const;
	void printDonation() const;

	~DonorType(); //Destructor
private:
	double donations;
};
#endif