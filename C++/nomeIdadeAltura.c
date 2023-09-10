#include <stdio.h>

int main(){
    int idade, ano;
    float altura;
    char nome[30];

    printf("Digite seu nome: ");
    scanf ("%s", nome); /* strings são lidas como arrays */
    printf("Digite sua idade: ");
    scanf ("%d", &idade); /* outros valores numéricos recebem & como operador de endereço, senão o compilador não executa */
    printf ("Digite sua altura: ");
    scanf ("%f", &altura);

    ano = 2023 - idade;

    printf ("\nO seu nome eh: %s", nome);
    printf ("\nA sua altura eh: %f", altura);
    printf ("\nE sua idade eh: %d", idade);
    printf ("\nVoce nasceu em: %d", ano);
    
    return 0;
}