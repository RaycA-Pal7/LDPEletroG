#include<stdio.h>

int main(){

    int N1;
    int N2;
    int N3;
    int temp;

    printf("informe o primeiro número");
    scanf("%d",&N1);


    printf("informe o segundo número");
    scanf("%d", &N2);

    printf("informe o tercerio número");
    scanf("%d", &N3);

    if(N1>N3){
        temp=N1;
        N1=N3;
        N3=N1;
        N3=temp;
        }
    if (N1>N2){
        temp=N1;
        N1=N2;
        N2=temp;

    }
    if(N2>N3){
        temp=N2;
        N2=N3;
        N3=temp;
    }

    printf("%d %d %d", N1, N2, N3);
    
}