#include <stdio.h>
int main ()
{
    //sucesión de numeros 0 1 1 2 3 5 8 13 21 etc... siempre empieza con 0 1

    int x, y, res, n, i;

    printf ("introduce un numero de termino para la sucesion de Fibonacci: ");

    scanf ("%i", &n);

    i = 3;
    x = 0;
    y = 1;

    if (n == 1){
        printf ("0");

    }

    else {
        printf ("o, 1, ");

    }

    //se necesita un bucle para que se repita tantas veces como queramos.

    while (i <= n){ // 0 1 1 2
            res = x + y;
            printf ("%i, ", res);
            x = y;
            y = res;
            i++;


    }

    printf ("\n");



    return 0;




}
