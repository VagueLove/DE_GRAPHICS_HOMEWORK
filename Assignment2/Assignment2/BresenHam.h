#pragma once
#include <vector>
#include "Point.h"

class BresenHam
{
public:
	BresenHam();
	//ª≠œﬂÀ„∑®
	void DrawLine();
	void PrintPoints();
private:
	Point start;
	Point end;
	std::vector<Point> Points;
};