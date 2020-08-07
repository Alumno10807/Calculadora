// Calculadora.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "calculos.h"
using  namespace  std;

int main()
{ 
    double x = 0.0;
    double  y = 0.0;
    double result = 0.0;
    char  oper = '+ '; 

               

    cout << "tu primer calculadora  en C++" << endl  << endl;
    cout << " Ingresa  la operacion con el formato: a+b  | a-b |  |a *b |   |a/b| " << endl;
        
    calculos c; 

    while (true)
    {
        cin >> x >> oper >> y; 
        if (oper == '/' && y == 0) {
            cout << " Division entre  0 no es valida " << endl;
                continue;
        }
        else {
        
            result = c.Calculo(x, oper, y);
                    }

        cout << " El resultado es " << result << endl;


        return 0; 


    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
