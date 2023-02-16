#pragma once
#include"CatalogModel.h"
class DataManager
{
	CatalogModel catalog;
	std::string fileName;
public:
	DataManager();
	void display()const;
	void initData();
	void loadData();
	void saveData();
};

