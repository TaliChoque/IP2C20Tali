#include <stdio.h>



void potencia(int n1) {
    int resultado;
    resultado = n1 * n1;
    printf("El cuadrado del n�mero es: %i", resultado); // 100
}

int sumar(int num1, int num2) {
    int resultado = 0;
    resultado = num1+ num2;
    return resultado; // resultado int
}


int multiplicar(int num1, int num2) {
    int resultado;
    resultado = num1 * num2;
    //printf("Resultado de la multiplicaci�n: %i", resultado);
    return resultado;
}


int main() {
    int num1, num2, num3 = 0;
    int resultadoSuma,resultadoMultiplicacion = 0 ;
    printf("Ingres� el primer n�mero: ");
    scanf("%i",&num1); // -1
    printf("Ingres� el segundo n�mero");
    scanf("%i",&num2); // 3
    printf("Ingres� el tercer n�mero");
    scanf("%i",&num3); // 2
    resultadoSuma = sumar(num1,num2); // 5
    resultadoMultiplicacion = multiplicar(resultadoSuma,num3); // 5 * 2 // 10
    potencia(resultadoMultiplicacion); // 10
    return 0;

}
