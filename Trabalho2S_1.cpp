/*
NOSSO OBJETIVO � QUE O USU�RIO INSIRA DADOS, ELES SEJAM PROCESSADOS E RETORNEMOS INFORMA��ES
UTEIS

OS DADOS QUE IREMOS TRABALHAR S�O DE NATUREZA AGRON�MICA
BASICAMENTE O USUARIO NOS INFORMA A QUANTIA DE FOSFORO NA AREA DELE E LHE RETORNAMOS
QUANTO ELE PRECISA ADUBAR E QUANTO DE ADUBO ELE VAI GASTAR


-----------ATEN��O---------

F�RMULA: (-((("valor de fosforo" - 30) * 2.9) + 173))

A FORMULA USADA PARA CALCULAR O FOSFORO VEIO ATRAV�S DA INDICA��O DE UM ENGENHEIRO AGRONOMO
N�O A UTILIZE SEM CONVERSAR COM UM AGRONOMO, A QUANTIA DE ADUBO A SER COLOCADA NO SOLO DEPENDE
DE DIVERSOS FATORES, MAS PELA SIMPLICIDADE DO PROGRAMA A MANTEREMOS.

A F�RMULA N�O DEVE SER USADA SEM INSTRU��O PREVIA


-----------//---------

----------------MAPA----------------
int main(){
1. INSERIR VALORES
	1.1 Nome Area
	1.2 Tamanho area
	1.3 Valor de fosforo da area

2. TRANSFORMAR DADOS EM INFORMA��ES
	2.1 multiplicar a variavel fosforo em uma formula previamente estabelecida
		por agronomos
	2.2 multiplicar o resultado da formula pelo tamanho da area para saber o total

3. EXIBIR AO USU�RIO OS RESULTADOS

void exibir_menu1()
}
exibir_menu1(){

}

----------------MAPA----------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <vector>




void exibir_menu1(int numero_limitador, char areas[], int tamanho[], int fosforo[], int resultados[], int total_adubo[])
{
	int seleciona_func = 0;
	int seleciona = 0;
	/*
	-------------------------------------------------------------------
	 A FUN��O EXIBIR COME�A A PARTIR DAQUI

	AQUI TEMOS A EXIBI��O DE RESULTADOS

	OBJETIVOS:
	1. POSSIBILITAR AO USU�RIO QUE VEJA OS RESULTADOS E OS VALORES QUE LEVARAM AO RESULTADO



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

	-------------------------------------------------------------------
		AQUI VAMOS PERGUNTAR QUAL OPERA��O ELE QUER FAZER
		AS OPERA��ES DE "EXIBIR LISTAGEM" E "EDITAR" POSSUEM SUB-OPERA��ES (O TERMO QUE USEI PODE ESTAR ERRADO MAS O IMPORTANTE � ENTENDER)
		ATRAV�S DE UMA FUN�AO PARA LISTAR (FUN. exibir_menu1()) E FILTRAR O RESULTADO E FUNCOES PARA CADA OPERA��O

	*/


	printf("Selecione a opcao da lista abaixo digitando o n�mero da opcao: \n");
	while (seleciona < 1) {

		printf("Opcao 1: exibir listagem\n Opcao 2: sair\n");
		scanf("%d", &seleciona);


		//-------------------------------------------------------------------
		//FIM DO LA�O DE SELE��O INICIAL


		/*
		-------------------------------------------------------------------
		INICIO DA SELE��O MAIS DETALHADA

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


		int qual_func = 0;

		if (seleciona == 1) {
			//LISTAR;
			printf("Selecione a opcao da lista abaixo digitando o numero da opcao: \n");
			while (qual_func < 1) {
				printf("Opcao 1: exibir fosforo \n Opcao 2: exibir taxa \n Opcao 3: exibir_total \n Opcao 4: exibir nomes  \n Opcao 5: exibir tudo \n  \n");
				scanf("%d", &qual_func);

				if (qual_func == 1) {
					//exibir fosforo
					for (int elemento_fosforo = 0; elemento_fosforo < numero_limitador; elemento_fosforo++) {
						printf("	O %d valor de fosforo e : %d\n", elemento_fosforo + 1, fosforo[elemento_fosforo]);
					}


					qual_func = 0;
				}
				else if (qual_func == 2) {
					//exibir taxa
					for (int elemento_taxa = 0; elemento_taxa < numero_limitador; elemento_taxa++) {
						printf("	A %d taxa e de : %d kg/ha\n", elemento_taxa + 1, resultados[elemento_taxa]);
					}

					qual_func = 0;
				}
				else if (qual_func == 3) {
					//exibir total
					for (int elemento_total = 0; elemento_total < numero_limitador; elemento_total++) {
						printf("	A %d area vai usar %d kg de adubo\n", elemento_total + 1, total_adubo[elemento_total]);
					}

					qual_func = 0;
				}
				else if (qual_func == 4) {
					//exibir nomes
					for (int elemento_nome = 0; elemento_nome < numero_limitador; elemento_nome++) {
						printf("	O %d nome e  : %d\n", elemento_nome + 1, areas[elemento_nome]);
					}

					qual_func = 0;
				}
				else if (qual_func == 5) {
					//exibir tudo
					for (int elemento_tudo = 0; elemento_tudo < numero_limitador; elemento_tudo++) {
						printf("	A %d area possui %d de fosforo, iremos adubar %d de kg/ha, %d kg  de : %d\n", elemento_tudo + 1,fosforo[elemento_tudo], resultados[elemento_tudo], total_adubo[elemento_tudo]);
					}

					qual_func = 0;
				}

				else {
					//Tratamento de erro caso o valor seja incorreto
					//invalido

					printf("OPCAO INVALIDA!!!\n");
					qual_func = 0;

				}
			}
		}

		else if (seleciona == 2) {
			//SAIR;
			exit(0);
		}
		else {
			printf("OPCAO INVALIDA!\n");
			seleciona = 0;
		}
	}
}


int main() {
	const int numero = 500;
	int numero_limitador;
	int processo = 0;
	int contador = 0;

	//Aqui s�o declaradas as bolhas
	//As bolhas servem para armazenar os valores de forma tempor�ria
	//De forma que, se ocorrer um erro podemos reset�-los sem colocar um valor errado no vetor
	char bolha_areas;
	int bolha_tamanho = 0;
	int bolha_fosforo = 0;

	char areas[numero];
	int fosforo[numero];
	int tamanho[numero];
	int resultados[numero];
	int total_adubo[numero];


	//In�cio da intera��o com o usu�rio

	printf("Usuario digite a quantia de areas que deseja trabalhar: \n");
	scanf("%d", &numero_limitador);

	printf("Insira valores de acordo com a ordem: \n 1: Areas\n 2: Valor de P\n 3: Tamanho\n\n\n\n\n. ");
	while (contador < numero_limitador) {

		printf("Informe o nome da area %d:\n ", contador + 1);

		scanf("%s", &bolha_areas);
		//--------------------------------------

		printf("Digite o tamanho da area %d em hectares:\n ", contador + 1);

		scanf("%d", &bolha_tamanho);

		//-----------------------------------------------------------------

		printf("Digite o valor do fosforo da area %d:\n ", contador + 1);
		scanf("%d", &bolha_fosforo);



		//--------------------------------------------------------------------------------

		if ((bolha_fosforo < 1) || (bolha_fosforo > 150)) {

			printf("\nESTE VALOR DE NUTRIENTE E INVALIDO\nINSIRA UM VALOR MAIOR QUE 1 E MENOR QUE 150 \n");

			bolha_areas = 0;
			bolha_tamanho = 0;
			bolha_fosforo = 0;
		}
		else {

			areas[contador] = bolha_areas;
			tamanho[contador] = bolha_tamanho;
			fosforo[contador] = bolha_fosforo;

			contador++;
		}
	}

	/*
	Aqui damos inicio ao processamento dos dados em informa��es relevantes

-----------ATEN��O---------

A FORMULA USADA PARA CALCULAR O FOSFORO VEIO ATRAV�S DA INDICA��O DE UM ENGENHEIRO AGRONOMO
N�O A UTILIZE SEM CONVERSAR COM UM AGRONOMO, A QUANTIA DE ADUBO A SER COLOCADA NO SOLO DEPENDE
DE DIVERSOS FATORES, MAS PELA SIMPLICIDADE DO PROGRAMA A MANTEREMOS.

A F�RMULA N�O DEVE SER USADA SEM INSTRU��O PREVIA

-----------ATEN��O---------
	*/



	while (numero_limitador >= processo) {

		resultados[processo] = (-(((fosforo[processo] - 30) * 2.9)) + 173);

		total_adubo[processo] = resultados[processo] * tamanho[processo];

		processo += 1;
	}




	exibir_menu1(numero_limitador,areas, tamanho, fosforo, resultados, total_adubo);

	return 0;

}
//FIM DA INT MAIN()
//-------------------------------------------------------------------



