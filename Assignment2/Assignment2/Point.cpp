#include "Point.h"
#include <iostream>
void Point::GetStart()
{
	int x, y;
	std::cout << "�������������" << std::endl;
	std::cin >> x >> y;
	this->x = x;
	this->y = y;
}
void Point::GetEnd()
{
	int x, y;
	std::cout << "�������յ�����" << std::endl;
	std::cin >> x >> y;
	this->x = x;
	this->y = y;
}