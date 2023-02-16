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
	//1 ��������� ���� ������ �����
	pt::ptree tree;

	//2 ������� ��� �� ��������� ����� � ������ ������
	pt::read_xml(fileName, tree);

	//3 ������ ����� ��������
	std::string catalogName = tree.get<std::string>("catalog.name");

	//4 ������ ���� ��������
	std::string catalogAbout = tree.get<std::string>("catalog.about");
}

void DataManager::saveData()
{
}
