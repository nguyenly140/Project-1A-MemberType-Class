// Program entry

#include "InputHandler.h"
#include "DonorList.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	DonorList aList;

	readDonorData(aList);

	cout << "Total donors: " << aList.getNumberOfDonors() << endl;
	cout << "Total donations: " << aList.getTotalDonations() << endl;
	cout << ((aList.searchID(12345678)) ? "Found.\n" : "Not found.\n");
	cout << ((aList.searchID(12341234)) ? "Found.\n" : "Not found.\n");
	cout << ((aList.searchID(87654321)) ? "Found.\n" : "Not found.\n");
	cout << ((aList.searchID(11111111)) ? "Found.\n" : "Not found.\n");
	
	aList.deleteDonor(12345678);
	aList.deleteDonor(12341234);
	aList.deleteDonor(87654321);
	aList.deleteDonor(11111111);
	cout << "Total donors: " << aList.getNumberOfDonors() << endl;
	cout << "Total donations: " << aList.getTotalDonations() << endl;
	cout << ((aList.searchID(12345678)) ? "Found.\n" : "Not found.\n");
	cout << ((aList.searchID(12341234)) ? "Found.\n" : "Not found.\n");
	cout << ((aList.searchID(87654321)) ? "Found.\n" : "Not found.\n");
	cout << ((aList.searchID(11111111)) ? "Found.\n" : "Not found.\n");
	cout << ((aList.searchID(56439876)) ? "Found.\n" : "Not found.\n");
	cout << ((aList.searchID(34232712)) ? "Found.\n" : "Not found.\n");

	aList.destroyList();
	cout << "Total donors: " << aList.getNumberOfDonors() << endl;
	cout << "Total donations: " << aList.getTotalDonations() << endl;
	cout << ((aList.searchID(12345678)) ? "Found.\n" : "Not found.\n");
	cout << ((aList.searchID(12341234)) ? "Found.\n" : "Not found.\n");
	cout << ((aList.searchID(87654321)) ? "Found.\n" : "Not found.\n");
	cout << ((aList.searchID(11111111)) ? "Found.\n" : "Not found.\n");


	cout << endl;
	system("Pause");
	return 0;
}