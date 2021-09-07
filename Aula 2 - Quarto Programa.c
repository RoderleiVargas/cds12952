#include <stdio.h>

int main()
{
    int idade;
    char inicial;
        printf("Digite sua Inicial: ");
        scanf("%c", &inicial);
        
        printf("Digite sua Idade: ");
        scanf("%d", &idade);
        
        printf("\nInicial: %c\tidade: %d.\n" , inicial, idade);
    return 0;