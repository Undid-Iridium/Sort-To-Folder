// FileOrganizerDLL.cpp : Defines the exported functions for the DLL application.
//

#include <limits.h>
#include "FileOrganizerDLL.h"

using namespace std;
void startApplication(bool perm, char ** array, int sizeOfArr) {
	/*BOOL f;
	FILE *fp;
	try {
		f = AllocConsole();
		freopen_s(&fp, "CONOUT$", "w", stdout);
		freopen_s(&fp, "CONOUT$", "w", stderr);
	}
	catch (...) {

	}*/
	//cout << sizeOfArr << endl;
	string *currStrArr = new string[sizeOfArr];
	//cout <<  array[0] << " And " << array[1] << " And " << array[2] << " And " << array[3] << " And " << sizeOfArr << endl;
	for (int loc = 0; loc < sizeOfArr; loc++) {
		currStrArr[loc] = string(array[loc]);
	}
	cout << "Using DLL system" << endl;
	mainFunc(perm, currStrArr, sizeOfArr);
	//delete[] currStrArr;
	//Sleep(2000);
	return;
}