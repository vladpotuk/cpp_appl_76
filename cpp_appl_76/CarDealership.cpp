#include "CarDealership.h"

CarDealership::CarDealership() : numEmployees(0), numCars(0), numSales(0) {
   
}

void CarDealership::addEmployee(const Employee& employee) {
    if (numEmployees < MAX_EMPLOYEES) {
        employees[numEmployees++] = employee;
    }
    else {
        std::cerr << "Error: Maximum number of employees reached.\n";
    }
}

void CarDealership::addCar(const Car& car) {
    if (numCars < MAX_CARS) {
        cars[numCars++] = car;
    }
    else {
        std::cerr << "Error: Maximum number of cars reached.\n";
    }
}

void CarDealership::addSale(const Sale& sale) {
    if (numSales < MAX_SALES) {
        sales[numSales++] = sale;
    }
    else {
        std::cerr << "Error: Maximum number of sales reached.\n";
    }
}

const Employee& CarDealership::getEmployee(int index) const {
    if (index >= 0 && index < numEmployees) {
        return employees[index];
    }
    else {
        std::cerr << "Error: Employee index out of bounds.\n";
        return employees[0];
    }
}

const Car& CarDealership::getCar(int index) const {
    if (index >= 0 && index < numCars) {
        return cars[index];
    }
    else {
        std::cerr << "Error: Car index out of bounds.\n";
        return cars[0];
    }
}

const Sale& CarDealership::getSale(int index) const {
    if (index >= 0 && index < numSales) {
        return sales[index];
    }
    else {
        std::cerr << "Error: Sale index out of bounds.\n";
        return sales[0];
    }
}

void CarDealership::saveDataToFile(const std::string& filename) const {
    std::ofstream outFile(filename);

    if (!outFile.is_open()) {
        std::cerr << "Error: Unable to open " << filename << " for writing.\n";
        return;
    }

    // Збереження даних у файл

    for (int i = 0; i < numEmployees; ++i) {
        outFile << employees[i].getName() << ","
            << employees[i].getPosition() << ","
            << employees[i].getPhone() << ","
            << employees[i].getEmail() << "\n";
    }

    for (int i = 0; i < numCars; ++i) {
        outFile << cars[i].getManufacturer() << ","
            << cars[i].getYear() << ","
            << cars[i].getModel() << ","
            << cars[i].getCostPrice() << ","
            << cars[i].getPotentialSalePrice() << "\n";
    }

    for (int i = 0; i < numSales; ++i) {
        outFile << sales[i].getEmployee().getName() << ","
            << sales[i].getCar().getModel() << ","
            << sales[i].getSaleDate() << ","
            << sales[i].getActualSalePrice() << "\n";
    }

    std::cout << "Data saved to file " << filename << ".\n";
}

void CarDealership::loadDataFromFile(const std::string& filename) {

}

