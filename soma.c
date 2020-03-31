#include <stdio.h>
int main()
{
    int qntValores;
    int soma = 0;
    int i,*valor;


    scanf("%d", &qntValores);

    valor=(int*)malloc(qntValores*sizeof(int));

    for(i = 0; i < qntValores; i++){
        scanf("%d", &valor[i]);
        soma += valor[i];
    }

    printf("%d", soma);

    return 0;
}
