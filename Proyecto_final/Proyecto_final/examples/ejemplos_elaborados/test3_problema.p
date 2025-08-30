print('Introduce cuántos números vas a introducir:\n');
read(n);

positivos := 0;
negativos := 0;
ceros := 0;
suma := 0;

for i from 1 to n do
	print('Número ' || i || ': \n');
	read(x);
	suma := suma + x;

	if (x > 0) then
		positivos := positivos + 1;
	else
		if (x < 0) then
			negativos := negativos + 1;
		else
			ceros := ceros + 1;
		end_if;
	end_if;
end_for;

print('Resumen:\n');
print('Positivos: ' || positivos || '\n');
print('Negativos: ' || negativos || '\n');
print('Ceros: ' || ceros || '\n');
print('Suma total: ' || suma || '\n');
