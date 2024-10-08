#include<math.h>
#include<stdio.h>

int main(void){

    float capitalC;
    float jurosJ;
    int mesesM;
    
    
    printf("qual o capitalC");
    scanf("%f", &capitalC);

    printf("qual o jurosJ");
    scanf("%f", &jurosJ);

    printf("quantos mesesM");
    scanf("%d", &mesesM);

    float mutanteF = capitalC*pow((1+jurosJ/100),mesesM); // potenciação;

    printf("%f", mutanteF);




}