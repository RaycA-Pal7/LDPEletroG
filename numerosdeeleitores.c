#include<stdio.h>

int main(void){
    int a=0;
    int b=0;
    int c=0;
    int nulo=0;
    int eleitores;
    int i;
    char voto;
    printf("qual o numeros de eleitores?");
    scanf("%d", &eleitores);
    for(i=1; i<=eleitores; i++){
        printf("qual o seu voto?");
        scanf("%c", &voto);
        scanf("%c", &voto);
        if(voto=='a'){
            a++;
        }else if(voto=='b'){
            b++;
        }else if(voto=='c'){
            c++;
        }else {
            nulo++;

        }
        printf("%c", voto);
    
    }
    printf("candidato A recebeu %d votos\n",a);

    printf("candidato B recebeu %d votos\n",b);

    printf("candidato C recebeu %d votos\n",c);

    printf("Nulo recebeu %d votos\n", nulo);
}