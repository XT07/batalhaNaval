#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char tabP1[11][11][4];
char tabP2[11][11][4];
char *nums[10] = {" 1 "," 2 "," 3 "," 4 "," 5 "," 6 "," 7 "," 8 "," 9 "," 10"};
char *leters[10] = {" A "," B "," C "," D "," E "," F "," G "," H "," I "," J "};

void menu();

int gerarTabP1(int pos1N1, int pos2N1, int pos3N1, int pos1N2, int pos2N2, int pos1N3, int pos2N3, int pos3N3, int posN3){
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

int gerarTabP2(int pos1N1, int pos2N1, int pos3N1, int pos1N2, int pos2N2, int pos1N3, int pos2N3, int pos3N3, int posN3){
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

void getDirect(){

}

void shipPos(){
    int shipNum;

    system("cls");

    printf("Escolha as posicoes dos navius\n\n");
    for(int i = 0; i <=2; i++){
        system("cls");

        int pos1N1, pos2N1, pos3N1, pos1N2, pos2N2, pos3N2, pos1N3, pos2N3, pos3N3, pos4N3, pos5N3;
        char 
        int direct1, direct2, direct3;
        int ships[10] = {pos1N1, pos2N1, pos3N1, pos1N2, pos2N2, pos3N2, pos1N3, pos2N3, pos3N3, pos4N3, pos5N3};
        int shipsDirection[3] = {direct1, direct2, direct3};

        printf("Escolha as cordenadas do naviu %d\n\n", i + 1);
        switch(i){
            case 0: {
                char direct;
                do{
                    printf("Ele ficara em qual direcao ?\nHorizontal [1]\nVertical [2]\nEscolha: ");
                    scanf("%d", &direct);
                }while(direct != '1' && direct != '2');


                switch(direct){
                    case 1: {
                        do{
                            printf("\n\nEscolha a linha que ele ficara: ");
                            scanf("%d", &pos1N1);
                            if()
                        }while(pos1N1 <= 0 && pos1N1 >= 11);
                        printf("\n\nEscolha a posicao da primeira coluna: ");
                        scanf("%d", &pos2N1);
                        printf("\n\nEscolha a posicao da segunda coluna: ");
                        scanf("%d", &pos3N1);

                        break;
                    }

                    case 2: {
                        printf("\n\nEscolha a coluna que ele ficara: ");
                        scanf("%d", &pos1N1);
                        printf("\n\nEscolha a posicao da primeira linha: ");
                        scanf("%d", &pos2N1);
                        printf("\n\nEscolha a posicao da segunda linha: ");
                        scanf("%d", &pos3N1);

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
                int direct;
                do{
                    printf("Ele ficara em qual direcao ?\nHorizontal [1]\nVertical [2]\nEscolha: ");
                    scanf("%d", &direct);
                }while(direct != '1' && direct != '2');

                switch(direct){
                    case 1: {
                        printf("\n\nEscolha a linha que ele ficara: ");
                        scanf("%d", &pos1N2);
                        printf("\n\nEscolha a posicao da primeira coluna: ");
                        scanf("%d", &pos2N2);
                        printf("\n\nEscolha a posicao da segunda coluna: ");
                        scanf("%d", &pos3N2);

                        break;
                    }

                    case 2: {
                        printf("\n\nEscolha a coluna que ele ficara: ");
                        scanf("%d", &pos1N2);
                        printf("\n\nEscolha a posicao da primeira linha: ");
                        scanf("%d", &pos2N2);
                        printf("\n\nEscolha a posicao da segunda linha: ");
                        scanf("%d", &pos3N2);

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
                int direct;
                do{
                    printf("Ele ficara em qual direcao ?\nHorizontal [1]\nVertical [2]\nEscolha: ");
                    scanf("%d", &direct);
                }while(direct != '1' && direct != '2');

                switch(direct){
                    case 1: {
                        printf("\n\nEscolha a linha que ele ficara: ");
                        scanf("%d", &pos1N3);
                        printf("\n\nEscolha a posicao da primeira coluna: ");
                        scanf("%d", &pos2N3);
                        printf("\n\nEscolha a posicao da segunda coluna: ");
                        scanf("%d", &pos3N3);
                        printf("\n\nEscolha a posicao da terceira coluna: ");
                        scanf("%d", &pos4N3);
                        printf("\n\nEscolha a posicao da quarta coluna: ");
                        scanf("%d", &pos5N3);

                        break;
                    }

                    case 2: {
                        printf("\n\nEscolha a coluna que ele ficara: ");
                        scanf("%d", &pos1N3);
                        printf("\n\nEscolha a posicao da primeira linha: ");
                        scanf("%d", &pos2N3);
                        printf("\n\nEscolha a posicao da segunda linha: ");
                        scanf("%d", &pos3N3);
                        printf("\n\nEscolha a posicao da terceira linha: ");
                        scanf("%d", &pos4N3);
                        printf("\n\nEscolha a posicao da quarta linha: ");
                        scanf("%d", &pos5N3);

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