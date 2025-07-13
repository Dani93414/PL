# Programa que suma los dígitos pares de un número entero

print('Programa que suma los dígitos pares de un número entero \n');
print('Introduce un número entero: \n');
read(n);

suma := 0;

while (n <> 0) do
	d := n mod 10;

	if ((d mod 2) = 0) then
		suma := suma + d;
	end_if

	n := n // 10;
end_while

print('Suma de los dígitos pares: ' || suma || '\n');