#include<stdio.h>
 
 int main(){

    int totaldepecas;
    int totaldepecasdefeituosas;

     printf("qual quantidade pecas no total?");
     scanf("%d", &totaldepecas);

     printf("qual quantidade de pecas defeituosas?");
     scanf("%d", &totaldepecasdefeituosas);

     float porcentagem = (totaldepecas/100)* 10;
    
    if(porcentagem >= totaldepecasdefeituosas){
        printf("maquina precisa de manutencao %f");

    } else if(porcentagem < totaldepecasdefeituosas){
        printf("maquina nao precisa de manutencao %f");

        return 0;
    }

    




     
 }