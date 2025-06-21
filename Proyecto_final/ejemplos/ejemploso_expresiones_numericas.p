# Operaciones aritméticas básicas
a := 5 + 3;            print(a);    # 8
b := 10 - 2;           print(b);    # 8
c := 4 * 2;            print(c);    # 8
d := 8 / 2;            print(d);    # 4
j := 7 // 3;           print(j);    # 2
f := 10 ^ 2;           print(f);    # 100
g := 10 mod 3;         print(g);    # 1

# Comparaciones relacionales
r1 := a < b;           print(r1);   # false (8 < 8) → 0
r2 := c <= d;          print(r2);   # false (8 <= 4) → 0
t := 2;                # necesario para r3
r3 := t > f;           print(r3);   # false (2 > 100) → 0
r4 := g >= 2;          print(r4);   # false (1 >= 2) → 0
r5 := a = 8;           print(r5);   # true → 1
r6 := b <> 8;          print(r6);   # false → 0

# Lógicos
l1 := (a < b) and (c > d);   print(l1);   # false and true → false → 0
l2 := true or false;         print(l2);   # true → 1
l3 := not false;             print(l3);   # true → 1

# Operadores ++, --, !
x := 4;
x1 := x++;            print(x1);   # 5 (4 + 1)
x2 := x--;            print(x2);   # 3 (4 - 1)
f1 := 5!;             print(f1);   # 120 (factorial de 5)

# Constantes matemáticas
pi_val := pi;         print(pi_val);     # ≈ 3.141592...
e_val := e;           print(e_val);      # ≈ 2.718281...
gamma_val := gamma;   print(gamma_val);  # 0.5772
phi_val := phi;       print(phi_val);    # 1.6180
deg_val := deg;       print(deg_val);    # 57.2958

# Funciones matemáticas
s1 := sin(pi / 2);       print(s1);   # ≈ 1
s2 := cos(0);            print(s2);   # 1
s3 := log(e);            print(s3);   # 1
s4 := log10(100);        print(s4);   # 2
s5 := exp(1);            print(s5);   # ≈ 2.71828
s6 := abs(-10);          print(s6);   # 10
s7 := integer(4.9);      print(s7);   # 4
s8 := sqrt(16);          print(s8);   # 4

# Unarios y paréntesis
neg := -5;               print(neg);  # -5
pos := +6;               print(pos);  # 6
p1 := (2 + 3) * 4;       print(p1);   # 20

#NO USAR e PORQUE SE CONFUNDE con el numero e