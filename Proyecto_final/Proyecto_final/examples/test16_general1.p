a := +2;
print(a);

b := 2 + 3;
print(b);

c := -2;
print(c);

d := 5 - 3;
print(d);

qw := 4 * 3;
print(qw);

f := 10 / 4;
print(f);

g := 10 // 4;
print(g);

h := 10 mod 3;
print(h);

i := 2 ^ 3;
print(i);

j := 5 < 10;
print(j);

k := 5 <= 5;
print(k);

l := 7 > 3;
print(l);

m := 7 >= 7;
print(m);

n := 10 = 10;
print(n);

o := 10 <> 5;
print(o);

A := 5;
control := 'go';

p := A >= 0;
print(p);



valor := A > b;
print(valor);

if (valor = false) then
    print('Valor es verdadero');
end_if;

if (valor <> true) then
    print('Valor no es falso');
end_if;

r := (A >= 0) and not (control <> 'stop');
print(r);

s := (A >= 0) or (control = 'stop');
print(s);

t := not (A < 0);
print(t);
