#include<stdio.h>
int main(){

    int distancia;
    int combustivel;

    printf("qual a distancia");
    scanf("%d", &distancia);

    printf("quanto de combustivel");
    scanf("%d", &combustivel);

    int media= distancia/combustivel;
    printf("%d",media);

}