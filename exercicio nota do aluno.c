#include<stdio.h>

int main(){
float bimestre1;
float bimestre2;
float bimestre3;
float bimestre4;

printf("qual a sua nota do 1 bimestre");
scanf("%f", &bimestre1);

printf("qual a sua nota do 2 bimestre");
scanf("%f", &bimestre2);

printf("qual a sua nota do 3 bimestre");
scanf("%f", &bimestre3);

printf("qual a sua nota do 4 bimestre");
scanf("%f", &bimestre4);

float media= (bimestre1+bimestre2+bimestre3+bimestre4)/4;

printf("%f", media);

if(media>=7){
    printf("o aluno esta aprovado");

} else if(media>=4){
    printf("aluno esta no exame final");


}else if(media<4){
printf("aluno esta reprovado");

}
}
