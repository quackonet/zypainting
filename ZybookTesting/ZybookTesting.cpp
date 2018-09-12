#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double wallHeight;
	double wallWidth;
	double wallArea;
	double galAmnt;
	double galRound;
	const double paintCov = 350;

	cout << "Enter wall height (feet): ";
	cin >> wallHeight;
	cout << "Enter wall width (feet): ";
	cin >> wallWidth;

	wallArea = wallHeight * wallWidth;

	cout << "Wall area: " << wallArea << " square feet" << endl;

	galAmnt = wallArea / paintCov;

	cout << "Paint needed: " << galAmnt << " gallons" << endl;

	galRound = round(galAmnt);

	cout << "Cans needed: " << galRound << " can(s)" << endl;

	return 0;
}


