#include <stdio.h>
main ()
{float area, base, altura, perimetro;
printf ("Informe a base: ");
scanf ("%f", &base);
printf ("Informe a altura: ");
scanf ("%f", &altura);
area= base*altura;
perimetro= 2*(base+altura);
printf ("Area do retangulo e: %f\n", area);
printf ("Perimetro do retangulo e: %f", perimetro);
}
