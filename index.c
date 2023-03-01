#include<stdio.h>
#include<stdlib.h>
    int x, fat;
    int fatorial(int x){
        if(x<=1){
            return 1;
        }else{
            return (x*fatorial(x-1));
            }
        }

int main()
{
printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%d", &x);
printf("Seu fatorial e: \n", + fatorial(x));

}