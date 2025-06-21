#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include <string>
#include <map>

// Inicializa el contexto del intérprete (limpia la tabla de símbolos)
void init_context();

// Variables numéricas
void set_variable(const std::string& nombre, double valor);
double get_variable(const std::string& nombre);

// Variables alfanuméricas
void set_variable_str(const std::string& nombre, const std::string& valor);
std::string get_variable_str(const std::string& nombre);

// Impresión
void imprimir(double valor);
void imprimir_str(const std::string& valor);

// Entrada
void leer_numero(const std::string& nombre);
void leer_cadena(const std::string& nombre);

// Funciones especiales
void clear_screen();
void place_cursor(int x, int y);

extern std::map<std::string, double> tabla_numeros;
extern std::map<std::string, std::string> tabla_cadenas;
#endif
