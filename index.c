#include<stdio.h>
#include<stdlib.h>

    int fatorial(int x){
        if(x<=1){
            return 1;
        }else{
            return x * fatorial(x-1);
            }
        }

int main() {
    int y;

printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%d", &y);
printf("Fatorial de %d: %d\n",y, fatorial (y));
return 0;

}