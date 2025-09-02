print('Programa que busca el primer número especial\n');

print('Introduce el valor inicial: ');
read(inicio);

encontrado := false;

i := inicio;

repeat
    raiz := sqrt(i);
    if (raiz = integer(raiz)) then
        if (sin(i) > 0.5) then
            encontrado := true;
            print('Número especial encontrado: ' || i || '\n');
            print('Raíz cuadrada: ' || raiz || '\n');
            print('Seno: ' || sin(i) || '\n');
        end_if
    end_if

    i := i + 1;
until (encontrado = true);

print('Fin del programa\n');
