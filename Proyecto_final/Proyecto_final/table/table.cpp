/*!	

	\file   table.cpp
	\brief   Code of some functions of Table class
	\author  
	\date    2017-12-13
	\version 1.0
*/

#include <map>

#include <cassert>

#include <iostream>

#include "table.hpp"

std::string lp::Table::normalize(const std::string & id){
  std::string tmp= id;
  for (std::string::iterator it = tmp.begin(); it != tmp.end(); ++it) {
    *it = std::tolower(static_cast<unsigned char>(*it)); 
  }
  return tmp;
} 

bool lp::Table::lookupSymbol(const std::string & name) const 
{	
  std::string key = this->normalize(name);	
	if (this->_table.find(key) !=  this->_table.end())
		return true;
	else
		return false;
}


lp::Symbol * lp::Table::getSymbol(const std::string & name)
{
 #ifndef NDEBUG
   // Precondition
   assert (this->lookupSymbol(name) == true);
 #endif //NDEBUG
  std::string key = normalize(name);
	return	this->_table[key];
}



void lp::Table::installSymbol(Symbol * s)
{
  std::string key = normalize(s->getName());
 #ifndef NDEBUG
  // Precondition
   assert (this->lookupSymbol(key) == false);
 #endif //NDEBUG

   // The pointer to symbol is inserted in the map
	this->_table[key] = s;

 #ifndef NDEBUG
  // Postcondition
   assert (this->lookupSymbol(key) == true);
 #endif //NDEBUG
}



void lp::Table::eraseSymbol(const std::string & name)
{
  std::string key = normalize(name);
 #ifndef NDEBUG
  // Precondition
   assert (this->lookupSymbol(key) == true);
 #endif //NDEBUG

   // The symbol "key" is deleted from the map
	this->_table.erase(key);

 #ifndef NDEBUG
  // Postcondition
   assert (this->lookupSymbol(key) == false);
 #endif //NDEBUG
}


void lp::Table::printTable()
{
	for(std::map<std::string, lp::Symbol *>::const_iterator it = this->_table.begin();
        it != this->_table.end();
        ++it)
    {
		std::cout<<it->first<<", "<<getSymbol(it->first)->getToken()<< std::endl;
	}
}




