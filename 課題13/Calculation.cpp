#include "Calculation.h"
#include <iostream>

using namespace std;

void Calculation::SetA(float a) {
	valueA = a;
}

void Calculation::SetB(float b) {
	valueB = b;
}

void Calculation::Disp() {
	//‘«‚µŽZ
	value = valueA + valueB;
	cout << valueA << "+" << valueB << "=" << value << "\n";
	//ˆø‚«ŽZ
	value = valueA - valueB;
	cout << valueA << "-" << valueB << "=" << value << "\n";
}
