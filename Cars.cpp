#include "Header.h"
#include"CatalogModel.h"
#include"CarModel.h"
#include"DataManager.h"

int main()
{
   
    std::cout << "\n> Unit tests: \n";
    std::cout << "=================\n";
    auto managerPtr = std::make_unique<DataManager>();
    managerPtr->display();

}
