/*-----------------------------------------------------------------------------------------
Desenvolvedor: Jorge Cl�nio da Silva Junior
Local: Bras�lia - DF
Data de cria��o: 28/09/2017
Curso: Engenharia da Computa��o
Semestre: 4� Semestre
-----------------------------------------------------------------------------------------*/
/*Inicio Bibliotecas*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*Fim Bibliotecas*/
//-----------------------------------------------------------------------------------------
/*Inicio Fun��es*/
float soma(){
	
	float a, b, r;
	
	printf("Insira o valor de A: ");
	scanf("%f",&a);
	printf("Insira o valor de B: ");
	scanf("%f",&b);
	r=a+b;
	printf("\nA soma de A e B e: %.2f\n\n",r);
}

float subtrair(){
	
	float a, b, r;
	
	printf("Insira o valor de A: ");
	scanf("%f",&a);
	printf("Insira o valor de B: ");
	scanf("%f",&b);
	r=a-b;
	printf("\nA subtracao entre A e B e: %.2f\n\n",r);
}

float multiplicar(){
	
	float a, b, r;
	
	printf("Insira o valor de A: ");
	scanf("%f",&a);
	printf("Insira o valor de B: ");
	scanf("%f",&b);
	r=a*b;
	printf("\nA multiplicacao entre A e B e: %.2f\n\n",r);
}

float dividir(){
	
	float a, b, r;
	
	printf("Insira o valor de A: ");
	scanf("%f",&a);
	printf("Insira o valor de B: ");
	scanf("%f",&b);
	r=a/b;
	printf("\nA divis�o entre A e B e: %.2f\n\n",r);
}

void menu_principal(){
	
	int opcao;

	do{
		system("cls || clear");
		printf("MENU PRINCIPAL\n\n");
		printf("1. Somar\n");
		printf("2. Subtrair\n");
		printf("3. Multiplicar\n");
		printf("4. Dividir\n\n");
		printf("0. Sair\n");
		
		printf("\nOpcao: ");
		scanf("%d",&opcao);
	
		switch(opcao){
			case 0:
				system("cls || clear");
				printf("Saindo....\n\n");
				system("pause");
				break;
			case 1:
				system("cls || clear");
				soma();
				system("pause");
				break;
			case 2:
				system("cls || clear");
				subtrair();
				system("pause");
				break;
			case 3:
				system("cls || clear");
				multiplicar();
				system("pause");
				break;
			case 4:
				system("cls || clear");
				dividir();
				system("pause");
				break;
			default:
				system("cls || clear");
				printf("Opcao invalida!\n\n");
				system("pause");
				break;
		}
	}while(opcao!=0);
}
/*Fim Fun��es*/
//-----------------------------------------------------------------------------------------
/*Inicio Chamada das Fun��es*/
float soma();
float subtrair();
float multiplicar();
float dividir();
void menu_principal();
/*Fim Chamada das Fun��es*/
//-----------------------------------------------------------------------------------------
/*Inicio Main (Fun��o principal)*/
int main(void){
	
	system("color 0A");
	setlocale(LC_ALL, "Portuguese");
	menu_principal();
	
	getch();
	return 0;
}
/*Fim Main (Fun��o principal)*/
//-----------------------------------------------------------------------------------------
