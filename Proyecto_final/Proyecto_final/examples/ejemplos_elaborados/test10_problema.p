# ----------------------------------------------------
# CONVERSIÓN DE TEMPERATURAS (Celsius <-> Fahrenheit)
# ----------------------------------------------------

print('== CONVERSIÓN DE TEMPERATURAS ==\n');
print('Escribe "C2F" para Celsius->Fahrenheit o "F2C" para Fahrenheit->Celsius: ');
read_string(modo);

if ( (modo = 'C2F') or (modo = 'c2f') ) then
  print('Introduce temperatura en °C: ');
  read(tc);
  tf := (tc * 9 // 5) + 32 + ( (tc * 9) mod 5 )/5;
  print('Resultado en °F: '); print(tf); print('\n');

else
  if ( (modo = 'F2C') or (modo = 'f2c') ) then
    print('Introduce temperatura en °F: ');
    read(tf2);
    tc2 := ( (tf2 - 32) * 5 ) // 9 + ( ((tf2 - 32) * 5) mod 9 )/9;
    print('Resultado en °C: '); print(tc2); print('\n');
  else
    print('Modo no reconocido. Usa "C2F" o "F2C".\n');
  end_if
end_if
