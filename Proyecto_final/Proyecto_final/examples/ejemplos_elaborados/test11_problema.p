# ----------------------------------------------------
# DISTANCIA ENTRE DOS PUNTOS EN EL PLANO
# ----------------------------------------------------

print('== DISTANCIA ENTRE DOS PUNTOS ==\n');

print('Introduce x1: ');
read(x1);
print('Introduce y1: ');
read(y1);

print('Introduce x2: ');
read(x2);
print('Introduce y2: ');
read(y2);

dx := x2 - x1;
dy := y2 - y1;
d := sqrt( (dx * dx) + (dy * dy) );

print('La distancia entre (');
print(x1); print(', '); print(y1);
print(') y (');
print(x2); print(', '); print(y2);
print(') es: ');
print(d); print('\n');
