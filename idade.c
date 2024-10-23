#include<stdio.h>
int main(){

    int idadedonarrador;

    printf("qual a idade do narrador?");
    scanf("%d", &idadedonarrador);

    if(idadedonarrador<=10){
        printf("categoria infantil");
        
    } else if(idadedonarrador<=17){
        printf("categoria juvenil");

    } else if (idadedonarrador>17){
        printf("categoria senior");
    }
   
    



}