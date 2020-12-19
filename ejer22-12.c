#include <stdio.h> //standard imput output

//crear un programa que dados 3 numeros determine el mayor
//CI --> crear una funcipon mayor que recibe 3 numeros
// OUTPUT --> el mayor de los ingresados
  //patron --> forma probada de resolver un problema
  //IFE intant function execution

  int mayor (int a, int b, int c){

      //SIEMPRE LA FUNCIÓN TIENE UN ÚNICO RETURN (bloques son excluyentes)

      //10, 2, 3

      if(a > b && a > c) {

        return a; //10
      }else {

          if(b > c) {
                return b;

          }
      }

  }


  int main() {
    int num1, num2, num3 = 0;
    printf("Ingresá el primer número: ");
    scanf("%i",&num1); // -1
    printf("Ingresá el segundo número");
    scanf("%i",&num2); // 3
    printf("Ingresá el tercer número");
    scanf("%i",&num3); // 2
    m = mayor(num1, num2, num3); //a la función mayor se pasan datos por VALORES.
    printf("el mayor es: %i", m)
    return 0;

}
