#include<stdio.h>


/*

void saludaUsuario (){
    printf ("Hola Usuario un gusto tenerte por aquí");

} */

//tipo de dato [nombreDelaFuncion(parámetrso){
//intruscciones
//función -> bloque de código que se ejecuta cuando se llama
//main es la función principal y es llamada automáticamente.


int sumar (int num1, int num2){
    int resultado = 0;
    resultado = num1+ num2;
    return resultado; // resultado int

    //printf ("Resultado: %i", resultado);
}

//num1, num2, num3
//sumar (num1, num2) // 30
//multiplicar(30, num3) //60

void multiplicar (int num1, int num2){
    int resultado;
    resultado = num1 * num2;
    //printf ("resultado de la multiplicación: %i", resultado);
    return resultado;



}

void potencial (int n1){

    int resultado;
    resultado = n1*n1;
    printf("El cuadrado del número es: %i", resultado);
}

int main(){
    //scope de una variable
    int num1, num2 = 0;
    //saludaUsuario(); //una función se ejecuta cuando la llamamos.

    printf("ingresá el primer número");
    scanf("%i", &num1); //puntero
    printf("ingreá el segundo numero");
    scanf("%i",&num2); //puntero
    //sumar(num1, num2); si lo saco no suma nada.
    printf ("ingrsá el tercer número");
    scanf("%i",&num3); //2
    resultadoSuma = sumar(num1, num2); // 5
    resultadoMultiplicacion = multiplicar(resultadoSuma, num3); //5 * 2 // 10
    potencia(resultadoMultiplicacion); //10

    return 0; //porque esta función retorna ENTERO

}
