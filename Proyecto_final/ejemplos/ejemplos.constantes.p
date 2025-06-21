# Prueba de constantes matemáticas y booleanas

a := pi;
b := e;
c := gamma;
d := phi;
f := deg;

print(a);         # Esperado: 3.14159...
print(b);         # Esperado: 2.71828...
print(c);         # Esperado: 0.5772
print(d);         # Esperado: 1.618
print(f);         # Esperado: 57.2958

# Prueba de booleanos
x := true;
y := false;

print(x);         # Esperado: 1
print(y);         # Esperado: 0

z := x or y;
print(z);         # Esperado: 1

w := x and y;
print(w);         # Esperado: 0

print(not x);     # Esperado: 0
print(not y);     # Esperado: 1
