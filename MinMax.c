#include <stdio.h>
//Ejercicio de arreglos y punteros.

//Esta funciónsirve  para encontrar el valor mínimo en un arreglo.
int encontrarMinimo(int arreglo[], int longitud) {
    int minimo = arreglo[0]; // Esta parte se encarga de inicializar el mínimo con el primer valor del arreglo.

    for (int i = 1; i < longitud; i++) {//Aqui se utiliza un cioclo for
        if (arreglo[i] < minimo) {
            minimo = arreglo[i];
        }
    }

    return minimo;//Se retorna un valor minimo
}

// Esta funciónsirve para encontrar el valor máximo en un arreglo.
int encontrarMaximo(int arreglo[], int longitud) {
    int maximo = arreglo[0]; // Esta parte se encarga de inicializar el máximo con el primer valor del arreglo.

    for (int i = 1; i < longitud; i++) {//cicl;o for 
        if (arreglo[i] > maximo) {
            maximo = arreglo[i];
        }
    }

    return maximo;//retorna un valor maximo
}

//Aqui se asigna la funciónque sirve para encontrar el valor mínimo y máximo utilizando punteros.
//Guia brindada en las instrucciones del lab 3.
void encontrarMinMax(int *arreglo, int longitud, int *minimo, int *maximo) {
    *minimo = *maximo = arreglo[0]; // Esta parte se encarga de inicializar el  minimo y maximo con el primer valor del arreglo.

    for (int i = 1; i < longitud; i++) {//ciclo for
        if (arreglo[i] < *minimo) {
            *minimo = arreglo[i];
        }
        if (arreglo[i] > *maximo) {
            *maximo = arreglo[i];
        }
    }
}

//Creacion del main y el arreglo desordenado que se brinda en las instrucciones
int main() {
    int arreglo[] = {21, 24, 65, 3, 56, 12, 35, 15};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    int minimo, maximo;

//Aqui se realiza el llamado de las funciones para que todo corra correctamente.
    // Se llama a la función para encontrar el mínimo.
    minimo = encontrarMinimo(arreglo, longitud);
    printf("El valor mínimo en el arreglo es: %d\n", minimo);

    // Se llama a la función para encontrar el máximo.
    maximo = encontrarMaximo(arreglo, longitud);
    printf("El valor máximo en el arreglo es: %d\n", maximo);

    // Se llama a la función para encontrar el mínimo y máximo utilizando punteros.
    encontrarMinMax(arreglo, longitud, &minimo, &maximo);
    printf("Usando punteros: El valor mínimo es %d y el valor máximo es %d\n", minimo, maximo);

    return 0;//aqui se guardan y retornan los valores.
}
