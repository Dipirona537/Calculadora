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
	printf("Programa para resolução de diversos problemas matemáticos\n");
	printf("Utilize valores padrão do SI (metro, grama, segundo, kelvin, ampère, etc...)\n");
	printf("Caso o programa der certo adicionaremos mais fórmulas conforme o tempo passa.\n");
		Sleep(500);
		printf("-----\n");
		printf("Escolha o tipo de problema que deseja resolver:\n");
		printf("1 - Bhaskara\n2 - Área Triângulo\n3 - Área Quadrado\n4 - Área Círculo\n5 - Área Cone\n6 - Área Trapézio\n99 - Créditos\n");
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
	printf("Digite apenas os valores numéricos de cada letra\n");
    comecobhaskara:
	printf("Digite o primeiro número (A).\n");
	scanf_s("%d", &a);
	printf("Digite o segundo número (B).\n");
	scanf_s("%d", &b);
	printf("Digite o terceiro número (C).\n");
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
		printf("Area do Triângulo\n");
		printf("Escolha qual tipo de triângulo calcular a área.\n");
		printf("-----\n");
		printf("1 - Triângulo Retângulo usando a.h / 2\n2 - Triângulo Retângulo usando b.c / 2\n3 - Triângulo Equilátero\n4 - Triângulo Isósceles\n5 - Triângulo Escaleno\n");
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
			printf("Triângulo Equilátero\n");
			printf("Insira a Base do triângulo\n");
			  scanf_s("%d",&b);
			printf("Agora insira a Altura\n");
			  scanf_s("%d", &h);
			  area_tri_3 = (b*h) / 2;
			  printf("A área é: %.2dm^2\n", area_tri_3);
			  printf("\n");
			  printf("Passo a passo\n");
			  /*passo a passo area_tri_3*/
			  printf("Área = %.2d*%.2d / 2\n", b, h);
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
		printf("Dipirona537 - Gabriel Guimarães\n");
		system("Pause");
		return 0;
	}
}
