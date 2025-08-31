# Programa que invierte los dígitos de un número entero

print('Programa que invierte los dígitos de un número entero \n');
print('Introduce un número entero: ');
read(n);

r := ' ';

if (n = 0) then
	r := '0';
end_if

while (n <> 0) do
	digito := n mod 10;

	# Convertimos el dígito a carácter concatenándolo
	r := r || digito;

	n := n // 10;
end_while

print('Número invertido: ' || r || '\n');