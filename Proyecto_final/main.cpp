#include <iostream>
#include <cstdio>
#include "funciones.hpp"

extern int yyparse();
extern FILE* yyin;

int main(int argc, char* argv[]) {
    if (argc == 2) {
        FILE* file = fopen(argv[1], "r");
        if (!file) {
            std::cerr << "Error: No se pudo abrir el archivo " << argv[1] << std::endl;
            return 1;
        }
        yyin = file;
    }

    init_context();
    yyparse();
    return 0;
}
