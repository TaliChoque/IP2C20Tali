#include <stdio.h> //standard imput output

//crear un programa que dados 3 numeros determine el mayor
//CI --> crear una funcipon mayor que recibe 3 numeros
// OUTPUT --> el mayor de los ingresados
  //patron --> forma probada de resolver un problema
  //IFE intant function execution

  int mayor (int a, int b, int c){

      //SIEMPRE LA FUNCI�N TIENE UN �NICO RETURN (bloques son excluyentes)

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
    printf("Ingres� el primer n�mero: ");
    scanf("%i",&num1); // -1
    printf("Ingres� el segundo n�mero");
    scanf("%i",&num2); // 3
    printf("Ingres� el tercer n�mero");
    scanf("%i",&num3); // 2
    m = mayor(num1, num2, num3); //a la funci�n mayor se pasan datos por VALORES.
    printf("el mayor es: %i", m)
    return 0;

}
