#include<stdio.h>
int main()
{
    int l,d;
    float k,p,pedagio,total;
    scanf("%d%d",&l,&d);
    scanf("%f%f",&k,&p);
    pedagio=l/d;
    total=l*k+pedagio*p;
    printf("%f",total);
    return 0;

}

