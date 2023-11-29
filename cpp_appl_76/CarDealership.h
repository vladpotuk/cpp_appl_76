#ifndef CARDEALERSHIP_H
#define CARDEALERSHIP_H

#include "Employee.h"
#include "Car.h"
#include "Sale.h"
#include <iostream>
#include <fstream>

class CarDealership {
public:
    CarDealership();

    void addEmployee(const Employee& employee);
    void addCar(const Car& car);
    void addSale(const Sale& sale);

    const Employee& getEmployee(int index) const;
    const Car& getCar(int index) const;
    const Sale& getSale(int index) const;

    void saveDataToFile(const std::string& filename) const;
    void loadDataFromFile(const std::string& filename);

private:
    static const int MAX_EMPLOYEES = 100;
    static const int MAX_CARS = 100;
    static const int MAX_SALES = 100;

    Employee employees[MAX_EMPLOYEES];
    Car cars[MAX_CARS];
    Sale sales[MAX_SALES];

    int numEmployees;
    int numCars;
    int numSales;
};

#endif 
