#include "MidPointLine.h"
#include <iostream>

MidPointLine::MidPointLine()
{
	start.GetStart();
	end.GetEnd();
}
void MidPointLine::DrawLine() 
{
	//初始化
	Point temp;
	temp.x = start.x;
	temp.y = start.y;
	int a = start.y - end.y;
	int b = end.x - start.x;
	int c = start.x * end.y - end.x * start.y;
	int d = 2 * a + b;
	int deta1 = 2 * a;
	int deta2 = 2 * (a + b);
	//确定直线上的点
	while(temp.x < end.x)
	{
		if (d < 0)
		{
			temp.x += 1;
			temp.y += 1;
			d += deta2;
		}
		else
		{
			temp.x += 1;
			d += deta1;
		}
		if(temp.x != end.x)
			Points.push_back(temp);
	}
}
void MidPointLine::PrintPoints()
{
	for (Point& i : Points)
	{
		std::cout << '(' << i.x << ',' << i.y << ')';
	}
}