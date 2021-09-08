#include <stdio.h>

float cotacao_dolar, valor_em_dolares, conversao;

int main()
{
    printf("\nDigite a cotação do Dolar: ");
    scanf("%f", &cotacao_dolar);
    
    printf("\nDigite o valor em dolcares: ");
    scanf("%f", &valor_em_dolares);
    
    conversao = cotacao_dolar * valor_em_dolares;
    
    printf ("\nO valor convertido é: %f", conversao);
    
    return 0;
}

}


/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

float n1, n2, n3, n4, q1, q2, q3, q4, soma;

int main()
{
    printf("\nDigite o primeiro nro: ");
    scanf("%f", &n1);
    
    printf("\nDigite o segundo nro: ");
    scanf("%f", &n2);
    
    printf("\nDigite o terceiro nro: ");
    scanf("%f", &n3);
    
    printf("\nDigite o quarto nro: ");
    scanf("%f", &n4);
    
    q1 = n1 * n1;
    
    q2 = n2 * n2;
    
    q3 = n3 * n3;
    
    q4 = n4 * n4;
    
    soma = q1 + q2 + q3 + q4;
    
    printf("\nA soma total é : %f ", soma);
    
    return 0;
}

Terceiro programa com erro *********************

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
char nome_vendedor, codigo_peca;

float preco_unitario_peca, qtda_peca, comissao;

    printf("\nDigite o nome do vendedor: ");
    scanf ("%c", &nome_vendedor);
    
    printf("\nDigite o codigo da peça: ");
    scanf("%c", &codigo_peca);
    
    printf("\nDigite o preço unitário da peça: ");
    scanf("%f", &preco_unitario_peca);
    
    printf("\nDigite a quantidade de peças: ");
    scanf("%f", &qtda_peca);
    
    comissao = (preco_unitario_peca * qtda_peca) * 5 /100;
    
    printf("\nA comissão é : %f ", comissao);
    
    return 0;
}
