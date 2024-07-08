#include <iostream>
#include "Figure.h"

using namespace std;

void Figure::SetTeihen(float f)
{
	teihen = f;
}

void Figure::SetTakasa(float f)
{
	takasa = f;
}

void Figure::Disp()
{
	cout << "–ÊÏ‚Í" << menseki << "‚Å‚·" << endl;
}