#include "Employee.h"

Employee::Employee() : name(""), position(""), phone(""), email("") {
}

Employee::Employee(const std::string& name, const std::string& position, const std::string& phone, const std::string& email)
    : name(name), position(position), phone(phone), email(email) {
}

const std::string& Employee::getName() const {
    return name;
}

const std::string& Employee::getPosition() const {
    return position;
}

const std::string& Employee::getPhone() const {
    return phone;
}

const std::string& Employee::getEmail() const {
    return email;
}
