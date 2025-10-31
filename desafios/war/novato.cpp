/*Bibliotecas necessárias: inclua as bibliotecas stdio.h e string.h.*/
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

/* 
Criação da struct: definir uma struct chamada Territorio com os campos char nome[30], char cor[10] e int tropas.
*/

typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;


Territorio* CadastrarTerritorio(int totalTerritorios) ;
void MostrarTerritorios(Territorio* territorios, int totalTerritorios);



int main() {
   printf("Bem vindo ao jogo War!\n");
    int totalTerritorios = 0;

    printf("Quantos territorios você deseja cadastrar?");
    scanf("%d", &totalTerritorios);

    /*  
    Entrada dos dados: utilize um laço for para preencher os dados dos 5 territórios.
    */
    Territorio* territoriosCadastrados = CadastrarTerritorio(totalTerritorios);

    /*  
    Exibição: percorra, após o cadastro, o vetor e exiba os dados de cada território com formatação clara.
    */
    MostrarTerritorios(territoriosCadastrados, totalTerritorios);

   return 0;
}



/*
Cadastro dos territórios: o sistema deve permitir que o usuário cadastre cinco territórios informando o nome, cor do exército e o número de tropas de cada um.
*/

Territorio* CadastrarTerritorio(int totalTerritorios) {
    Territorio* territorios;

    /*  
    Declaração de vetor de structs: crie um vetor com capacidade para armazenar 5 estruturas do tipo Territorio.
    */
    territorios = (Territorio*)malloc(totalTerritorios * sizeof(Territorio));

    for (int i = 0; i < totalTerritorios; i++) {
        
        printf("Digite o nome do %dº/%d território: ",i+1, totalTerritorios);
        scanf("%s", territorios[i].nome);
        printf("Digite a cor do exército do %dº/%d território: ",i+1, totalTerritorios);
        scanf("%s", territorios[i].cor);
        printf("Digite o número de tropas do %dº/%d território: ",i+1, totalTerritorios);
        scanf("%d", &territorios[i].tropas);
    }

    return territorios;
}

void MostrarTerritorios(Territorio* territorios, int totalTerritorios) {
    for (int i = 0; i < totalTerritorios; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].cor);
        printf("Número de Tropas: %d\n\n", territorios[i].tropas);
    }
}







   