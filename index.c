#include<stdio.h>
#include<stdlib.h>

    int fatorial(int x){
        if(x<=1){
            return 1;
        }else{
            return x*fatorial(x-1);
            }
        }

int main()
{
int fat, n;
printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%d", &n);

for(fat = 1; n > 1; n = n - 1)
fat = fat * n;

printf("\nFatorial calculado: %d", fat);
return 0;
}