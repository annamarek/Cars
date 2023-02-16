#include "Header.h"
#include "CarModel.h"
CarModel::CarModel() :id(0), type("-"), year(0), speed(0), price(0) {}
CarModel::CarModel(int id, std::string type, int year, int speed, int price)
	:id(id), type(type), year(year), speed(speed), price(price) {}
void CarModel::display()const
{
	std::cout << "\n> Car:\n";
	std::cout << "  ID: " << id << "\n";
	std::cout << "  Model: " << type << "\n";
	std::cout << "  Year: " << year << "\n";
	std::cout << "  Speed: " << speed << "\n";
	std::cout << "  Price: " << price << ".$\n";
}