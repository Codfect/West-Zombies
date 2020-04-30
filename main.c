#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void instrucoes();
void infodev();
void menuCadastro();
void menu(int select);

int main()
{
    int selecao;
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    printf("\n");

    printf("\nMenu Principal \n\n");
    printf("1 - Iniciar Jogo \n");
    printf("2 - Instru��es do Jogo \n");
    printf("3 - Ranking \n");
    printf("4 - Informa��es do Desenvolvedor \n");

    printf("Selecione a op��o: ");
    scanf("%d", &selecao);

    menu(selecao);
    return 0;
}

void instrucoes(){
    system("cls");
    printf("\n Instru��es do Jogo \n");
    printf("\n O objetivo do jogo � matar os zombies e \n sobreviver aos barris que vem em sua dire��o.");
    printf("\n");
    printf("\n - Para atirar, aperte a tecla espa�o.");
    printf("\n - Para pular, aperte a tecla direcional para cima. \n");
    printf("\n \n Aperte qualquer tecla para voltar...");
    system("pause>null");
    main();
}
void infodev(){
    system("cls");
    printf("\n Informa��es do Desenvolvedor");
    printf("\n ");
    printf("\n Desenvolvido por alunos da Faculdade Uniam�rica: \n");
    printf("\n - Vinicius Oliveira");
    printf("\n - Larissa Lazzari");
    printf("\n - Oliver J. Godoy");
    printf("\n - Gabriel Hoffman");
    printf("\n");
    printf("\n \n Aperte qualquer tecla para voltar...");
    system("pause>null");
    main();
}
void menuCadastro(){
    char nome[50];
    system("cls");
    printf("\n Digite seu nome: ");
    scanf("%s", nome);

    play(nome);
}
void play(char nome[]){
    system("cls");
    printf("Bem vindo %s \n", nome);
    printf("\n \n Aperte qualquer tecla para voltar...");
    system("pause>null");
    main();
}

void menu(int select){
    switch(select){
    case 1:
        menuCadastro();
        break;
    ;

    case 2:
        instrucoes();
        break;
    ;
    case 3:

        printf("Ranking \n");
        printf("\n 1 - Usu�rio - 500");
        printf("\n 2 - Usu�rio2 - 300");
        printf("\n 3 - Usu�rio3 - 300");
        break;
    case 4:
        infodev();
        break;
    default:
        main();
    }
}
