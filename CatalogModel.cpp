#include "Header.h"
#include "CatalogModel.h"

CatalogModel::CatalogModel():name("-"), about("-")
{
}

CatalogModel::CatalogModel(std::string name, std::string about)
	:name(name), about(about)
{
}

void CatalogModel::AddCar(const CarModel& c)
{
	cars.push_back(c);
}

void CatalogModel::display() const
{
	std::cout << "\n catalog: " << name << "\n";
	std::cout << " Description: " << about << "\n";
	int N = cars.size();
	if (N == 0)
	{
		std::cout << "No cars in catalog\n";
	}
	else
	{
		std::cout << " ~~List of Cars~~ \n";
		std::for_each(cars.begin(), cars.end(), [](const CarModel& c) {
			c.display();
			});
	}
}

void CatalogModel::SetName(std::string name)
{
	this->name = name;
}

void CatalogModel::SetAbout(std::string about)
{
	this->about = about;
}

std::string CatalogModel::GetName()const
{
	return name;
}

std::string CatalogModel::GetAbout()const
{
	return about;
}
