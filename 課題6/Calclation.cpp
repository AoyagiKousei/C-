#include "Calclation.h"
#include <iostream>

using namespace std;

void Calclation::SetA(float a) {
	valueA = a;
}

void Calclation::SetB(float b) {
	valueB = b;
}

void Calclation::Disp() {
	//‘«‚µŽZ
	value = valueA + valueB;
	cout << valueA << "+" << valueB << "=" << value << "\n";
	//ˆø‚«ŽZ
	value = valueA - valueB;
	cout << valueA << "-" << valueB << "=" << value << "\n";
}
