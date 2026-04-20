#include <stdio.h>
int linhas, colunas;


void matriz_soma(int matriz[linhas][colunas]){
    int i, j;
    int soma = 0;
    for (i=0;i<linhas;i++){
        for (j=0;j<colunas;j++){
            soma += matriz[i][j];
        }
    }
    printf("A soma de todos os valores da matriz é: %d\n", soma);
}


void matriz_mostrar(int lin, int col){
    int matriz[lin][col];
    int i, j;
    int res;

    //Definindo Matriz
    for (i=0;i<lin;i++){
        for (j=0;j<col;j++){
            printf("MATRIZ: Digite um número para a linha %d, na coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            
        }
    }

    //Mostrando Matriz
    printf("\nMOSTRANDO MATRIZ %dx%d\n\n", lin, col);
    for (i=0;i<lin;i++){
        for (j=0;j<col;j++){
            printf("%d", matriz[i][j]);
            if (j == col-1){
                printf("\n\n");
            }
            if (j == col-1){
                continue;
            }
            if (matriz[i][j] > 9){
                printf(" |  ");
            } else {
                printf("  |  ");
            }
        }
    }
    printf("Deseja obter a soma de todos os valores da matriz?(1=Sim, 0=Não) ");
    scanf("%d", &res);
    if (res == 1){
        matriz_soma(matriz);
    }
}


int main() {
    int res;

    while (1){
        printf("Informe quantas linhas tem sua matriz: ");
        scanf("%d", &linhas);
        printf("Informe quantas colunas tem sua matriz: ");
        scanf("%d", &colunas);
        matriz_mostrar(linhas, colunas);
        printf("Deseja criar outra matriz?(1=Sim, 0=Não) ");
        scanf("%d", &res);
        if (res == 1){
            continue;
        } else {
            break;
        }
    }

    return 0;
}