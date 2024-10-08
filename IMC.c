#include<stdio.h>
float main()
{
float peso;
float altura;

printf("qual o seu peso");
scanf("%f", &peso);

printf( "qual sua altura" );
scanf("%f", &altura);

float imc=peso/(altura*altura); 
printf("%f",imc);




}

 