-- Concatenación de cadena y cadena
nombre := 'Dani'
apellido := 'García'
nombre_completo := nombre + ' ' + apellido
print(nombre_completo)  -- Dani García

-- Concatenación de cadena y número
edad := 30
mensaje := 'Tienes ' + edad + ' años'
print(mensaje)  -- Tienes 30 años

-- Concatenación de número y número (como texto, no suma)
a := 10
b := 5
resultado := a + b           -- Esto hace suma: 15
print(resultado)

resultado_texto := '' + a + b  -- Esto hace concatenación: '105'
print(resultado_texto)

-- También podemos forzar conversión explícita si el lenguaje lo requiere (depende del intérprete)
-- resultado_texto := to_string(a) + to_string(b)
