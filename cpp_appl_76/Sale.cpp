#include "Sale.h"

Sale::Sale() : saleDate(""), actualSalePrice(0.0) {
}

Sale::Sale(const Employee& employee, const Car& car, const std::string& saleDate, double actualSalePrice)
    : employee(employee), car(car), saleDate(saleDate), actualSalePrice(actualSalePrice) {
}

const Employee& Sale::getEmployee() const {
    return employee;
}

const Car& Sale::getCar() const {
    return car;
}

const std::string& Sale::getSaleDate() const {
    return saleDate;
}

double Sale::getActualSalePrice() const {
    return actualSalePrice;
}
