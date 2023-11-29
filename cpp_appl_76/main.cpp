#include "CarDealership.h"

int main() {
    CarDealership dealership;

    
    dealership.addEmployee(Employee("Vlad Potuk", "Sales Manager", "+380994444343", "vlad.potuk01@gmail.com"));

    
    dealership.addCar(Car("Audi", 2022, "RS8", 20000.0, 25000.0));

    
    dealership.addSale(Sale(dealership.getEmployee(0), dealership.getCar(0), "2023-01-01", 23000.0));

    
    dealership.saveDataToFile("file.txt");

    return 0;
}
