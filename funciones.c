#include <stdio.h>
#include <string.h>
#include "funciones.h"

void ingresarDatos(char nombres[][30], float precios[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Ingrese el nombre del producto %d: ", i + 1);
        scanf("%s", nombres[i]);
        printf("Ingrese el precio: ");
        scanf("%f", &precios[i]);
    }
}

float calcularTotal(float precios[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++)
        total += precios[i];
    return total;
}

float calcularPromedio(float precios[], int n) {
    return calcularTotal(precios, n) / n;
}

int productoMasCaro(float precios[], int n) {
    int pos = 0;
    for (int i = 1; i < n; i++)
        if (precios[i] > precios[pos])
            pos = i;
    return pos;
}

int productoMasBarato(float precios[], int n) {
    int pos = 0;
    for (int i = 1; i < n; i++)
        if (precios[i] < precios[pos])
            pos = i;
    return pos;
}

int buscarProducto(char nombres[][30], int n, char buscado[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(nombres[i], buscado) == 0)
            return i;
    }
    return -1;
}