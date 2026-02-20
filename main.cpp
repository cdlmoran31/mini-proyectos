#include <iostream>
using namespace std;

void Numero_Mayor();
void Numero_Par_impar();
void Menu_Opciones();
void Contador_1_Al_7();
void Tabla_De_Multiplicar();
void Validacion_De_Nota_Y_Repeticion();
void Sistema_De_Numeros_pares();
void Menu_repetitivo();

int main() {
int Menu_Opcion;
  do {
    cout << "/******************************************************************************\n";
    cout << "1. Programa - Numero_Mayor\n";
    cout << "2. Programa - Numero_Par_impar\n";
    cout << "3. Programa - Menu Opciones\n";
    cout << "4. Programa - Contador_1_Al_7\n";
    cout << "5. Programa - Tabla_De_Multiplicar\n";
    cout << "6. Programa - Validacion_De_Nota_Y_Repeticion\n";
    cout << "7. Sistema_De_Numeros_pares\n";
    cout << "8. Menu repetitivo\n";
    cout << "9. Salir\n";
    cout << "/******************************************************************************\n";
    cout << "Ingrese una opcion: ";
    cin >> Menu_Opcion;
    switch (Menu_Opcion) {
      case 1: Numero_Mayor(); break;
        case 2: Numero_Par_impar(); break;
        case 3: Menu_Opciones(); break;
        case 4: Contador_1_Al_7(); break;
        case 5: Tabla_De_Multiplicar(); break;
        case 6: Validacion_De_Nota_Y_Repeticion(); break;
        case 7: Sistema_De_Numeros_pares(); break;
        case 8: Menu_repetitivo(); break;
        default: break;
    }
  }while (Menu_Opcion != 9);

}
/******************************************************************************
* Nombre del archivo: Numero_Mayor
 * Autor: Cristian Alejandro de Leon Moran
 * Fecha de creación: 20/02/2026
 * Descripción:
 *      Programa que solicita 2 numeros al usuario el cual indica cual es el mayor o si son
 *      iguales
 *
 * Notas adicionales:
 *      - Solicita al usuario dos números y la operación a realizar.
 *      - Maneja errores como división entre cero.
 ******************************************************************************/
void Numero_Mayor() {

  // Solicitar primer número al usuario
  cout << "Ingresar - Primer Numero\n";
  float Num1;
  cin >> Num1;

  // Solicitar segundo número al usuario
  cout << "Ingresar - Segundo Numero\n";
  float Num2;
  cin >> Num2;

  // Comparar los números y mostrar el mayor o si son iguales
  if (Num1>Num2) {
    cout << "El primer numero es el mayor\n";
  }else if (Num2>Num1) {
    cout << "El segundo numero es el mayor\n";
  }else if (Num1==Num2) {
    cout << "Los numeros son iguales\n";
  }else {
    cout << "No fue posible validar el requerimiento";
  }


}
/******************************************************************************
* Nombre del archivo: Numero_Par_impar
 * Autor: Cristian Alejandro de Leon Moran
 * Fecha de creación: 20/02/2026
 * Descripción:
 *      Programa que solicita 1 numero al usuario en el cual indique si es par o
 *      impar
 ******************************************************************************/
void Numero_Par_impar() {
  cout << "Ingrese un numero\n";
  int Numero;
  cin >> Numero;

  if (Numero % 2 == 0) {
    cout << "El numero es par\n";
  }else if (Numero % 2 == 1) {
    cout << "El numero es impar\n";
  }


}

