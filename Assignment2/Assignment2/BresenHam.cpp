#include "BresenHam.h"
#include <iostream>

BresenHam::BresenHam()
{
	start.GetStart();
	end.GetEnd();
}
void BresenHam::DrawLine()
{
	//初始化
	Point temp;
	temp.x = start.x;
	temp.y = start.y;
	int S1, S2, Y, X, e, ZX, ZY;
	float m;
	Y = end.y - start.y;
	X = end.x - start.x;
	ZX = abs(X);
	ZY = abs(Y);
	m = abs(Y * 1.0 / X);
	S1 = X >= 0 ? 1 : -1;
	S2 = Y >= 0 ? 1 : -1;
	//确定直线上的点
	if (m <= 1)
	{
		e = 2 * (ZY - ZX);
		while (temp.x < end.x)
		{
			if (e < 0)
			{
				temp.x += S1;
				e += 2 * ZY;
			}
			else
			{
				temp.x += S1;
				temp.y += S2;
				e += 2 * (ZY - ZX);
			}
			if (temp.x != end.x)
				Points.push_back(temp);
		}
	}
	else
	{
		e = 2 * (ZX - ZY);
		while (temp.x < end.x)
		{
			if (e < 0)
			{
				temp.y += S2;
				e += 2 * ZX;
			}
			else
			{
				temp.x += S1;
				temp.y += S2;
				e += 2 * (ZX - ZY);
			}
			if (temp.y != end.y)
				Points.push_back(temp);
		}
	}
}
void BresenHam::PrintPoints()
{
	for (Point& i : Points)
	{
		std::cout << '(' << i.x << ',' << i.y << ')';
	}
}