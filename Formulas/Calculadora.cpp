#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main(int)
{
	setlocale(LC_ALL, "Portuguese");
	{
		/*Escolha de formula*/
	int escolha;
	printf("Programa para resolu��o de diversos problemas matem�ticos\n");
	printf("Utilize valores padr�o do SI (metro, grama, segundo, kelvin, amp�re, etc...)\n");
	printf("Caso o programa der certo adicionaremos mais f�rmulas conforme o tempo passa.\n");
		Sleep(500);
		printf("-----\n");
		printf("Escolha o tipo de problema que deseja resolver:\n");
		printf("1 - Bhaskara\n2 - �rea Tri�ngulo\n3 - �rea Quadrado\n4 - �rea C�rculo\n5 - �rea Cone\n6 - �rea Trap�zio\n99 - Cr�ditos\n");
		printf("-----\n");
		scanf_s("%d", &escolha);
		switch (escolha)
		{
		case 1:
			goto bhaskara;
		case 2:
			goto a_triangulo;
		case 3:
			goto bhaskara;
		case 4:
			goto bhaskara;
		case 5:
			goto bhaskara;
		case 6:
			goto bhaskara;
		case 99:
			goto creditos;
		}

	/*bhaskara*/
	bhaskara:
	int a, b, c;
	double raiz, delta, resultado1, resultado2;
	printf("Calculadora de Bhaskara\n");
	printf("Digite apenas os valores num�ricos de cada letra\n");
    comecobhaskara:
	printf("Digite o primeiro n�mero (A).\n");
	scanf_s("%d", &a);
	printf("Digite o segundo n�mero (B).\n");
	scanf_s("%d", &b);
	printf("Digite o terceiro n�mero (C).\n");
	scanf_s("%d", &c);
	printf("Processando resultados aguarde.\n");
	delta = (b * b) - 4 * a * c;
	raiz = sqrt(delta);
	resultado1 = (-b + raiz) / (2 * a);
	resultado2 = (-b - raiz) / (2 * a);
	if (delta < 0) {
		printf("Raiz negativa ou indefinida\n");
		goto comecobhaskara;
	}
	else {
		printf("Os resultados obtidos foram:\n");
		printf("X1 = %.2f\n", resultado1);
		printf("X2 = %.2f\n", resultado2);
		printf("delta = %.2f\n", delta);
		printf("raiz = %.2f\n", raiz);
		printf("\n");
		printf("-----Passo a passo-----\n"); 	/*passo a passo*/
		printf("\n");
		printf("(%dx^2) + (%dx) + (%d) = 0\n", a, b, c);
		printf("Delta = (%d * %d) -4 * (%d) * (%d)\n", b, b, a, c);
		printf("Xs = -(%d) +- (%.2f) / 2 * (%d)\n", b, raiz, a);
		printf("X1 = -(%d) + (%.2f) / (2 * %d)\n", b, raiz, a);
		printf("X2 = -(%d) - (%.2f) / (2 * %d)\n", b, raiz, a);
		printf("\n");
		system("Pause");
		return 0;
	}
	}
	{
		/*Area triangulo*/
		a_triangulo:
		int escolha_triangulo;
		printf("Area do Tri�ngulo\n");
		printf("Escolha qual tipo de tri�ngulo calcular a �rea.\n");
		printf("-----\n");
		printf("1 - Tri�ngulo Ret�ngulo usando a.h / 2\n2 - Tri�ngulo Ret�ngulo usando b.c / 2\n3 - Tri�ngulo Equil�tero\n4 - Tri�ngulo Is�sceles\n5 - Tri�ngulo Escaleno\n");
		printf("-----\n");
		scanf_s("%d", &escolha_triangulo);
		switch (escolha_triangulo)
		{
		case 1:
			goto triangulo1;
		case 2:
			goto triangulo2;
		case 3:
			goto triangulo3;
		case 4:
			goto triangulo4;
		case 5:
			goto triangulo5;
		}
		{
		triangulo1: /*Triangulo retangulo usando a.h / 2*/
			printf("funcionando");
			return 0;
		}
		{
		triangulo2:
			printf("funcionando");
			return 0;
		}
		{
		triangulo3:
			int b, h, area_tri_3;
			printf("Tri�ngulo Equil�tero\n");
			printf("Insira a Base do tri�ngulo\n");
			  scanf_s("%d",&b);
			printf("Agora insira a Altura\n");
			  scanf_s("%d", &h);
			  area_tri_3 = (b*h) / 2;
			  printf("A �rea �: %.2dm^2\n", area_tri_3);
			  printf("\n");
			  printf("Passo a passo\n");
			  /*passo a passo area_tri_3*/
			  printf("�rea = %.2d*%.2d / 2\n", b, h);
			system("Pause");
			return 0;
		}
		{
		triangulo4:
			printf("funcionando");
			return 0;
		}
		{
		triangulo5:
			printf("funcionando");
			return 0;
		}
		return 0;
	}









	{
	creditos:
		printf("Pessoas que ajudaram a desenvolver esse app\n");
		Sleep(1000);
		printf("Dipirona537 - Gabriel Guimar�es\n");
		system("Pause");
		return 0;
	}
}
