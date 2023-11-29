#ifndef SALE_H
#define SALE_H

#include "Employee.h"
#include "Car.h"
#include <string>

class Sale {
public:
    Sale();
    Sale(const Employee& employee, const Car& car, const std::string& saleDate, double actualSalePrice);

    const Employee& getEmployee() const;
    const Car& getCar() const;
    const std::string& getSaleDate() const;  
    double getActualSalePrice() const;

private:
    Employee employee;
    Car car;
    std::string saleDate;
    double actualSalePrice;
};

#endif 
