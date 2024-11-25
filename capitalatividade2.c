#include<stdio.h>

int main(void){
    float mont=0;
    float capital;

    printf("qual o capital?");
    scanf("%f", &capital);
    float total;

    printf("qual a taxa mensal?");
    scanf("%f", &total);

    int mes;

    printf("qual o mes?");
    scanf("%d", &mes);

    int i;
    for(i=1; i<=mes; i++){
     mont = capital + capital*(total/100) * i;

     printf("%d mont: %f",i, mont);
    }

    


}