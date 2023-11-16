#include <stdio.h>

void imprimirMatriz(int matriz[3][3])
 {
    printf("Matriz:\n");
    for (int i = 0; i < 3; ++i)
	 {
        for (int j = 0; j < 3; ++j) 
		{
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int esMatrizMagica(int matriz[3][3])
 {
    int sumaFila = 0;
    for (int j = 0; j < 3; ++j)
	 {
        sumaFila += matriz[0][j];
     }

    for (int i = 1; i < 3; ++i) 
	{
        int sumaActual = 0;
        for (int j = 0; j < 3; ++j) 
		{
            sumaActual += matriz[i][j];
        }
        if (sumaActual != sumaFila) 
		{
            return 0;
        }
    }

    for (int j = 0; j < 3; ++j) 
	{
        int sumaActual = 0;
        for (int i = 0; i < 3; ++i) 
		{
            sumaActual += matriz[i][j];
        }
        if (sumaActual != sumaFila) 
		{
            return 0;
        }
    }

    int sumaDiagonalPrincipal = matriz[0][0] + matriz[1][1] + matriz[2][2];
    if (sumaDiagonalPrincipal != sumaFila) 
	{
        return 0;
    }

    int sumaDiagonalSecundaria = matriz[0][2] + matriz[1][1] + matriz[2][0];
    if (sumaDiagonalSecundaria != sumaFila) 
	{
        return 0;
    }
    return 1;
}

int main() {
    int matriz[3][3];

    printf("Ingresa los elementos de la matriz 3x3:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) 
		{
            printf("posicion(%d,%d): ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");

    imprimirMatriz(matriz);
    printf("\n");

    for (int i = 0; i < 3; ++i) 
	{
        int sumaFila = 0;
        for (int j = 0; j < 3; ++j) 
		{
            sumaFila += matriz[i][j];
        }
        printf("Suma de la fila %d: %d\n", i + 1, sumaFila);
    }

    for (int j = 0; j < 3; ++j) 
	{
        int sumaColumna = 0;
        for (int i = 0; i < 3; ++i) 
		{
            sumaColumna += matriz[i][j];
        }
        printf("Suma de la columna %d: %d\n", j + 1, sumaColumna);
    }

    int sumDPrincipal = matriz[0][0] + matriz[1][1] + matriz[2][2];
    printf("Suma de la diagonal principal: %d\n", sumDPrincipal);

    int sumDSecundaria = matriz[0][2] + matriz[1][1] + matriz[2][0];
    printf("Suma de la diagonal secundaria: %d\n", sumDSecundaria);

    if (esMatrizMagica(matriz)) 
	{
        printf("La matriz es magica.\n");
    } else 
	{
        printf("La matriz no es magica.\n");
    }
    return 0;
}

