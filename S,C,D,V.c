#include<stdio.h>

int main(){

    char estado;
    char S;
    char C;
    char D;
    char V;


    printf("qual o seu estado civil?");
    scanf("%c",&estado);

    if(estado == 'S'){
    printf("voce é solteiro");
    }
    if (estado == 'C'){
    printf("voce é casado");}
  
    if(estado == 'D'){
    printf("voce é divorciado");}


    if (estado == 'V'){
    printf("voce é viuvo");
    }
}
