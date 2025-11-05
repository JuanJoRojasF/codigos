#include <stdio.h>
#include <string.h>
#include "funciones.h"

int main() {
    int n;
    char nombres[10][30];
    float precios[10];
    char buscado[30];

    printf("Ingrese el número de productos (máximo 10): ");
    scanf("%d", &n);

    ingresarDatos(nombres, precios, n);

    printf("\nPrecio total del inventario: %.2f\n", calcularTotal(precios, n));
    printf("Precio promedio: %.2f\n", calcularPromedio(precios, n));

    int caro = productoMasCaro(precios, n);
    int barato = productoMasBarato(precios, n);
    printf("Producto más caro: %s (%.2f)\n", nombres[caro], precios[caro]);
    printf("Producto más barato: %s (%.2f)\n", nombres[barato], precios[barato]);

    printf("\nIngrese el nombre del producto a buscar: ");
    scanf("%s", buscado);
    int pos = buscarProducto(nombres, n, buscado);

    if (pos != -1)
        printf("El precio de %s es %.2f\n", nombres[pos], precios[pos]);
    else
        printf("Producto no encontrado.\n");

    return 0;
}