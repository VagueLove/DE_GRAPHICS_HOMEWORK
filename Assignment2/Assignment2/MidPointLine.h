#pragma once
#include <vector>
#include "Point.h"

class MidPointLine
{
public:
	MidPointLine();
	//�����㷨
	void DrawLine();
	void PrintPoints();
	
private:
	Point start;
	Point end;
	std::vector<Point> Points;
};

