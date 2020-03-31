#include<stdio.h>
int main()
{
    int n,*soma,*vencedor,**m,*resultado,i,j,a=0,vezes=1;
    scanf("%d",&n);
    while(n!=0)
    {
        soma=(int*)malloc(n*sizeof(int));
         resultado=(int*)malloc(vezes*sizeof(int));
        vencedor=(int*)malloc(n*sizeof(int));
        m=(int**)malloc(n*sizeof(int*));
        for(i=0;i<n;i++)
        {
            soma[i]=0;

        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&m[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                soma[j]+=m[i][j];
            }

        }
        for(i=0;i<n;i++)
        {

            vencedor[i]=soma[0];
        }
        for(i=a;i<a+1;i++)
        {

            if(vencedor[a]<soma[i])
            {
                vencedor[a]=soma[i];
            }
        }

            resultado[a]=vencedor[a];
            for(i=0;i<vezes;i++)
            {
                printf("%d",resultado[i]);
            }
            a++;
            vezes++;
        scanf("%d",&n);
    }
}
