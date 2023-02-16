#pragma once
#include "CarModel.h"
class CatalogModel
{
	std::string name;
	std::string about;
	std::vector<CarModel>cars;
public:
	CatalogModel();
	CatalogModel(std::string name, std::string about);
	void AddCar(const CarModel& c);
	void display()const;
	void SetName(std::string name);
	void SetAbout(std::string about);
	std::string GetName()const;
	std::string GetAbout()const;
};
