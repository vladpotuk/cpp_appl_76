#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public:
    Employee();
    Employee(const std::string& name, const std::string& position, const std::string& phone, const std::string& email);

    const std::string& getName() const;
    const std::string& getPosition() const;
    const std::string& getPhone() const;  
    const std::string& getEmail() const;

private:
    std::string name;
    std::string position;
    std::string phone;
    std::string email;
};

#endif 
