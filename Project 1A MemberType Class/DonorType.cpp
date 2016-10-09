#include "DonorType.h"

DonorType::DonorType() 
{
	donations = 0.0;
}

DonorType::DonorType(const string& newFirstName, const string& newLastName, 
	int newMemberID, double newDonations) :MemberType(newFirstName, newLastName, newMemberID)
{
	donations = newDonations;
}

void DonorType::setDonorInfo(const string& newFirstName, const string& newLastName, 
	int newMemberID, double newDonations)
{
	setMemberInfo(newFirstName, newLastName, newMemberID);
	donations = newDonations;
}

void DonorType::setAmountDonated(double newDonations)
{
	donations = newDonations;
}

double DonorType::getAmountDonated() const
{
	return donations;
}

void DonorType::printDonor() const
{
	MemberType::printMemberInfo();
}

void DonorType::printDonation() const
{
	cout << getLastName() << ", " << getFirstName() << "\n   Donation amount: $" 
		<< fixed << setprecision(2) << getAmountDonated() << endl;
}

DonorType::~DonorType() {}