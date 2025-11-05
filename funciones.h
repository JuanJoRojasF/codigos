#ifndef FUNCIONES_H
#define FUNCIONES_H

void ingresarDatos(char nombres[][30], float precios[], int n);
float calcularTotal(float precios[], int n);
float calcularPromedio(float precios[], int n);
int buscarProducto(char nombres[][30], int n, char buscado[]);
int productoMasCaro(float precios[], int n);
int productoMasBarato(float precios[], int n);

#endif