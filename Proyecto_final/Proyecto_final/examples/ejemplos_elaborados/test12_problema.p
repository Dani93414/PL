# ----------------------------------------------------
# ÁREA DE UN TRIÁNGULO (Fórmula de Herón)
# ----------------------------------------------------

print('== ÁREA DE UN TRIÁNGULO ==\n');

print('Introduce el lado a: ');
read(a);
print('Introduce el lado b: ');
read(b);
print('Introduce el lado c: ');
read(c);

# Validación: que los lados formen un triángulo
if ( (a + b > c) and (a + c > b) and (b + c > a) ) then
  s := (a + b + c) / 2;
  area := sqrt( s * (s - a) * (s - b) * (s - c) );

  print('El área del triángulo es: ');
  print(area); print('\n');
else
  print('Los lados no forman un triángulo válido.\n');
end_if
