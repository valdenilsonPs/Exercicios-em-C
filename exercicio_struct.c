#include<stdio.h>
#include <stdlib.h>

void leitura_linhas_matriz_A(int *nro_linhas_A){
   printf("Entre com o numero de linhas da matriz A:\n ");
    scanf("%d", nro_linhas_A);
     
}

void leitura_colunas_matriz_A(int *nro_colunas_A){
    printf("Entre com o numero de colunas da matriz A:\n ");
    scanf("%d", nro_colunas_A); 
}

void leitura_linhas_matriz_B(int *nro_linhas_B){
   printf("Entre com o numero de linhas da matriz B:\n ");
    scanf("%d", nro_linhas_B);
}

void leitura_colunas_matriz_B( int *nro_colunas_B){
    printf("Entre com o numero de colunas da matriz B:\n ");
    scanf("%d", nro_colunas_B); 
}

void criar_matriz_A (int nro_linhas_A, int nro_colunas_A) {
    FILE *arquivo_matriz_A;

    int i, j;
    float x;
    arquivo_matriz_A = fopen("matriz_A.txt","a");
    if (arquivo_matriz_A == NULL) {
        printf("Erro na abertura do arquivo matriz_A.dat.\n");
        exit(-1); 
    }


    for (i=0; i<nro_linhas_A; i++) {
        for(j=0;j<nro_colunas_A;j++){
        printf("Entre com o A[%d][%d]:",i+1, j+1);
        scanf("%f", &x);
        fprintf(arquivo_matriz_A,"%f ",x);
        
        }
         fprintf(arquivo_matriz_A,"\n");
    }
    fclose(arquivo_matriz_A);
}

void criar_matriz_B (int nro_linhas_B, int nro_colunas_B) {
    FILE *arquivo_matriz_B;

    int i, j;
    float x;

    arquivo_matriz_B = fopen("matriz_B.txt","a");
    if (arquivo_matriz_B == NULL) {
        printf("Erro na abertura do arquivo matriz_B.dat.\n");
        exit(-1); 
    }

    for (i=0; i<nro_linhas_B; i++) {
        for(j=0;j<nro_colunas_B;j++){
        printf("Entre com o B[%d][%d]:",i+1, j+1);
        scanf("%f", &x);
        fprintf(arquivo_matriz_B,"%f ",x);
        
        }
        fprintf(arquivo_matriz_B,"\n");
    }
    fclose(arquivo_matriz_B);
  }
  
     void somar_matrizes(int nro_linhas_A,int nro_colunas_A,int nro_linhas_B,int nro_colunas_B){
     FILE *arquivo_matriz_B, *arquivo_matriz_A, *arquivo_resultado;
     int i,j,n, controle_colunas=0;
     float x, y,soma=0;
     
     if(nro_linhas_A!=nro_linhas_B||nro_colunas_A!=nro_colunas_B){
         printf("matrizes imcopativeis para soma!");
     }
     else{
        arquivo_matriz_A = fopen("matriz_A.txt","r");
    if (arquivo_matriz_A == NULL) {
        printf("Erro na abertura do arquivo matriz_A.txt.\n");
        exit(-1); 
    }
    arquivo_matriz_B = fopen("matriz_B.txt","r");
    if (arquivo_matriz_A == NULL) {
        printf("Erro na abertura do arquivo matriz_B.txt.\n");
        exit(-1); 
    }
    
    arquivo_resultado = fopen("matriz_resultado.txt","a");
    if (arquivo_resultado == NULL) {
        printf("Erro na abertura do arquivo matriz_resultado.txt.\n");
        exit(-1); 
    }
    
    n= nro_linhas_A*nro_colunas_A;
    
    for (i=0; i<n; i++) {
        
        fscanf(arquivo_matriz_A,"%f", &x);
        fscanf(arquivo_matriz_B,"%f", &y);
        soma=x+y;
        fprintf(arquivo_resultado,"%f ",soma);
        controle_colunas++;
        if(controle_colunas==nro_colunas_A){
            fprintf(arquivo_resultado,"\n");
            controle_colunas=0;
        }
        
        
    }
    fclose(arquivo_matriz_A);
    fclose(arquivo_matriz_B);
    fclose(arquivo_resultado);
     }
     
 }



int main(){
    int nro_linhas_A,nro_linhas_B, nro_colunas_A, nro_colunas_B;
   
    leitura_linhas_matriz_A(&nro_linhas_A);
    leitura_colunas_matriz_A(&nro_colunas_A);
    leitura_linhas_matriz_B(&nro_linhas_B);
    leitura_colunas_matriz_B(&nro_colunas_B);
    criar_matriz_A( nro_linhas_A, nro_colunas_A);
    criar_matriz_B(nro_linhas_B, nro_colunas_B);
    somar_matrizes(nro_linhas_A,nro_colunas_A, nro_linhas_B, nro_colunas_B);
    return 0;
}