// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cows.insertAsLast(1.56);
	cout << "cows list  :  " << cows << "\nWith a size of  :  " << cows.size() << "\nAnd a sum of  :  " << cows.sum() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl << "With a size of  :  " << cows.size() << endl << "And a sum of  :  " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl << "With a size of  :  " << horses.size() << endl << "And a sum of  :  " << horses.sum() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl << "With a size of  :  " << cows.size() << endl << "And a sum of  :  " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl << "With a size of  :  " << horses.size() << endl << "And a sum of  :  " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl << "With a size of  :  " << pigs.size() << endl << "And a sum of  :  " << pigs.sum() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl << "With a size of  :  " << cows.size() << endl << "And a sum of  :  " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl << "With a size of  :  " << horses.size() << endl << "And a sum of  :  " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << endl << "With a size of  :  " << pigs.size() << endl << "And a sum of  :  " << pigs.sum() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "End of code" << endl;

	system("pause");

	return 0;
}

