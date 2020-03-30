#include <stdio.h>
int main()
{
    int qntValores;
    int soma = 0;
    int i;

    printf("Entrada: \n");
    scanf("%d", &qntValores);

    int valor[qntValores];

    for(i = 0; i < qntValores; i++){
        scanf("%d", &valor[i]);
        soma += valor[i];
    }

    printf("saida: %d", soma);

    return 0;
}
