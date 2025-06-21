# Compilador y opciones
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Archivos fuente
LEX = lexer.l
YACC = parser.y
SRCS = funciones.cpp main.cpp

# Archivos generados
LEX_C = lex.yy.c
YACC_CPP = parser.tab.cpp
YACC_HPP = parser.tab.hpp

# Objetos y ejecutable
OBJS = $(YACC_CPP) $(LEX_C) $(SRCS)
TARGET = interpreter

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Genera parser.tab.cpp y parser.tab.hpp
$(YACC_CPP) $(YACC_HPP): $(YACC)
	bison -d -o $(YACC_CPP) $(YACC)

# Genera lex.yy.c
$(LEX_C): $(LEX) $(YACC_HPP)
	flex $(LEX)

clean:
	rm -f $(TARGET) $(LEX_C) $(YACC_CPP) $(YACC_HPP) *.o
