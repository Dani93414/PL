#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include <string>
#include <map>

void init_context();
void set_variable(const std::string& nombre, double valor);
double get_variable(const std::string& nombre);
void imprimir(double valor);
void leer_numero(const std::string& nombre);

#endif
