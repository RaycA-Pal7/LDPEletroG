#include<stdio.h>

int main(){

    int n ,r ,s=0 ,d;

    printf("numero da conta");
    scanf("%d", &n);

    while(n>0){

        r=n%10;
        n=n%10;
        s=r+s;

    }
    d=s%10;
    printf("digito %d", d);

}