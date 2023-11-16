#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
     int filas = 5;
     int columnas = 7;
    int matriz[filas][columnas];

    srand(time(NULL));

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = rand() % 10; 
        }
    }

    printf("Matriz generada:\n");
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int sumaDiagonalPrincipal = 0;
    for (int i = 0; i < filas && i < columnas; ++i) {
        sumaDiagonalPrincipal += matriz[i][i];
    }

    int sumaPrimeraFila = 0;
    for (int j = 0; j < columnas; ++j) {
        sumaPrimeraFila += matriz[0][j];
    }

    int sumaUltimaColumna = 0;
    for (int i = 0; i < filas; ++i) {
        sumaUltimaColumna += matriz[i][columnas - 1];
    }

    int sumaFilasPares = 0;
    for (int i = 1; i < filas; i += 2) {
        for (int j = 0; j < columnas; ++j) {
            sumaFilasPares += matriz[i][j];
        }
    }

    int sumaColumnasImpares = 0;
    for (int j = 0; j < columnas; j += 2) {
        for (int i = 0; i < filas; ++i) {
            sumaColumnasImpares += matriz[i][j];
        }
    }

    int sumaTrianguloSuperior = 0;
    for (int i = 0; i < filas; ++i) {
        for (int j = i; j < columnas; ++j) {
            sumaTrianguloSuperior += matriz[i][j];
        }
    }

    int sumaTrianguloInferior = 0;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j <= i; ++j) {
            sumaTrianguloInferior += matriz[i][j];
        }
    }
    
    int sumaSegundaFila = 0;
    for (int j = 0; j < columnas; ++j) {
        sumaSegundaFila += matriz[1][j];
    }
    
    int sumaCuartaFila = 0;
    for (int j = 0; j < columnas; ++j) {
        sumaCuartaFila += matriz[3][j];
    }
    
    int sumaColumna1 = 0;
    int sumaColumna3 = 0;
    int sumaColumna5 = 0;

    for (int i = 0; i < filas; ++i)
	 {
        sumaColumna1 += matriz[i][0];
        sumaColumna3 += matriz[i][2];
        sumaColumna5 += matriz[i][4];
     }
    
    printf("Suma de la diagonal: %d\n", sumaDiagonalPrincipal);
    printf("Suma de la fila 1: %d\n", sumaPrimeraFila);
    printf("Suma de la columna 7: %d\n", sumaUltimaColumna);
    printf("--------------------\n");
    printf("Suma de la fila 2: %d\n",sumaSegundaFila);
    printf("Suma de la fila 4: %d\n",sumaCuartaFila);
    printf("Suma de las filas pares: %d\n", sumaFilasPares);
    printf("--------------------\n");
    printf("Suma de la columna 1: %d\n", sumaColumna1);
    printf("Suma de la columna 3: %d\n", sumaColumna3);
    printf("Suma de la columna 5: %d\n", sumaColumna5);
    printf("Suma de la columna 7: %d\n", sumaUltimaColumna);
    printf("Suma de las columnas impares: %d\n", sumaColumnasImpares);
    printf("--------------------\n");
    printf("Suma de la diagonal: %d\n", sumaDiagonalPrincipal);
    printf("Suma de la triangular superior: %d\n", sumaTrianguloSuperior);
    printf("--------------------\n");
    printf("Suma de la diagonal: %d\n", sumaDiagonalPrincipal);
    printf("Suma de la triangular inferior: %d\n", sumaTrianguloInferior);

    return 0;
}

