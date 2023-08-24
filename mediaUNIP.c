#include <stdio.h>  //biblioteca padr�o para todos os programas
#include <locale.h> //biblioteca para adequa��o do texto ao portugu�s (uso de acento, � e outros)
#include <stdlib.h> //biblioteca para dar um pause na janela, para execu��o direto do arquivo exe, caso contr�rio a janela abriria e fecharia em seguida

// m�dia ponderada, c�lculo da nota da UNIP

int main(){
	//instru��o necess�ria para adequar o texto a l�ngua Portuguesa
	setlocale(LC_ALL, "Portuguese");

	//declara��o de constante
	#define PESO_NP 4
	#define PESO_PIM 2

	//declara��o de vari�veis
	char nome[50];
	float notaPrimeiraProva, notaSegundaProva, pim;

	//entrada de dados
	printf("Qual o seu primeiro nome? ");
	scanf("%[^\n]s", nome);
	
	printf("\nInsira a nota da NP1 = ");
	scanf("%f", &notaPrimeiraProva);
	
	printf("\nInsira a nota da NP2 = ");
	scanf("%f", &notaSegundaProva);
	
	printf("\nInsira a nota do PIM = ");
	scanf("%f", &pim);
	
	//c�lculo da m�dia semestral
	float ms = ((notaPrimeiraProva * PESO_NP) + (notaSegundaProva * PESO_NP) + (pim * PESO_PIM)) / 10;
	
	
	//sa�da de dados
	printf("\n");
	printf("----------------------\n");
	printf("   M�DIA  SEMESTRAL   \n");
	printf("----------------------\n");
	printf("Aluno: %s", nome);
	printf("\nNota da NP1......%.2f\n", notaPrimeiraProva);
	printf("Nota da NP2......%.2f\n", notaSegundaProva);
	printf("Nota do PIM......%.2f\n", pim);
	printf("\nM�dia semestral: %.2f \n", ms);
	
	//sa�da de dado com estrutura condicional 
	if (ms >= 7) {
		printf("Condi��o: Aprovado\n");
	} else if (ms >= 5 && ms < 7) {
			printf("Condi��o: Exame\n");
	} else {
		printf("Condi��o: Reprovado\n");
	}
	printf("----------------------\n");
	
	system("pause");
return 0;
}


/*
calculoMedia(int , int){
	
	float ms = ((notaPrimeiraProva * PESO_NP) + (notaSegundaProva * PESO_NP) + (pim * PESO_PIM)) / 10;
	
}
*/
