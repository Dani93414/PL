print('Introduce el límite para la serie de Fibonacci: ');
read(limite);

a := 0;
b := 1;

print('\nSerie de Fibonacci:\n');

while (a <= limite) do
	print(a || ' ');
	temp := a + b;
	a := b;
	b := temp;
end_while;

print('\nFin de la serie.\n');