//
// Created by Ricardo Souza on 16/04/2018.
//

#include <stdio.h>
#include <malloc.h>

int origem, destino, dificuldade;

typedef struct PILHA{
    struct PILHA *anterior;
    char conteudo;
}PILHA;

void PUSH(PILHA **topo, char conteudo){

    if(*topo == NULL){
        *topo = (PILHA *) malloc(sizeof(PILHA));

        (*topo)->anterior = NULL;

        (*topo)->conteudo = conteudo;

        return;
    }

    PILHA* temp = (PILHA *) malloc(sizeof(PILHA));

    temp->conteudo = conteudo;
    temp->anterior = *topo;
    *topo = temp;

}
char TOP(PILHA **topo){

    if(*topo == NULL){

        return NULL;

    }

    return (*topo)->conteudo;
}

char POP(PILHA **topo){

    if(*topo == NULL){
        return NULL;
    }

    PILHA* aux = (PILHA *) malloc(sizeof(PILHA));

    aux = *topo;
    (*topo) = (*topo)->anterior;

    return aux->conteudo;
}

void show(PILHA **topo1, PILHA **topo2, PILHA **topo3){

    PILHA *aux1 = *topo1;
    PILHA *aux2 = *topo2;
    PILHA *aux3 = *topo3;

    int b1 = 0, b2 = 0, b3 = 0;

    while(aux1!= NULL || aux2 != NULL || aux3 != NULL){
        if(aux1 != NULL){
            b1++;
            aux1 = aux1->anterior;
        }
        if(aux2 != NULL){
            b2++;
            aux2 = aux2->anterior;
        }
        if(aux3 != NULL){
            b3++;
            aux3 = aux3->anterior;
        }
    }

    aux1 = *topo1;
    aux2 = *topo2;
    aux3 = *topo3;

    b1 = 10-b1;
    b2 = 10 - b2;
    b3 = 10 -b3;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    if(destino == 1) {
        printf("       %c%c%c\n       %cA%c          %c%c%c"
               "\n       %c%c%c          %cB%c           %c%c%c"
               "\n        %c           %c%c%c           %cC%c"
               "\n        %c            %c            %c%c%c\n", 218, 196, 191, 179, 179, 201, 205, 187, 192, 196, 217, 186, 186, 201, 205, 187, 179, 200, 205, 188, 186, 186, 179, 179, 200, 205, 188);

    }
    else if(destino == 2){
        printf(        "       %c%c%c\n       %cA%c          %c%c%c"
                       "\n       %c%c%c          %cB%c           %c%c%c"
                       "\n        %c           %c%c%c           %cC%c"
                       "\n        %c            %c            %c%c%c\n",201,205,187, 186, 186, 218,196,191, 200, 205,188, 179,179,201,205,187, 179,192,196,217, 186, 186, 179, 179,200, 205,188);
    }
    else if(destino == 3){
        printf(        "       %c%c%c"
                       "\n       %cA%c          %c%c%c"
                       "\n       %c%c%c          %cB%c           %c%c%c"
                       "\n        %c           %c%c%c           %cC%c"
                       "\n        %c            %c            %c%c%c\n",201,205,187, 186, 186, 201,205,187, 200, 205,188, 186, 186,218,196,191, 179,200, 205,188, 179,179, 179, 179,192,196,217);

    }
    else if(origem == 1){
        printf("       %c%c%c\n       %cA%c          %c%c%c"
               "\n       %c%c%c          %cB%c           %c%c%c"
               "\n        %c           %c%c%c           %cC%c"
               "\n        %c            %c            %c%c%c\n", 218, 196, 191, 179, 179, 201, 205, 187, 192, 196, 217, 186, 186, 201, 205, 187, 179, 200, 205, 188, 186, 186, 179, 179, 200, 205, 188);


    }
    else if(origem == 2){
        printf(        "       %c%c%c\n       %cA%c          %c%c%c"
                       "\n       %c%c%c          %cB%c           %c%c%c"
                       "\n        %c           %c%c%c           %cC%c"
                       "\n        %c            %c            %c%c%c\n",201,205,187, 186, 186, 218,196,191, 200, 205,188, 179,179,201,205,187, 179,192,196,217, 186, 186, 179, 179,200, 205,188);
    }
    else if(origem == 3){
        printf(        "       %c%c%c\n       %cA%c          %c%c%c"
                       "\n       %c%c%c          %cB%c           %c%c%c"
                       "\n        %c           %c%c%c           %cC%c"
                       "\n        %c            %c            %c%c%c\n",201,205,187, 186, 186, 201,205,187, 200, 205,188, 186, 186,218,196,191, 179,200, 205,188, 179,179, 179, 179,192,196,217);
    }
    else {
        printf(        "       %c%c%c\n       %cA%c          %c%c%c"
                       "\n       %c%c%c          %cB%c           %c%c%c"
                       "\n        %c           %c%c%c           %cC%c"
                       "\n        %c            %c            %c%c%c\n",201,205,187, 186, 186, 201,205,187, 200, 205,188, 186, 186,201,205,187, 179,200, 205,188, 186,186, 179, 179,200, 205,188);
    }



    char t1 = 220, t2 = 179;
    while(aux1!= NULL || aux2 != NULL || aux3 != NULL){
        printf("  ");

        if(b1>0){
            printf("      %c      ", t2);
            b1--;
        }
        else{
            if(aux1 != NULL) {

                if (aux1->conteudo == '1') {
                    printf("      %c      ", t1);
                } else if (aux1->conteudo == '2') {
                    printf("     %c%c%c     ", t1, t1, t1);
                } else if (aux1->conteudo == '3') {
                    printf("    %c%c%c%c%c    ", t1, t1, t1, t1, t1);
                } else if (aux1->conteudo == '4') {
                    printf("   %c%c%c%c%c%c%c   ", t1, t1, t1, t1, t1, t1, t1);
                } else if (aux1->conteudo == '5') {
                    printf("  %c%c%c%c%c%c%c%c%c  ", t1, t1, t1, t1, t1, t1, t1, t1, t1);
                } else if (aux1->conteudo == '6') {
                    printf(" %c%c%c%c%c%c%c%c%c%c%c ", t1, t1, t1, t1, t1, t1, t1, t1, t1, t1, t1);
                } else if (aux1->conteudo == '7') {
                    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", t1, t1, t1, t1, t1, t1, t1, t1, t1, t1, t1, t1, t1);
                }

                aux1 = aux1->anterior;
            }
        }

        if(b2>0){
            printf("      %c      ", t2);
            b2--;
        }
        else{

            if(aux2 != NULL) {

                if (aux2->conteudo == '1') {
                    printf("      %c      ", t1);
                } else if (aux2->conteudo == '2') {
                    printf("     %c%c%c     ", t1, t1, t1);
                } else if (aux2->conteudo == '3') {
                    printf("    %c%c%c%c%c    ", t1, t1, t1, t1, t1);
                } else if (aux2->conteudo == '4') {
                    printf("   %c%c%c%c%c%c%c   ", t1, t1, t1, t1, t1, t1, t1);
                } else if (aux2->conteudo == '5') {
                    printf("  %c%c%c%c%c%c%c%c%c  ", t1, t1, t1, t1, t1, t1, t1, t1, t1);
                } else if (aux2->conteudo == '6') {
                    printf(" %c%c%c%c%c%c%c%c%c%c%c ", t1, t1, t1, t1, t1, t1, t1, t1, t1, t1, t1);
                } else if (aux2->conteudo == '7') {
                    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", t1, t1, t1, t1, t1, t1, t1, t1, t1, t1, t1, t1, t1);
                }

                aux2 = aux2->anterior;
            }
        }
        if(b3>0){
            printf("       %c      \n", t2);
            b3--;
        }
        else{
            if(aux3 != NULL) {


                if (aux3->conteudo == '1') {
                    printf("       %c      ", t1);
                } else if (aux3->conteudo == '2') {
                    printf("      %c%c%c     ", t1, t1, t1);
                } else if (aux3->conteudo == '3') {
                    printf("     %c%c%c%c%c    ", t1, t1, t1, t1, t1);
                } else if (aux3->conteudo == '4') {
                    printf("    %c%c%c%c%c%c%c   ", t1, t1, t1, t1, t1, t1, t1);
                } else if (aux3->conteudo == '5') {
                    printf("   %c%c%c%c%c%c%c%c%c  ", t1, t1, t1, t1, t1, t1, t1, t1, t1);
                } else if (aux3->conteudo == '6') {
                    printf("  %c%c%c%c%c%c%c%c%c%c%c ", t1, t1, t1, t1, t1, t1, t1, t1, t1, t1, t1);
                } else if (aux3->conteudo == '7') {
                    printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c", t1, t1, t1, t1, t1, t1, t1, t1, t1, t1, t1, t1, t1);
                }

                aux3 = aux3->anterior;
                printf("\n");
            }
        }
    }


    printf("        %c            %c             %c      \n", 193, 193, 193);



    if(destino == 1){
        printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                         ", 192,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    }
    else if( destino == 2){
        printf("              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c            ", 192,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    }
    else if(destino == 3){
        printf("                            %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 192,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
    }
    else if(origem == 1){
        printf(" %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                          ", 200,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    }
    else if( origem == 2){
        printf("              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c             ", 200,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    }
    else if(origem == 3){
        printf("                           %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
    }



}

int move( PILHA **topo2, PILHA **topo1){

    if((TOP(topo1) >= TOP(topo2) || *topo1 == NULL) && TOP(topo2) != NULL){
        PUSH(topo1, POP(topo2));
        return 1;
    }
    return 0;

}

int ganhou(PILHA **topo1, PILHA **topo2){

    PILHA *aux1 = *topo1;
    PILHA *aux2 = *topo2;

    int cont1 = 0, cont2 = 0;

    while(aux1 != NULL){
        aux1 = aux1->anterior;
        cont1++;
    }
    while(aux2 != NULL){
        aux2 = aux2->anterior;
        cont2++;
    }

    if(cont1 == 3 && dificuldade ==1){
        return 1;
    }
    if(cont1 == 5 && dificuldade == 2){
        return 1;
    }
    if(cont1 == 7 && dificuldade == 3){
        return 1;
    }

    if(cont2 == 3 && dificuldade == 1){
        return 1;
    }
    if(cont2 == 5 && dificuldade == 2){
        return 1;
    }
    if(cont2 == 7 && dificuldade == 3){
        return 1;
    }
    return 0;

}



int main() {

    PILHA *topo1 = NULL;

    PILHA *topo2 = NULL;

    PILHA *topo3 = NULL;



    char op1, op2, op3, op4 = 11,op5 = 'S';



    while(op5 == 'S'){

        printf("BEM VINDO AO JOGO TORRE DE HANOI\n");
        printf("      Escolha a dificuldade: \n\n1.Facil\n       2.Medio\n              3.Dificil\n");
        scanf(" %d", &op1);


        origem = 0;
        destino = 0;
        dificuldade = op1;


        topo1 =NULL;
        topo2 = NULL;
        topo3 = NULL;

        do {
            //colocar uma funcao pra esvaziar todas as pilhas
            if (op1 == 1) {

                PUSH(&topo1, '3');
                PUSH(&topo1, '2');
                PUSH(&topo1, '1');
            } else if (op1 == 2) {

                PUSH(&topo1, '5');
                PUSH(&topo1, '4');
                PUSH(&topo1, '3');
                PUSH(&topo1, '2');
                PUSH(&topo1, '1');
            } else if (op1 == 3) {

                PUSH(&topo1, '7');
                PUSH(&topo1, '6');
                PUSH(&topo1, '5');
                PUSH(&topo1, '4');
                PUSH(&topo1, '3');
                PUSH(&topo1, '2');
                PUSH(&topo1, '1');
            }
        }while(op1 != 1 && op1 != 2 && op1 != 3);
        do{


            show(&topo1, &topo2, &topo3);
            if(op4 == 0){
                printf("\nMOVIMENTO INVALIDO\n");
            }

            printf("\nEscolha o pino de origem\n");

            scanf(" %c", &op2);

            origem = 0;
            destino = 0;

            do {

                if (op2 == 'a' || op2 == 'A') {
                    origem = 1;
                } else if (op2 == 'b' || op2 == 'B') {
                    origem = 2;
                } else if (op2 == 'c' || op2 == 'C') {
                    origem = 3;
                }
                else {
                    printf("\nOPCAO INVALIDA!\nDigite outra vez\n");

                    scanf(" %c", &op2);
                }

            }while(op2 != 'a' && op2!= 'A' && op2 != 'b' && op2 != 'B' && op2 != 'c' && op2 != 'C');




            show(&topo1, &topo2, &topo3);
            printf("\nEscolha o pino de destino\n");

            scanf(" %c", &op3);


            do {

                if (op3 == 'a' || op3 == 'A') {
                    destino = 1;
                }
                else if (op3 == 'b' || op3 == 'B') {
                    destino = 2;
                }
                else if (op3 == 'c' || op3 == 'C') {
                    destino = 3;
                }
                else {

                    printf("\nOPCAO INVALIDA!\nDigite outra vez\n");
                    scanf(" %c", &op3);
                }
            }while(op3 != 'a' && op3!= 'A' && op3 != 'b' && op3 != 'B' && op3 != 'c' && op3 != 'C');



            if (origem == 1) {
                if (destino == 2) {
                    op4 = move(&topo1, &topo2);

                } else if (destino == 3) {
                    op4 = move(&topo1, &topo3);

                }
            } else if (origem == 2) {
                if (destino == 1) {
                    op4 = move(&topo2, &topo1);

                } else if (destino == 3) {
                    op4 = move(&topo2, &topo3);

                }
            } else if (origem == 3) {
                if (destino == 1) {
                    op4 = move(&topo3, &topo1);

                } else if (destino == 2) {
                    op4 = move(&topo3, &topo2);

                }
            }
            if (op4 == 0) {
                origem = 0;
                destino = 0;

            }



            if (ganhou(&topo2, &topo3)) {


                show(&topo1, &topo2, &topo3);
                printf("\nPARABENS!!!\nVoce ganhou!\n\n");
                printf("Deseja jogar novamente?\n%c%c%c%c%c%c%c%c S/N %c%c%c%c%c%c%c%c\n\n", 176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176);

                scanf(" %c", &op5);
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                if(op5 == 'S'){

                    //break;
                }

            }

            fflush(stdin);
        }while(!ganhou(&topo2, &topo3));

    }








    return 0;
}