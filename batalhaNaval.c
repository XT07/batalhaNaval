#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char tabP1[11][11][4];
char tabP2[11][11][4];
char *nums[10] = {" 1 "," 2 "," 3 "," 4 "," 5 "," 6 "," 7 "," 8 "," 9 "," 10"};
char *leters[10] = {" A "," B "," C "," D "," E "," F "," G "," H "," I "," J "};

void gerarTabP1(){
    int countNum = 0;
    int countLeter = 0;

    for(int i = 0; i < 11; i++){
        for(int j = 0; j < 11; j++){
            if(i == 0 && j >= 1){
                strcpy(tabP1[i][j], nums[countNum]);
                countNum++;
            }else if(i >= 1 && j == 0){
                strcpy(tabP1[i][j], leters[countLeter]);
                countLeter++;
            }else if(i == 0 && j == 0){
                strcpy(tabP1[i][j], "   ");
            } else {
                strcpy(tabP1[i][j], " O ");
            }
        }
    }
}

void gerarTabP2(){
    system("cls");
    int countNum = 0;
    int countLeter = 0;

    for(int i = 0; i < 11; i++){
        for(int j = 0; j < 11; j++){
            if(i == 0 && j >= 1){
                strcpy(tabP2[i][j], nums[countNum]);
                countNum++;
            }else if(i >= 1 && j == 0){
                strcpy(tabP2[i][j], leters[countLeter]);
                countLeter++;
            }else if(i == 0 && j == 0){
                strcpy(tabP2[i][j], "   ");
            } else {
                strcpy(tabP2[i][j], " O ");
            }
        }
    }
}

void menu();

void menu(){
    char opt;
    printf("Bem vindo a batalha naval\n\n");
    printf("Iniciar [1]\nSair [2]\nEscreva aqui: ");
    scanf("%c", &opt);
    switch(opt){
        case '1': {
            printf("Tabuleiro IA: \n\n");
            for(int i = 0; i < 11; i++){
                for(int j = 0; j < 11; j++){
                    printf("%s",tabP1[i][j]);
                }
                printf("\n");
            }

            gerarTabP2();
            printf("Seu tabuleiro: \n\n");
            for(int i = 0; i < 11; i++){
                for(int j = 0; j < 11; j++){
                    printf("%s",tabP2[i][j]);
                }
                printf("\n");
            }

            system("pause");

            break;
        }

        case '2': {
            system("exit");

            break;
        }

        default:{
            system("cls");
            printf("Valor invalido, insira novamente\n\n");
            menu();
        }
    }
}

int main(){
    menu();
}