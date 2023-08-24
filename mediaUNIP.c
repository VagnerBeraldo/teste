#include <stdio.h>  //biblioteca padrão para todos os programas
#include <locale.h> //biblioteca para adequação do texto ao português (uso de acento, ç e outros)
#include <stdlib.h> //biblioteca para dar um pause na janela, para execução direto do arquivo exe, caso contrário a janela abriria e fecharia em seguida

// média ponderada, cálculo da nota da UNIP

int main(){
	//instrução necessária para adequar o texto a língua Portuguesa
	setlocale(LC_ALL, "Portuguese");

	//declaração de constante
	#define PESO_NP 4
	#define PESO_PIM 2

	//declaração de variáveis
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
	
	//cálculo da média semestral
	float ms = ((notaPrimeiraProva * PESO_NP) + (notaSegundaProva * PESO_NP) + (pim * PESO_PIM)) / 10;
	
	
	//saída de dados
	printf("\n");
	printf("----------------------\n");
	printf("   MÉDIA  SEMESTRAL   \n");
	printf("----------------------\n");
	printf("Aluno: %s", nome);
	printf("\nNota da NP1......%.2f\n", notaPrimeiraProva);
	printf("Nota da NP2......%.2f\n", notaSegundaProva);
	printf("Nota do PIM......%.2f\n", pim);
	printf("\nMédia semestral: %.2f \n", ms);
	
	//saída de dado com estrutura condicional 
	if (ms >= 7) {
		printf("Condição: Aprovado\n");
	} else if (ms >= 5 && ms < 7) {
			printf("Condição: Exame\n");
	} else {
		printf("Condição: Reprovado\n");
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
