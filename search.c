#include <stdio.h>
//Ejercicio de Arreglos y REcursividad

//Esta funciónsirve para buscar un valor en un arreglo ordenado utilizando una búsqueda lineal.
int busquedaLineal(int arreglo[], int n, int valor) {
    for (int i = 0; i < n; i++) {
        if (arreglo[i] == valor) {
            return i; // Si se encuentra el valor, devuelve la posición.
        }
    }
    return -1; // Si no encuentra el valor, devuelve -1.
}

// Esta funció sirve para buscar un valor en un arreglo ordenado utilizando una búsqueda binaria.
int busquedaBinaria(int arreglo[], int n, int valor) {
    int izquierda = 0;
    int derecha = n - 1;
    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;
        if (arreglo[medio] == valor) {
            return medio; // Si encuentra el valor, devuelve la posición.
        }
        if (arreglo[medio] < valor) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }
    return -1; // Si no encuentra el valor, devuelve -1..
}

//Esta funciónrecurviva sirve para buscar un valor en un arreglo ordenad utilizando una búsqueda binaria.
int busquedaBinariaRecursiva(int arreglo[], int izquierda, int derecha, int valor) {
    if (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;
        if (arreglo[medio] == valor) {
            return medio; //  Si encuentra el valor, devuelve la posición..
        }
        if (arreglo[medio] < valor) {
            return busquedaBinariaRecursiva(arreglo, medio + 1, derecha, valor);
        } else {
            return busquedaBinariaRecursiva(arreglo, izquierda, medio - 1, valor);
        }
    }
    return -1; // Si no encuentra el valor, devuelve -1..
}
//Aqui va el main del arreglo dado en el ejercicio
int main() {
    int arreglo[] = {2, 4, 6, 23, 56, 79};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);

//Se pide un valor al usuario
    printf("Ingrese un valor entero: ");
    int valor;
    scanf("%d", &valor);

//Se realiza la busqueda lineal y se usa la funcioon creada
    // Búsqueda lineal
    int posicionLineal = busquedaLineal(arreglo, n, valor);
    if (posicionLineal != -1) {
        printf("El valor %d se encuentra en la posición %d (búsqueda lineal).\n", valor, posicionLineal);
    } else {
        printf("El valor %d no se encontró (búsqueda lineal).\n", valor);
    }

//Se realiza la busqueda binaria y se usa la funcioon creada
    // Búsqueda binaria
    int posicionBinaria = busquedaBinaria(arreglo, n, valor);
    if (posicionBinaria != -1) {
        printf("El valor %d se encuentra en la posición %d (búsqueda binaria).\n", valor, posicionBinaria);
    } else {
        printf("El valor %d no se encontró (búsqueda binaria).\n", valor);
    }
//Se realiza la busqueda binaria recursiva y se usa la funcioon creada
    // Búsqueda binaria recursiva
    int posicionRecursiva = busquedaBinariaRecursiva(arreglo, 0, n - 1, valor);
    if (posicionRecursiva != -1) {
        printf("El valor %d se encuentra en la posición %d (búsqueda binaria recursiva).\n", valor, posicionRecursiva);
    } else {
        printf("El valor %d no se encontró (búsqueda binaria recursiva).\n", valor);
    }
//Aqui se retornan los datos
    return 0;
}
