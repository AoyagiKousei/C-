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
	//�����Z
	value = valueA + valueB;
	cout << valueA << "+" << valueB << "=" << value << "\n";
	//�����Z
	value = valueA - valueB;
	cout << valueA << "-" << valueB << "=" << value << "\n";
}
