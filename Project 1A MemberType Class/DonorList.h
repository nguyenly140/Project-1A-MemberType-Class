#ifndef DONORLIST_H
#define DONORLIST_H

#include "DonorType.h"

#include<iostream>
#include <string>		
#include <iomanip>

using namespace std;

class Node
{
public:
	Node() {}
	Node(const DonorType& theDonor, Node *theLink)
		: donor(theDonor), link(theLink) {}
	Node* getLink() const { return link; }
	DonorType getDonor() const { return donor; }
	void setDonor(const DonorType& theDonor)
	{
		donor = theDonor;
	}
	void setLink(Node *theLink) { link = theLink; }

private:
	DonorType donor;
	Node *link;		//pointer that points to next node
};


class DonorList
{
public:
	//default constructor
	DonorList();

	//addDonor
	void addDonor(const string& newFirstName, const string& newLastName, int newMemberID, double newDonations);

	//getNumberOfDonors
	int getNumberOfDonors() const;

	//searchID
	bool searchID(int newMemberID) const;

	//getTotalDonations
	double getTotalDonations();

	//deleteDonor
	void deleteDonor(int newMemberID);

	//destroyList
	void destroyList();


	//print
	void printList() const;

	//destructor
	~DonorList();

private:

	Node *first;
	Node *last;		// This is a singly-linked list with a pointer to the last node.
	int count;
};

#endif

