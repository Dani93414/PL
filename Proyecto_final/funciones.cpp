#include "funciones.hpp"
#include <iostream>
#include <map>
#include <math.h>
#include <ctype.h>
#include <cstring>
#include <string>

// Tablas de símbolos separadas por tipo
std::map<std::string, double> tabla_numeros;
std::map<std::string, std::string> tabla_cadenas;

// Inicialización
void init_context() {
    tabla_numeros.clear();
    tabla_cadenas.clear();
}

// NUMÉRICAS
void set_variable(const std::string& nombre, double valor) {
    tabla_numeros[nombre] = valor;
    tabla_cadenas.erase(nombre); // Si estaba como cadena, la borra
}

double get_variable(const std::string& nombre) {
    if (tabla_numeros.find(nombre) != tabla_numeros.end()) {
        return tabla_numeros[nombre];
    } else {
        std::cerr << "Variable numérica no definida: " << nombre << std::endl;
        return 0.0;
    }
}

// ALFANUMÉRICAS
void set_variable_str(const std::string& nombre, const std::string& valor) {
    tabla_cadenas[nombre] = valor; // Ya hace copia correctamente
    tabla_numeros.erase(nombre);
}

std::string get_variable_str(const std::string& nombre) {
    if (tabla_cadenas.find(nombre) != tabla_cadenas.end()) {
        return tabla_cadenas[nombre];
    } else {
        std::cerr << "Variable alfanumérica no definida: " << nombre << std::endl;
        return "";
    }
}

// IMPRESIÓN
void imprimir(double valor) {
    std::cout << valor << std::endl;
}

void imprimir_str(const std::string& valor) {
    for (size_t i = 0; i < valor.size(); ++i) {
        if (valor[i] == '\\' && i + 1 < valor.size()) {
            switch (valor[i + 1]) {
                case 'n': std::cout << '\n'; ++i; break;
                case 't': std::cout << '\t'; ++i; break;
                case '\'': std::cout << '\''; ++i; break;
                case '\\': std::cout << '\\'; ++i; break;
                default: std::cout << valor[i]; break;
            }
        } else {
            std::cout << valor[i];
        }
    }
    std::cout << std::endl;
}

// LECTURA
void leer_numero(const std::string& nombre) {
    double valor;
    std::cin >> valor;
    set_variable(nombre, valor);
}

void leer_cadena(const std::string& nombre) {
    std::string linea;
    std::getline(std::cin >> std::ws, linea);
    set_variable_str(nombre, linea);
}

// FUNCIONES ESPECIALES
void clear_screen() {
    std::cout << "\033[2J\033[H";  // ANSI: limpia pantalla y mueve cursor al inicio
}

void place_cursor(int x, int y) {
    std::cout << "\033[" << y << ";" << x << "H";
}

// Función para determinar si un identificador es numérico
int es_numero(const char* text) {
    if (text == nullptr || *text == '\0') return 0;

    int puntos = 0;
    int i = 0;

    // Puede empezar con signo + o -
    if (text[0] == '+' || text[0] == '-') {
        i = 1;
        if (text[1] == '\0') return 0; // solo signo no es número
    }

    for (; text[i] != '\0'; ++i) {
        if (text[i] == '.') {
            puntos++;
            if (puntos > 1) return 0; // más de un punto no permitido
        }
        else if (!isdigit(text[i])) {
            return 0; // caracter inválido
        }
    }

    // No debe terminar ni comenzar con punto
    if (text[i-1] == '.' || (i > 0 && text[(text[0] == '+' || text[0] == '-') ? 1 : 0] == '.')) {
        return 0;
    }

    return 1;
}