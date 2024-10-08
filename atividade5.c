#include<stdio.h>
int main(){

int tamanho;
int velocidade; 

printf("qual o tamanho do arquivo");
scanf("%d",&tamanho);

printf("qual a velocidade do arquivo");
scanf("%d", &velocidade);

int tempo= tamanho / velocidade;

printf("%d",tempo);

}

