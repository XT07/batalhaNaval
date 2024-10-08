#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char tab[11][11];
char tabP1[11][11][4];
char tabP2[11][11][4];
const char *nums[10] = {" 1 "," 2 "," 3 "," 4 "," 5 "," 6 "," 7 "," 8 "," 9 "," 10"};
const char *leters[10] = {" A "," B "," C "," D "," E "," F "," G "," H "," I "," J "};
const char letersConf[10] = {'A','B','C','D','E','F','G','H','I','J'};

void menu();

void gerarTab(){
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

int gerarTabP1(){
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

int gerarTabP2(){
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

void shipPos(){
    int shipNum = 0;
    int i = shipNum;

    system("cls");

    gerarTab();

    printf("\n\nEscolha as posicoes dos navius\n\n");
    for(i = 0; i <=2; i++){
        int pos1N1, pos2N1, pos3N1, pos1N2, pos2N2, pos3N2, pos1N3, pos2N3, pos3N3, pos4N3, pos5N3;
        char pos1AN1, pos2AN1, pos3AN1, pos1AN2, pos2AN2, pos3AN2, pos1AN3, pos2AN3, pos3AN3, pos4AN3, pos5AN3;
        int direct1, direct2, direct3;

        system("cls");

        printf("Escolha as cordenadas do naviu %d\n\n", i + 1);
        switch(i){
            case 0: {
                char direct;
                do{
                    printf("Ele ficara em qual direcao ?\nHorizontal [1]\nVertical [2]\nEscolha:");
                    scanf("%c", &direct);
                }while(direct != '1' && direct != '2');


                switch(direct){
                    case '1': {
                        int leterOk = 0;

                        do{
                            printf("\n\nEscolha a linha que ele ficara (coloque a letra correspondente a linha): ");
                            scanf("%c", &pos1AN1);
                            for(int i = 0; i <= 9; i++){
                                if(letersConf[i] == toupper(pos1AN1)){
                                    leterOk = 1;
                                }else{
                                    leterOk = 0;
                                }
                            }
                        }while(leterOk != 1);
                        do{
                            printf("\n\nEscolha a posicao da primeira coluna: ");
                            scanf("%d", &pos2N1);
                        }while(pos2N1 <= 0 && pos2N1 >= 11);
                        do{
                            printf("\n\nEscolha a posicao da segunda coluna: ");
                            scanf("%d", &pos3N1);
                        }while(pos3N1 <= 0 && pos3N1 >= 11);

                        break;
                    }

                    case '2': {
                        int leterOk = 0;

                        do{
                            printf("\n\nEscolha a coluna que ele ficara: ");
                            scanf("%d", &pos1N1);
                        }while(pos1N1 <= 0 && pos1N1 >= 11);
                        do{
                            printf("\n\nEscolha a 1 linha que ele ficara (coloque a letra correspondente a linha): ");
                            scanf("%c", &pos2AN1);
                            for(int i = 0; i <= 9; i++){
                                if(letersConf[i] == toupper(pos2AN1)){
                                    leterOk = 1;
                                }else{
                                    leterOk = 0;
                                }
                            }
                        }while(leterOk != 1);
                        do{
                            printf("\n\nEscolha a 2 linha que ele ficara (coloque a letra correspondente a linha): ");
                            scanf("%c", &pos3AN1);
                            for(int i = 0; i <= 9; i++){
                                if(letersConf[i] == toupper(pos3AN1)){
                                    leterOk = 1;
                                }else{
                                    leterOk = 0;
                                }
                            }
                        }while(leterOk != 1);

                        break;
                    }

                    default: {
                        shipNum = i;
                        printf("Posicao invalida, escreva novamente");
                        system("pause");
                        shipPos();

                        break;
                    }
                }

                break;
            }

            case 1: {
                char direct;
                do{
                    printf("\n\nEle ficara em qual direcao ?\nHorizontal [1]\nVertical [2]\nEscolha: ");
                    scanf("%c", &direct);
                }while(direct != '1' && direct != '2');

                switch(direct){
                    case '1': {
                        int leterOk = 0;

                        do{
                            printf("\n\nEscolha a linha que ele ficara (coloque a letra correspondente a linha): ");
                            scanf("%c", &pos1AN2);
                            for(int i = 0; i <= 9; i++){
                                if(letersConf[i] == toupper(pos1AN2)){
                                    leterOk = 1;
                                }else{
                                    leterOk = 0;
                                }
                            }
                        }while(leterOk != 1);
                        do{
                            printf("\n\nEscolha a posicao da primeira coluna: ");
                            scanf("%d", &pos2N2);
                        }while(pos2N2 <= 0 && pos2N2 >= 11);
                        do{
                            printf("\n\nEscolha a posicao da segunda coluna: ");
                            scanf("%d", &pos3N2);
                        }while(pos3N2 <= 0 && pos3N2 >= 11);

                        break;
                    }

                    case '2': {
                        int leterOk = 0;

                        do{
                            printf("\n\nEscolha a coluna que ele ficara: ");
                            scanf("%d", &pos1N2);
                        }while(pos1N2 <= 0 && pos1N2 >= 11);
                        do{
                            printf("\n\nEscolha a 1 linha que ele ficara (coloque a letra correspondente a linha): ");
                            scanf("%c", &pos2AN2);
                            for(int i = 0; i <= 9; i++){
                                if(letersConf[i] == toupper(pos2AN2)){
                                    leterOk = 1;
                                }else{
                                    leterOk = 0;
                                }
                            }
                        }while(leterOk != 1);
                        do{
                            printf("\n\nEscolha a 2 linha que ele ficara (coloque a letra correspondente a linha): ");
                            scanf("%c", &pos3AN2);
                            for(int i = 0; i <= 9; i++){
                                if(letersConf[i] == toupper(pos3AN2)){
                                    leterOk = 1;
                                }else{
                                    leterOk = 0;
                                }
                            }
                        }while(leterOk != 1);

                        break;
                    }

                    default: {
                        shipNum = i;
                        printf("Posicao invalida, escreva novamente");
                        system("pause");
                        shipPos();

                        break;
                    }
                }

                break;
            }

            case 2: {
                char direct;
                do{
                    printf("Ele ficara em qual direcao ?\nHorizontal [1]\nVertical [2]\nEscolha: ");
                    scanf("%c", &direct);
                }while(direct != '1' && direct != '2');

                switch(direct){
                    case '1': {
                        int leterOk = 0;

                        do{
                            printf("\n\nEscolha a linha que ele ficara (coloque a letra correspondente a linha): ");
                            scanf("%c", &pos1N3);
                            for(int i = 0; i <= 9; i++){
                                if(letersConf[i] == toupper(pos1N3)){
                                    leterOk = 1;
                                }else{
                                    leterOk = 0;
                                }
                            }
                        }while(leterOk != 1);
                        do{
                            printf("\n\nEscolha a posicao da primeira coluna: ");
                            scanf("%d", &pos2N3);
                        }while(pos2N3 <= 0 && pos2N3 >= 11);
                        do{
                            printf("\n\nEscolha a posicao da segunda coluna: ");
                            scanf("%d", &pos3N3);
                        }while(pos3N3 <= 0 && pos3N3 >= 11);
                        do{
                            printf("\n\nEscolha a posicao da terceira coluna: ");
                            scanf("%d", &pos4N3);
                        }while(pos4N3 <= 0 && pos4N3 >= 11);
                        do{
                            printf("\n\nEscolha a posicao da quarta coluna: ");
                            scanf("%d", &pos5N3);
                        }while(pos5N3 <= 0 && pos5N3 >= 11);

                        break;
                    }

                    case '2': {
                        int leterOk = 0;
                        
                        do{
                            printf("\n\nEscolha a coluna que ele ficara: ");
                            scanf("%d", &pos1N3);
                        }while(pos1N3 <= 0 && pos1N3 >= 11);
                        do{
                            printf("\n\nEscolha a 1 linha que ele ficara (coloque a letra correspondente a linha): ");
                            scanf("%c", &pos2N3);
                            for(int i = 0; i <= 9; i++){
                                if(letersConf[i] == toupper(pos2N3)){
                                    leterOk = 1;
                                }else{
                                    leterOk = 0;
                                }
                            }
                        }while(leterOk != 1);
                        do{
                            printf("\n\nEscolha a 2 linha que ele ficara (coloque a letra correspondente a linha): ");
                            scanf("%c", &pos3N3);
                            for(int i = 0; i <= 9; i++){
                                if(letersConf[i] == toupper(pos3N3)){
                                    leterOk = 1;
                                }else{
                                    leterOk = 0;
                                }
                            }
                        }while(leterOk != 1);
                        do{
                            printf("\n\nEscolha a 3 linha que ele ficara (coloque a letra correspondente a linha): ");
                            scanf("%c", &pos4N3);
                            for(int i = 0; i <= 9; i++){
                                if(letersConf[i] == toupper(pos4N3)){
                                    leterOk = 1;
                                }else{
                                    leterOk = 0;
                                }
                            }
                        }while(leterOk != 1);
                        do{
                            printf("\n\nEscolha a 4 linha que ele ficara (coloque a letra correspondente a linha): ");
                            scanf("%c", &pos5N3);
                            for(int i = 0; i <= 9; i++){
                                if(letersConf[i] == toupper(pos5N3)){
                                    leterOk = 1;
                                }else{
                                    leterOk = 0;
                                }
                            }
                        }while(leterOk != 1);

                        break;
                    }

                    default: {
                        shipNum = i;
                        printf("Posicao invalida, escreva novamente");
                        system("pause");
                        shipPos();

                        break;
                    }
                }

                break;
            }default:{
                printf("Problema, retornando ao menu . . .");
                getchar();
                menu();
            }
        }
    }

    system("pause");
}

void menu(){
    char opt;
    printf("Bem vindo a batalha naval\n\n");
    printf("Iniciar [1]\nSair [2]\nEscreva aqui: ");
    scanf("%c", &opt);
    switch(opt){
        case '1': {
            shipPos();

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