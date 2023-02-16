#pragma once
#include"Header.h"
class CarModel
{
	int id;
	std::string type;
	int year;
	int speed;
	int price;
public:
	CarModel();
	CarModel(int id, std::string type, int year, int speed, int price);
	void display()const;
};

