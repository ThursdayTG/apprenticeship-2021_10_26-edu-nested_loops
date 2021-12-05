// inclusion of libraries
#include <iostream>
#include <string>

// namespace
using namespace std;


int main(){

	/*
	 * Eingabe von Länge und Breite
	 */

	/**/
	int	 length = 0, width = 0;

	cout	<< "Laenge: ";		cin	 >> length;
	cout	<< "Breite: ";		cin	 >> width;
	cout	<< "\n";
	/**/

	/**/
	for (int iy = 1;
		 iy <= length;
		 iy++){

		for (int ix = 1;
			ix <= width;
			ix++){
			cout	<< "# ";
		}

		cout	<< "\n";
	}
	/**/

	/**
	cout	<<	"test ... \n";
	/**/

	/**/
	cout	<<	"\n";
	cin.ignore();						// use this block to pause progress in console, unpauses on pressing any button. cin.ignore(); may not always be necessary.
	cin.get();
	cout	<<	"\033[2J\033[1;1H";		// clears screen, string of special characters that will translate to a clear screen command.
	/**/

	return 0;

}

/*
	compile:
g++ nested_loops_alpha.cpp -o nested_loops_alpha

	run from console:
./nested_loops_alpha

	clear, compile, run:
clear && g++ nested_loops_alpha.cpp -o nested_loops_alpha && ./nested_loops_alpha
*/
