#include "CircleClass.h"
#include <iostream>

//‰~‚Ì”¼Œa‚ğæ“¾‚·‚éŠÖ”
void CircleClass::Input()
{
	std::cout << "”¼Œa‚ÍH";
	std::cin >> r;
}
//‰~‚Ì–ÊÏ‚ğŒvZ‚·‚éŠÖ”
void CircleClass::Calc()
{
	area = r * r * 3.14f;
}
//‰~‚Ì–ÊÏ‚ğo—Í‚·‚éŠÖ”
void CircleClass::Disp()
{
	std::cout << "‰~‚Ì–ÊÏ" << area << "\n";
}

