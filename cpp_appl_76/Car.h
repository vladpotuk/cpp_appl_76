#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
public:
    Car();
    Car(const std::string& manufacturer, int year, const std::string& model, double costPrice, double potentialSalePrice);

    const std::string& getManufacturer() const;
    int getYear() const;
    const std::string& getModel() const;
    double getCostPrice() const;
    double getPotentialSalePrice() const;

private:
    std::string manufacturer;
    int year;
    std::string model;
    double costPrice;
    double potentialSalePrice;
};

#endif 
