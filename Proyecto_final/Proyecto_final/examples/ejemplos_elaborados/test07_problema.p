print('Generador de tabla de multiplicar personalizada\n');

print('Introduce el número base: ');
read(base);

print('Introduce el multiplicando máximo: ');
read(limite);

print('Introduce el formato (1=normal, 2=solo pares, 3=solo impares): ');
read(opcion);

i := 1;

while (i <= limite) do
    caso_valido := false;

    switch(opcion)
        case 1:
            caso_valido := true;
        case 2:
            if ((i mod 2) = 0) then
                caso_valido := true;
            end_if
        case 3:
            if ((i mod 2) <> 0) then
                caso_valido := true;
            end_if
        default:
            print('Opción no válida\n');
    end_switch

    if (caso_valido = true) then
        resultado := base * i;
        print(base || ' x ' || i || ' = ' || resultado || '\n');
    end_if

    i := i + 1;
end_while
