#include<stdio.h>

int main(){
    
 int quantidade;
 float valor;
 printf("qual a quantidade de folhas?");
 scanf("%d", &quantidade);

    if (quantidade<100){ 
    printf("custará R$0,25 :  ");
    
    valor=quantidade*0.25;
   printf("%f", valor);
    }



if (quantidade>100){
    printf("custará R$0,20:  ");
    
    valor= quantidade*0.20;
printf("%f", valor);
}




}
