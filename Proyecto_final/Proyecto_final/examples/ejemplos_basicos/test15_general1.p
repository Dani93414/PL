print 'Operadores matemáticos:\n';

a := +2;
print '+2= ' || a || '\n';

b := 2 + 3;
print '2+3= '|| b || '\n';

c := -2;
print '-2= ' || c || '\n';

d := 5 - 3;
print '5-3= ' || d || '\n';

qw := 4 * 3;
print '4*3= ' || qw || '\n';

f := 10 / 4;
print 'División común de 10/4= ' || f || '\n';

g := 10 // 4;
print 'División entera de 10/4= ' || g || '\n';

h := 10 mod 3;
print 'Resto de 10/3= ' || h || '\n';

i := 2 ^ 3;
print '2³= ' || i || '\n';



print '\nOperadores lógicos:\n';

j := 5 < 10;
print '(5<10)= ' || j || '\n';

k := 5 <= 5;
print '(5<=5)= ' || k || '\n';

l := 7 > 3;
print '(7>3)= ' || l || '\n';

m := 7 >= 7;
print '(7>=10)= ' || m || '\n';

n := 10 = 10;
print '(10=10)= ' || n || '\n';

o := 10 <> 5;
print '(10<>10)= ' || o || '\n';

A := 5;
control := 'go';

p := A >= 0;
print '(Variable que es igual a 5>=0)= ' || p || '\n';

valor := A > b;
print '(5 > (2+3))= ' || valor || '\n';


print '\nComprobación de la variable valor:\n';
if (valor = false) then
    print('Valor es verdadero\n');
end_if;

if (valor <> true) then
    print('Valor no es falso\n');
end_if;


print('\nComprobaciones lógicas más complejas:\n');
r := (A >= 0) and not (control <> 'stop');
print('Si (A=5)>=0 y (control=go <> stop)= ' || r || '\n') ;

s := (A >= 0) or (control = 'stop');
print('Si (A=5)>=0 y (control=go = stop)= ' || s || '\n');

t := not (A < 0);
print('NO (A=5)<0= ' || t || '\n');
