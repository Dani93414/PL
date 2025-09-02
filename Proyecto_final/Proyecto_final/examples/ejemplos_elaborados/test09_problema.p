# ----------------------------------------
# PRIMALIDAD Y FACTORIZACIÓN
# ----------------------------------------

print('== PRIMALIDAD Y FACTORIZACIÓN ==\n');
print('Introduce un número entero >= 2: ');
read(n);

if (n < 2) then
  print('El número debe ser >= 2\n');
else
  esPrimo := true;

  if (n = 2) then
    esPrimo := true;
  else
    if ( (n mod 2) = 0 ) then
      esPrimo := false;
    else
      d := 3;
      while ( (d*d) <= n and esPrimo = true ) do
        if ( (n mod d) = 0 ) then
          esPrimo := false;
        else
          d := d + 2;
        end_if
      end_while
    end_if
  end_if

  if (esPrimo = true) then
    print('El número es primo.\n');
  else
    print('El número NO es primo.\n');
    print('Factorización en primos:\n');

    m := n;
    d := 2;
    while ( (d*d) <= m ) do
      while ( (m mod d) = 0 ) do
        print('  factor: '); print(d); print('\n');
        m := m // d;
      end_while
      if (d = 2) then
        d := 3;
      else
        d := d + 2;
      end_if
    end_while
    if (m > 1) then
      print('  factor: '); print(m); print('\n');
    end_if
  end_if
end_if
