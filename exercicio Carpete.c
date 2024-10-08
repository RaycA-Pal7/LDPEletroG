#include<stdio.h>

float main(){
     float comprimento;
     float largura;
     float valor;

     printf("qual o comprimento");
     scanf("%f", &comprimento);

     printf("qual a largura");
     scanf("%f", &largura);

     printf("qual o valor");
     scanf("%f" , &valor);

     float total = comprimento*largura*valor;
     printf("%f", total);

}