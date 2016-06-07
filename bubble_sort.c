#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int i, j, cont, comp, aux;
int vetor[MAX];
time_t in, fi;

void lista_aleatoria(){
    printf("\tCRIANDO LISTA ALEATORIA...\n\n");
    for(i=0 ; i < MAX ; i++){
        vetor[i] = rand()%MAX;
        printf("%d, ", vetor[i]);
    }
}

void bubble_cresc(){
    printf("\n\n\tORDENANDO LISTA EM ORDEM CRESCENTE...\n\n");
    in = clock();
    cont = 0;
    for (i=0; i < MAX; i++){
        for(j = 0; j < MAX; j++){
            comp++;
            if(vetor[j] > vetor[i]){
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
                cont++;
            }
        }
    }
    fi = clock();
}

void bubble_decres(){
    printf("\n\n\tORDENANDO LISTA EM ORDEM DECRESCENTE...\n\n");
    in = clock();
    cont = 0;
    for (i=0; i < MAX; i++){
        for(j = 0; j < MAX; j++){
            comp++;
            if(vetor[j] < vetor[i]){
                aux = vetor[j];
				vetor[j] = vetor[i];
				vetor[i] = aux;
				cont++;
            }
        }
    }
    fi = clock();
}

void imprimir(){
    printf("\tIMPRESSAO DO VETOR ORDENADO\n\n");
    for(i=0 ; i < MAX ; i++){
        printf("%d, ", vetor[i]);
    }

    printf("\n\n\tTEMPO DE ORDENACAO: \t%d s\n", ((fi-in)/100));
    printf("\tCOMPARACOES: \t\t%d\n", comp);
    printf("\tQUANTIDADE DE TROCAS: \t%d\n\n", cont);
}

int main(){
    srand((unsigned) time(NULL));

    lista_aleatoria();

    bubble_cresc();
    
    lista_aleatoria();
    
    bubble_decres();

    imprimir();
    system("pause");

}

