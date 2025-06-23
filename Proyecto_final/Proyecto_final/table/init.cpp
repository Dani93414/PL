/*!	
	\file    init.cpp
	\brief   Code of the function for the initialization of table of symbols
	\author  
	\date    2017-12-5
	\version 1.0
*/

#include <list>

#include "init.hpp"

#include "table.hpp"


//  NEW in example 11 
#include "numericConstant.hpp"

#include "logicalConstant.hpp"

//  NEW in example 12
#include "keyword.hpp"

//  NEW in example 13
#include "builtinParameter1.hpp"


// NEW  in example 14
#include "builtinParameter0.hpp"
#include "builtinParameter2.hpp"



//  interpreter.tab.h contains the number values of the tokens produced by the parser
#include "../parser/interpreter.tab.h"


//////////////////////////////////////////////////////////////////////////////////

void init(lp::Table &t)
{
 int i;

 //  MODIFIED in example 11 
 lp::NumericConstant *n;

 // The predefined numeric constants are installed in the table of symbols
 for (i=0; numericConstant[i].name.compare("")!=0; i++)
	{
		// The  Predefined numeric constant is inserted into the symbol table

		 n = new lp::NumericConstant(numericConstant[i].name,
									 CONSTANT,
									 NUMBER,
									 numericConstant[i].value);

		// A pointer to the new NumericConstant is inserted into the table of symbols
		t.installSymbol(n);
	}


 lp::LogicalConstant *l;
 // The predefined logical constants are installed in the table of symbols
 for (i=0; logicalConstant[i].name.compare("")!=0; i++)
	{
		// The  Predefined numeric constant is inserted into the symbol table

		 l = new lp::LogicalConstant(logicalConstant[i].name,
									 CONSTANT,
									 BOOL,
									 logicalConstant[i].value);

		// A pointer to the new LogicalConstant is inserted into the table of symbols
		t.installSymbol(l);
	}

  //////////////////////////////////////////////

 //  NEW in example 12
 lp::Keyword *k;

 // The predefined numeric constants are installed in the table of symbols
 for (i=0; keyword[i].name.compare("")!=0; i++)
	{
		// The  Keywords numeric is inserted into the symbol table

		 k = new lp::Keyword(keyword[i].name,
							 keyword[i].token);

		// A pointer to the new Keyword is inserted into the table of symbols
		t.installSymbol(k);
	}


  //////////////////////////////////////////////

 //  NEW in example 13
 lp::BuiltinParameter1 *f;

 // The predefined function with 1 parameter are installed in the table of symbols
 for (i=0; function_1[i].name.compare("")!=0; i++)
	{
		 f = new lp::BuiltinParameter1(function_1[i].name,
									   BUILTIN,   // Token
									   1,		  // Number of parameters
									   function_1[i].function);

		// A pointer to the new Keyword is inserted into the table of symbols
		t.installSymbol(f);
	}


}

