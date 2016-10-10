#include "DonorList.h"
#include <string>
//default constructor
DonorList::DonorList()
{
	count = 0;
}

//addDonor
void DonorList::addDonor(const string& newFirstName, const string& newLastName, int newMemberID, double newDonations)
{
	DonorType info;
	info.setDonorInfo(newFirstName, newLastName, newMemberID, newDonations);

	Node* nodeOne = new Node(info, nullptr);
	if (first == nullptr)
	{
		first = nodeOne;
		last = nodeOne;
	}
	else
	{
		last->setLink(nodeOne);
		last = nodeOne;
	}

	++count;
}
//getNumberOfDonors
int DonorList::getNumberOfDonors() const
{
	return count;
}

//searchID
bool DonorList::searchID(int newMemberID) const
{
	Node* nodeOne = first;

	while (nodeOne != nullptr)
	{
		if (nodeOne->getDonor().getMembershipNo() == newMemberID)
		{
			return true;
		}
		nodeOne = nodeOne->getLink();
	}
	return false;
}

//getTotalDonations
double DonorList::getTotalDonations()
{
	double total = 0.0;
	Node *nodeOne = first;
	while (nodeOne != nullptr)
	{
		total += nodeOne->getDonor().getAmountDonated();
		nodeOne = nodeOne->getLink();
	}
	return total;
}
//deleteDonor
void DonorList::deleteDonor(int newMemberID)
{
	if (first != nullptr)
	{
		Node *current = first;

		if (first->getDonor().getMembershipNo() == newMemberID)
		{
			first = first->getLink();
			delete current;
			current = nullptr;

			--count;
		}
		else
		{
			Node* trailCurrent = first;
			current = first->getLink();
			while (current != nullptr)
			{
				if (current->getDonor().getMembershipNo() == newMemberID)
				{
					if (current == last)
					{
						current = last;
						last = trailCurrent;
						last->setLink(nullptr);
					}
					else
					{
						trailCurrent->setLink(current->getLink());
					}
					delete current;
					current = nullptr;
					--count;
				}
				else
				{
					trailCurrent = trailCurrent->getLink();
					current = current->getLink();
				}
			}
		}
	}
}
void DonorList::printList() const
{
	Node* current = first;

	while (current != nullptr)
	{
		current->getDonor().printMemberInfo();
		current = current->getLink();
	}
}

//destroyList
void DonorList::destroyList()
{
	Node* current = first;
	while (current != nullptr)
	{
		current = first;
		first = first->getLink();
		delete current;
		current = nullptr;

		--count;
	}
}

//destructor
DonorList::~DonorList()
{
	destroyList();
}
