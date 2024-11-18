#include<stdio.h>

int main(void) { 
 int total; 
 float nota;
 float soma;
 int i;
 float media;

 printf("Total de alunos? "); 
 scanf("%d",&total); 
 for(i=1; i<=total; i++) { 
 printf("%da. Nota? ", i); 
 scanf("%f",&nota); 
soma = soma + nota; 
 } 
 media = soma / total; 
 printf("%f",media); 
 return 0; 
}