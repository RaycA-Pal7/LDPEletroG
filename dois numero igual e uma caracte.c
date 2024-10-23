#include<stdio.h>

int main(){
     
     char operacao; 
     int cal;
     int numero1;
     
     printf("qual a operacao");
     scanf("%c", &operacao);
     printf("informe o primeiro numero");
     scanf("%d", &numero1);

     int numero2;
     printf("informe o segundo numero");
     scanf("%d", &numero2);

     if(operacao == '+'){
        cal=numero1+numero2;
     } 
     else if(operacao == '-'){
        cal=numero1-numero2;
     } 
     else if(operacao == '/'){
        cal=numero1/numero2;
     } 
     else if(operacao == '*'){
        cal=numero1*numero2;
     }
     
     printf("%d", cal);


}