#include <stdio.h>
//Algoritimo Selection Sort Crescente
void boubbleSort(int vetor[], int tamanho){
    int i, j, aux;
    for(i = 0; i < tamanho - 1; i++){
        for(j = 0;j < tamanho - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    

    }
    
}


void selectionSort(int vetor[], int tamanho){
    //Ordem crescente
    int i, j, menor, aux;

    for(i = 0; i < tamanho - 1; i++){
        menor = i;
        for(j = 0; j < tamanho; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }

        }
        aux = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = aux;

    } 
}

void insertionSort(int vetor[], int n){
    int i, j, aux;
    for(i = 1; i < n; i++){
        aux = vetor[i];
        j = i - 1;
        while(j >= 0 && vetor[j] > aux){
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = aux; 
    }
}


int main(){
    //Este programa ira ordenar em ordem crescente um vetor de 10 elementos
    int v[10] = {3, 4, 5, 1, 2, 9, 8, 7, 6, 0};

   
    return 0;
}