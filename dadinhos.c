#include<stdio.h>
int main()
{
    float n,d,c,i,linhas=1,resultado=0,*v,a=0;
    scanf("%f%f%f",&n,&c,&d);
    while(n!=0&&c!=0&&d!=0){
    v=(float*)malloc(linhas,sizeof(float));
    resultado=n*c*d;
    for(i=0;i<linhas;i++)
    {
        v[a]=resultado;
    }
    a++;
    linhas++;
    scanf("%f%f%f",&n,&c,&d);
    }
    for(i=0;i<linhas;i++)
    {
        printf("%d", v);
    }
    return 0;

}
