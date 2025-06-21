#include "funciones.hpp"
#include <iostream>
#include <map>

static std::map<std::string, double> tabla_simbolos;

void init_context() {
    tabla_simbolos.clear();
}

void set_variable(const std::string& nombre, double valor) {
    tabla_simbolos[nombre] = valor;
}

double get_variable(const std::string& nombre) {
    if (tabla_simbolos.find(nombre) != tabla_simbolos.end())
        return tabla_simbolos[nombre];
    else {
        std::cerr << "Variable no definida: " << nombre << std::endl;
        return 0.0;
    }
}

void imprimir(double valor) {
    std::cout << valor << std::endl;
}

void leer_numero(const std::string& nombre) {
    double valor;
    std::cin >> valor;
    set_variable(nombre, valor);
}
