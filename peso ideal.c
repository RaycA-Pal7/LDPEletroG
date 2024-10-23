#include<stdio.h>

int main(){

    char sexo;
    float peso;
    float altura;

    printf("Qual o seu sexo?");
    scanf("%c", &sexo);

    printf("Qual a sua altura");
    scanf("%f", &altura);

    if(sexo== 'F'){
        peso = 62.1 * altura - 44.7;
        printf("Seu peso ideal e %f", peso);
    }
    if(sexo== 'M'){
        peso = 72.7 * altura - 58;
        printf("Seu peso ideal e %f", peso);
    }
}