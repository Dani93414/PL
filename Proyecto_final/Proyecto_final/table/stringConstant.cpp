/*!
  \file    stringConstant.cpp
  \brief   Code of some functions of StringConstant class
  \author  
  \date    2025-06-22
  \version 1.0
*/

#include <iostream>
#include "stringConstant.hpp"

void lp::StringConstant::read()
{
    std::cout << "Name of the StringConstant: ";
    std::cin >> this->_name;

    std::cout << "Token of the StringConstant: ";
    std::cin >> this->_token;
    std::cin.ignore();

    std::cout << "Type of the StringConstant: ";
    std::cin >> this->_type;
    std::cin.ignore();

    std::cout << "Value of the StringConstant: ";
    std::getline(std::cin, this->_value);  // Leer línea completa para string
}

void lp::StringConstant::write() const
{
    std::cout << "Name: " << this->getName() << std::endl;
    std::cout << "Token: " << this->getToken() << std::endl;
    std::cout << "Type: " << this->getType() << std::endl;
    std::cout << "Value: " << this->getValue() << std::endl;
}

lp::StringConstant &lp::StringConstant::operator=(const lp::StringConstant &s)
{
    if (this != &s)
    {
        this->setName(s.getName());
        this->setToken(s.getToken());
        this->setType(s.getType());
        this->setValue(s.getValue());
    }
    return *this;
}

std::istream &operator>>(std::istream &i, lp::StringConstant &s)
{
    std::string name;
    int token;
    int type;
    std::string value;

    i >> name;
    i >> token;
    i.ignore();

    i >> type;
    i.ignore();

    std::getline(i, value);

    s.setName(name);
    s.setToken(token);
    s.setType(type);
    s.setValue(value);

    return i;
}

std::ostream &operator<<(std::ostream &o, const lp::StringConstant &s)
{
    o << s.getName() << std::endl;
    o << s.getToken() << std::endl;
    o << s.getType() << std::endl;
    o << s.getValue() << std::endl;

    return o;
}
