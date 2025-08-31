# ---------------------------------------------
# PRUEBA FINAL DE CARACTERÍSTICAS DEL INTÉRPRETE
# ---------------------------------------------

clear_screen;

print('*** PRUEBA FINAL DEL INTÉRPRETE ***\n');
print('Demostración de estructuras de control, operadores y '
      || 'funciones soportadas.\n');

opcion := -1;   # variable numérica

repeat
	# ---------- MENÚ PRINCIPAL ----------
	print('\nMenú principal:\n');
	print('1: Estadísticas de una serie de números\n');
	print('2: Juego – Adivina el número secreto\n');
	print('3: Conversor decimal → base 2‑16\n');
	print('0: Salir\n');
	print('Seleccione una opción: ');
	read(opcion);

	switch(opcion)         
		case 1:
			# ----- Estadísticas -----
			print('\n¿Cuántos números va a introducir?: ');
			read(cantidad);

			if (cantidad <= 0) then
				print('El número debe ser positivo\n');
			else
				suma := 0;                     # acumuladores
				min  :=  999999;
				max  := -999999;

				# Lectura y acumulado
				for i from 1 to cantidad do      
					print('Número ' || i || ': ');
					read(valor);

					suma := suma + valor;
					if (valor < min) then min := valor; end_if;
					if (valor > max) then max := valor; end_if;
				end_for;

				media := suma / cantidad;

				# Segundo recorrido para varianza
				varianza := 0;
				for i from 1 to cantidad do
					print('Reintroduzca el número ' || i || ' (para varianza): ');
					read(valor);
					varianza := varianza + (valor - media)^2;   # potencia ^
				end_for;

				desv := sqrt(varianza / cantidad);             

				print('\n*** Resultados ***\n');
				print('Mínimo: '   || min   || '\n');
				print('Máximo: '   || max   || '\n');
				print('Suma: '     || suma  || '\n');
				print('Media: '    || media || '\n');
				print('Desviación: ' || desv || '\n');
			end_if;

		case 2:
			# ----- Juego de adivinar -----
			print('\nDefina un número secreto (otro jugador intentará adivinarlo): ');
			read(secreto);

			intentos := 0;
			adivino  := false;     # variable booleana

			clear_screen;          
			print('*** Juego: Adivina el número ***\n');

			while (not adivino) do        
				print('Escriba su suposición: ');
				read(guess);
				intentos := intentos + 1;

				if (guess = secreto) then
					adivino := true;
					print('¡Correcto! En ' || intentos || ' intentos.\n');
				else
					if (guess > secreto) then
						print('Demasiado alto\n');
					else
						print('Demasiado bajo\n');
					end_if;
				end_if;
			end_while;

		case 3:
			# ----- Conversor decimal → base 2‑16 -----
			print('\nIntroduce un número entero positivo: ');
			read(numero);
			print('Introduce la base destino (2–16): ');
			read(base);

			if (base < 2 or base > 16) then      
				print('Base no soportada\n');
			else
				resultado := ' ';                 # cadena vacía

				while (numero <> 0) do
					resto := numero mod base;     # operador mod
					indice := resto + 1;          # para el switch siguiente

					# Resto → carácter (0‑F)
					switch(indice)
						case 1:  caracter := '0';
						case 2:  caracter := '1';
						case 3:  caracter := '2';
						case 4:  caracter := '3';
						case 5:  caracter := '4';
						case 6:  caracter := '5';
						case 7:  caracter := '6';
						case 8:  caracter := '7';
						case 9:  caracter := '8';
						case 10: caracter := '9';
						case 11: caracter := 'A';
						case 12: caracter := 'B';
						case 13: caracter := 'C';
						case 14: caracter := 'D';
						case 15: caracter := 'E';
						case 16: caracter := 'F';
					end_switch;

					resultado := caracter || resultado;   # concatenación ||
					numero    := numero // base;          # división entera //
				end_while;

				print('Resultado: ' || resultado || '\n');

			end_if;

		case 0:
			print('\nFin del programa\n');

		default:
			print('\nOpción no válida\n');
	end_switch;
until (opcion = 0);      
