#include<stdio.h>

int main(){


    int lado1;
    int lado2;
    int lado3;

    printf("informe o primeiro numero");
    scanf("%d", &lado1);

    printf("informe o segundo numero");
    scanf("%d", &lado2);

    printf("informe o terceiro numero");
    scanf("%d", &lado3);

    if((lado1+lado2)>lado3){
        printf("e um triangulo");
        if(lado1==lado2 && lado1==lado3){
            printf("e um equilatero");

        }else if(lado1!=lado2 && lado1!=lado3 && lado2!= lado3){
            printf("e um escaleno");
        }else{
            printf("e um isosceles");
        }




    }else{
        printf("nao e um triangulo");
    }
}