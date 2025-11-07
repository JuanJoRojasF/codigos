#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char nombres[10][30];
    float precios[10];
    char buscado[30];
    float total = 0, promedio = 0;
    int posCaro = 0, posBarato = 0;
    int posBuscado = -1;

    printf("Ingrese el número de productos (máximo 10): ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Número inválido. Debe ser entre 1 y 10.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Ingrese el nombre del producto %d: ", i + 1);
        scanf(" %d[^\n]", nombres[i]);
        printf("Ingrese el precio: ");
        scanf("%f", &precios[i]);
    }

    for (int i = 0; i < n; i++) {
        total = total + precios[i];
    }
    promedio = total / n;
    
    for (int i = 1; i < n; i++) {
        if (precios[i] > precios[posCaro]) posCaro = i;
        if (precios[i] < precios[posBarato]) posBarato = i;
    }

    printf("\n=== Resumen del Inventario ===\n");
    printf("Precio total del inventario: %.2f\n", total);
    printf("Precio promedio: %.2f\n", promedio);
    printf("Producto más caro: %s (%.2f)\n", nombres[posCaro], precios[posCaro]);
    printf("Producto más barato: %s (%.2f)\n", nombres[posBarato], precios[posBarato]);

    printf("\nIngrese el nombre del producto a buscar: ");
    scanf(" %d[^\n]", buscado);

    for (int i = 0; i < n; i++) {
        if (strcmp(nombres[i], buscado) == 0) {
            posBuscado = i;
            break;
        }
    }

    if (posBuscado != -1)
        printf("El precio de '%s' es %.2f\n", nombres[posBuscado], precios[posBuscado]);
    else
        printf("Producto no encontrado.\n");

    return 0;
}
