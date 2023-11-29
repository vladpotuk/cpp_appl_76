#include "Car.h"

Car::Car() : manufacturer(""), year(0), model(""), costPrice(0.0), potentialSalePrice(0.0) {
}

Car::Car(const std::string& manufacturer, int year, const std::string& model, double costPrice, double potentialSalePrice)
    : manufacturer(manufacturer), year(year), model(model), costPrice(costPrice), potentialSalePrice(potentialSalePrice) {
}

const std::string& Car::getManufacturer() const {
    return manufacturer;
}

int Car::getYear() const {
    return year;
}

const std::string& Car::getModel() const {
    return model;
}

double Car::getCostPrice() const {
    return costPrice;
}

double Car::getPotentialSalePrice() const {
    return potentialSalePrice;
}
