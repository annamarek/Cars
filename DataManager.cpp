#include "Header.h"
#include "DataManager.h"

DataManager::DataManager()
{
	//catalog.SetName("Test Catalog name");
	//catalog.SetAbout(" Test Catalog description");
	fileName = "data.xml";
}

void DataManager::display() const
{
	std::cout << "\n Catalog: " << catalog.GetName() << "\n";
	std::cout << "\n Descrition: " << catalog.GetAbout() << "\n";
}

void DataManager::initData()
{
}

void DataManager::loadData()
{
	//1 створюємо обєкт дерева даних
	pt::ptree tree;

	//2 зчитуємо дані із вказаного файла у дерево данних
	pt::read_xml(fileName, tree);

	//3 читуємо назву каталогу
	std::string catalogName = tree.get<std::string>("catalog.name");

	//4 читуємо опис каталогу
	std::string catalogAbout = tree.get<std::string>("catalog.about");
}

void DataManager::saveData()
{
}
