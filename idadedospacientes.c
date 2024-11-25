#include<stdio.h>

int main(void){

    int p,i,m,x;
    m = -1;
    printf("quantidade de pacientes?");
    scanf("%d", &p);

    for(x=1; x<=p; x++){
    printf("%d qual a idade do paciente?", x);
    scanf("%d", &i);
 

    if( i>m ){
         m = i;
    }
    }
    printf("maior idade = %d", m);
    
    return 0;



}