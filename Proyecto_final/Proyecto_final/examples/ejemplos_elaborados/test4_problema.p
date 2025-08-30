clave := 'segura';
entrada := ' ';

repeat
	print('Introduce la clave secreta:\n');
	read_string(entrada);

	if (entrada <> clave) then
		print('Clave incorrecta. Inténtalo de nuevo.\n');
	end_if;
until (entrada = clave);

print('¡Clave aceptada!\n');