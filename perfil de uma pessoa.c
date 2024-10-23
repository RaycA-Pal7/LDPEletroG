#include<stdio.h>

int main(){
     int Da;
     int Db;
     float resultado;
     int soma;

     printf("informa os dois primeiros digitos do ano que voce nasceu");
     scanf("%d", &Da);

     printf("informa os dois ultimos digitos do ano que voce nasceu");
     scanf("%d", &Db);

     soma =  Da + Db;
     printf("a soma deu %d\n", soma);

     resultado = soma % 5;
     printf("o resto e %d / 5 = %f", soma, resultado);

     if( resultado == 0){
        printf("Timido");
     }
     if( resultado == 1){
        printf("Sonhador");
     }
     if( resultado == 2){
        printf("Paquerador");
     }
     if( resultado == 3){
     printf("Atraente");}

     if( resultado == 4){
        printf("Irresistivel");
     }
     

}