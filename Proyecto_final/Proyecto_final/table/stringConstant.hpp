/*!
  \file    stringConstant.hpp
  \brief   Declaration of StringConstant class
  \author  
  \date    2025-06-22
  \version 1.0
*/

#ifndef _STRINGCONSTANT_HPP_
#define _STRINGCONSTANT_HPP_

#include <string>
#include <iostream>

#include "constant.hpp"

namespace lp {

/*!
  \class StringConstant
  \brief Definition of attributes and methods of StringConstant class
  \note  StringConstant publicly inherits from Constant class
*/
class StringConstant : public lp::Constant
{
private:
    std::string _value; //!< \brief String value of the StringConstant

public:

    // Constructors

    //! Constructor with arguments with default values
    inline StringConstant(std::string name = "", int token = 0, int type = 0, std::string value = "") :
        Constant(name, token, type), _value(value)
    {}

    //! Copy constructor
    StringConstant(const StringConstant &s)
    {
        this->setName(s.getName());
        this->setToken(s.getToken());
        this->setType(s.getType());
        this->setValue(s.getValue());
    }

    // Observer

    //! Returns the value of the StringConstant
    inline std::string getValue() const
    {
        return _value;
    }

    // Modifier

    //! Sets the value of the StringConstant
    inline void setValue(const std::string &value)
    {
        _value = value;
    }

    // I/O functions

    void read();

    void write() const;

    // Operators

    StringConstant &operator=(const StringConstant &s);

    // Friend functions

    friend std::istream &operator>>(std::istream &i, StringConstant &s);

    friend std::ostream &operator<<(std::ostream &o, const StringConstant &s);

};

} // namespace lp

#endif
