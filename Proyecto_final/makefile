all: interpreter

# parser.cpp y parser.tab.h se generan juntos desde parser.y
parser.cpp parser.tab.h: parser.y
	bison -d parser.y -o parser.cpp

# lexer.cpp necesita parser.tab.h
lexer.cpp: lexer.l parser.tab.h
	flex -o lexer.cpp lexer.l

# compilar el binario final
interpreter: lexer.cpp parser.cpp main.cpp funciones.cpp
	g++ -o interpreter lexer.cpp parser.cpp main.cpp funciones.cpp -std=c++11

clean:
	rm -f interpreter lexer.cpp parser.cpp parser.tab.h parser.output
