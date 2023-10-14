#include "Point.h"
#include <iostream>
void Point::GetStart()
{
	int x, y;
	std::cout << "请输入起点坐标" << std::endl;
	std::cin >> x >> y;
	this->x = x;
	this->y = y;
}
void Point::GetEnd()
{
	int x, y;
	std::cout << "请输入终点坐标" << std::endl;
	std::cin >> x >> y;
	this->x = x;
	this->y = y;
}