void Menu_Opciones() {
  /******************************************************************************
* Nombre del archivo: Menu_Opciones
 * Autor: Cristian Alejandro de Leon Moran
 * Fecha de creación: 20/02/2026
 * Descripción:
 *      Programa que solicita seleccione las opciones en el menu
 ******************************************************************************/
  cout << "Menu";
  cout << "1.Saludar";
  cout << "2.Mostrar numero favorito";
  cout << "3.Salir";
  int Menu;
  cin >> Menu;

  switch(Menu) {
    case 1:
      cout << "Hola Amigo, como estas?";
      break;
    case 2:
      cout << "Tu numero favorito es el 2?";
      break;
    case 3:
      cout << "Saliendo del programa...";

    default:
      cout << "Opcion invalida\n";
      break;
  }


}
void Contador_1_Al_7() {
  /******************************************************************************
* Nombre del archivo: Contador_1_Al_7
* Autor: Cristian Alejandro de Leon Moran
* Fecha de creación: 20/02/2026
* Descripción:
*      Programa que Muestra el contador de  1 al 7
******************************************************************************/
  cout << "Inicio contador del 1 al 7\n";
  int i = 1;
  while ( i <= 7) {
    cout << i << endl;
    i++;
  }

}
void Tabla_De_Multiplicar() {
  /******************************************************************************
* Nombre del archivo: Tabla_De_Multiplicar
* Autor: Cristian Alejandro de Leon Moran
* Fecha de creación: 20/02/2026
* Descripción:
*      Programa que solicita seleccione las opciones en el menu
******************************************************************************/
  cout << "Ingrese un Numero: ";
  int Numero = 0 ;
  cin >> Numero;
  int i;
  int Multi = 0;
  for ( i = 1;i<=10;i++) {
    Multi = i * Numero;
    cout << Multi << endl;
  }


}
/******************************************************************************
* Nombre del archivo: Validacion_De_Nota_Y_Repeticion
* Autor: Cristian Alejandro de Leon Moran
* Fecha de creación: 20/02/2026
* Descripción:
*      Programa que solicita al usuario ingresar una nota en la cual Define si
*      es aprobado o reprobado
******************************************************************************/
void Validacion_De_Nota_Y_Repeticion() {
  int nota;
  cout<<"ingrese nota";
  cin>>nota;
  while (nota < 0 || nota > 100) {
    cout<<"la Nota no es valida Vuelva a ingresar";
    cin>>nota;
  }
  if (nota >=61 ) {
    cout<<"Aprobado";
  }else if (nota<61) {
    cout<<"Reprobado";

  }
}
/******************************************************************************
* Nombre del archivo: Sistema_De_Numeros_pares
* Autor: Cristian Alejandro de Leon Moran
* Fecha de creación: 20/02/2026
* Descripción:
*      Programa que solicita al usuario ingresar una cantidad de Numeros en el
*      cual define cuantos son numeros pares y cuantos son numeros pares
******************************************************************************/
void Sistema_De_Numeros_pares() {
  cout << "Ingrese Cantidad de Numeros: \n";
  int cantidad;
  int par = 0;
  int impar = 0;
  cin >> cantidad;
  cout << "Ingrese Los numeros\n";
  for (int i = 1;i <= cantidad;i++) {
    int numero;
    cin >> numero;
    if (numero % 2  == 0) {
      par++;
    }else{
      if (numero % 2 == 1) {
        impar++;
      }
    }

  }
  cout << "la cantidad de Numeros pares son : "; cout << par ; cout << endl;
  cout << "la cantidad de Numeros impares son : "; cout << impar;cout << endl;


}
/******************************************************************************
* Nombre del archivo: Menu_repetitivo
* Autor: Cristian Alejandro de Leon Moran
* Fecha de creación: 20/02/2026
* Descripción:
*      Programa que solicita al usuario seleccionar una opcion del menu
******************************************************************************/
void Menu_repetitivo() {
  int menu;
  do {
    cout << "1. Mostrar mensaje motivacional\n";
    cout << "2. Mostrar Numeros del 1 al 5\n";
    cout << "3. Salir\n";
    cin >> menu;
    switch (menu) {
      case 1 :
        cout << "Ya estas aprendiendo a programar!!! Sigue asi.\n";
        break;
      case 2 :
        for (int i = 1; i <=5; i++) {
          cout << i << endl;

        }
      case 3:
        cout << "Adios\n";
        break;
      default:
        cout << "Opcion no Valida.\n";
    }
  }while (menu != 3);
}