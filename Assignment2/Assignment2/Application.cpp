#include<iostream>

#include "MidPointLine.h"
#include "BresenHam.h"

int main()
{
	MidPointLine mpl;
	mpl.DrawLine();
	mpl.PrintPoints();
	std::cout << std::endl;
	BresenHam bsh;
	bsh.DrawLine();
	bsh.PrintPoints();
}