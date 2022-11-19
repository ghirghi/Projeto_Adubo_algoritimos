#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
-------------------------------------------------------------------
DECLARAÇÃO DE VARIAVEIS*/

void declarar() {

	const int numero = 10;
	char areas[numero];
	double fosforo[numero];
	int tamanho[numero];
	int resultados[numero];
	int total_adubo[numero];

	printf("Insira valores de acordo com a ordem: \n Areas\n Valor de P\n Tamanho\n. ");

	for(int i = 0; i < numero; i++) {
		printf("insira o valor %d\n", numero+1);
		scanf("%c", &areas[numero]);
	}

	for (int i = 0; i < numero; i++) {
		printf("insira o valor %d\n", numero + 1);
		scanf("%f", &fosforo[numero]);
	}

	for (int i = 0; i < numero; i++) {
		printf("insira o valor %d\n", numero + 1);
		scanf("%d", &tamanho[numero]);
	}



}
/* fim declaração de testes
-------------------------------------------------------------------
*/



/*
-------------------------------------------------------------------
 A FUNÇÃO EXIBIR COMEÇA A PARTIR DAQUI

AQUI TEMOS A EXIBIÇÃO DE RESULTADOS

OBJETIVOS:
1. POSSIBILITAR AO USUÁRIO QUE VEJA OS RESULTADOS E OS VALORES QUE LEVARAM AO RESULTADO



-----------------MAPA: (a ordem pode estar errada)--------------

	exibir_menu1()

		IF SELECIONA == 1
			exibir_fosforo()
			exibir_taxa()
			exibir_total()
			exibir_nomes()
			exibir_tudo()


		IF SELECIONA == 2
		sair()

-------------------------------------------------------------------
*/



int exibir_menu1();

int exibir_oque();

int exibir_fosforo();
int exibir_taxa();
int exibir_total();
int exibir_nomes();
int exibir_tudo();



int main() {

	declarar();

	exibir_menu1();



	return 0;

}



int exibir_menu1()
{
	int seleciona_func = 0, qual_func = 0;
	int seleciona = 0, mostrador = 0;

	/*
	-------------------------------------------------------------------
	AQUI VAMOS PERGUNTAR QUAL OPERAÇÃO ELE QUER FAZER
	AS OPERAÇÕES DE "EXIBIR LISTAGEM" E "EDITAR" POSSUEM SUB-OPERAÇÕES (O TERMO QUE USEI PODE ESTAR ERRADO MAS O IMPORTANTE É ENTENDER)
	ATRAVÉS DE UMA FUNÇAO PARA LISTAR (FUN. exibir_menu1()) E FILTRAR O RESULTADO E FUNCOES PARA CADA OPERAÇÃO (exibir_oque() E editar_oque()) 
	
	*/

		printf("Selecione a opcao da lista abaixo digitando o número da opcao: \n");
	while (seleciona < 1) {

		printf("Opcao 1: exibir listagem\n Opcao 2: editar\n Opcao 3: sair\n");
		scanf("%d", &seleciona);
		
	}
	//-------------------------------------------------------------------
	//FIM DO LAÇO DE SELEÇÃO INICIAL


	/*
	-------------------------------------------------------------------
	INICIO DA SELEÇÃO MAIS DETALHADA

	MAPA
	IF SELECIONA == 1
		IF QUAL_FUNC == 1
			exibir_fosforo()
		IF QUAL_FUNC == 2
			exibir_taxa()
		IF QUAL_FUNC == 3
			exibir_total()
		IF QUAL_FUNC == 4
			exibir_nomes()
		IF QUAL_FUNC == 5
			exibir_tudo()
		IF QUAL_FUNC == 6
			VOLTAR MENU 1
		
	*/
	if (seleciona == 1	) {
		//LISTAR;
		printf("Selecione a opcao da lista abaixo digitando o número da opcao: \n");
		while (qual_func < 1) {
			printf("Opcao 1: exibir fosforo \n Opcao 2: exibir taxa \n Opcao 3: exibir_total \n Opcao 4: exibir nomes  \n Opcao 5: exibir tudo \n Opcao 6: retornar ao menu \n");
			scanf("%d", &qual_func);

			if (qual_func == 1) {
				//exibir fosforo
				exibir_fosforo();
			}
			else if( qual_func == 2){
				//exibir taxa
				exibir_taxa();

			}
			else if (qual_func == 3) {
				//exibir total
				exibir_total();

			}
			else if (qual_func == 4) {
				//exibir nomes
				exibir_nomes();
			}
			else if (qual_func == 5) {
				//exibir tudo
				exibir_tudo();

			}
			else if (qual_func == 6) {
				//retornar

			}
			else {
				//invalido

				printf("OPCAO INVALIDA!!!\n");
				qual_func = 0;

			}
		}
	}

	else if (seleciona == 2) {
		//SAIR;
		return 2;

	}
	else {
		printf("OPCAO INVALIDA!\n");
		exibir_menu1();
	}


}


int exibir_fosforo() {
	int elemento_fosforo = 0;
	for (; elemento_fosforo < numero; elemento_fosforo ++) {
		printf("%d valor de fosforo é : %.2f\n", elemento_fosforo + 1, fosforo[elemento_fosforo]);
	}
}
int exibir_taxa() {



}
int exibir_total() {



}
int exibir_nomes() {



}
int exibir_tudo() {



}