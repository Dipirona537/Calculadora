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
			goto quadrado;
		case 4:
			goto circulo;
		case 5:
			goto area_cone;
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
		printf("1 - Tri�ngulo Ret�ngulo\n2 - Tri�ngulo Equil�tero\n3 - Tri�ngulo Is�sceles\n4 - Tri�ngulo Escaleno\n");
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
		}
	}
	{
	triangulo1: 
		/*Area triangulo retangulo*/
		int area_tri_1, h_tri_1, b_tri_1;
		printf("Tri�ngulo Ret�ngulo\n");
		printf("Insira a Base do tri�ngulo\n");
		scanf_s("%d", &b_tri_1);
		printf("Agora insira a Altura\n");
		scanf_s("%d", &h_tri_1);
		area_tri_1 = (b_tri_1 * h_tri_1) / 2;
		printf("A �rea �: %.2dm^2\n", area_tri_1);
		printf("\n");
		printf("Passo a passo\n");
		/*passo a passo area_tri_3*/
		printf("�rea = %.2d*%.2d / 2\n", b_tri_1, h_tri_1);
		system("Pause");
		return 0;
	}
	{
	triangulo2: 
		/*Area tri�ngulo equil�tero*/
		int b, h, area_tri_3;
		printf("Tri�ngulo Equil�tero\n");
		printf("Insira a Base do tri�ngulo\n");
		scanf_s("%d", &b);
		printf("Agora insira a Altura\n");
		scanf_s("%d", &h);
		area_tri_3 = (b * h) / 2;
		printf("A �rea �: %.2dm^2\n", area_tri_3);
		printf("\n");
		printf("Passo a passo\n");
		/*passo a passo area_tri_3*/
		printf("�rea = %.2d*%.2d / 2\n", b, h);
		system("Pause");
		return 0;
	}
	{
	triangulo3: 
		/*Area tri�ngulo is�sceles*/
		int b_tri_2, h_tri_2, area_tri_2;
		printf("Tri�ngulo Is�sceles\n");
		printf("Insira a Base do tri�ngulo\n");
		scanf_s("%d", &b_tri_2);
		printf("Agora insira a Altura\n");
		scanf_s("%d", &h_tri_2);
		area_tri_2 = (b_tri_2 * h_tri_2) / 2;
		printf("A �rea �: %.2dm^2\n", area_tri_2);
		printf("\n");
		printf("Passo a passo\n");
		/*passo a passo area_tri_3*/
		printf("�rea = %.2d*%.2d / 2\n", b_tri_2, h_tri_2);
		system("Pause");
		return 0;
	}
	{
	triangulo4:
		/*Area triangulo escaleno*/
		int b_tri_3, h_tri_3, area_tri_3;
		printf("Tri�ngulo Escaleno\n");
		printf("Insira a Base do tri�ngulo\n");
		scanf_s("%d", &b_tri_3);
		printf("Agora insira a Altura\n");
		scanf_s("%d", &h_tri_3);
		area_tri_3 = (b_tri_3 * h_tri_3) / 2;
		printf("A �rea �: %.2dm^2\n", area_tri_3);
		printf("\n");
		printf("Passo a passo\n");
		/*passo a passo area_tri_3*/
		printf("�rea = %.2d*%.2d / 2\n", b_tri_3, h_tri_3);
		system("Pause");
		return 0;
	}
	{
	quadrado:
		/*Area quadrado*/
		int lado_quadrado, area_quadrado;
		printf("�rea do Quadrado\n");
		printf("Digite o valor do lado do quadrado\n");
		scanf_s("%d", &lado_quadrado);
		area_quadrado = (lado_quadrado * lado_quadrado);
			printf("A �rea � = %.2d\n", area_quadrado);
		/*passo a passo*/
		printf("�rea = %d * %d\n", area_quadrado, area_quadrado);
		system("Pause");
		return 0;
	}
	{
	circulo:
		/*�rea c�rculo*/
		double pi, raio, area_circulo, diametro, perimetro_circulo;;
		printf("�rea do c�rculo\n");
			printf("Defina seu valor de PI (Padr�o do programa = 3,1416)\n");
			scanf_s("%lf", &pi);
			printf("Digite o raio do seu c�rculo\n");
			scanf_s("%lf", &raio);
			area_circulo = (raio * (pow(pi, 2)));
			perimetro_circulo = (2 * pi) * raio;
			diametro = (2 * raio);
			printf("�rea = %.4f\n", area_circulo);
			printf("Per�metro = %.4f\n", perimetro_circulo);
			/*passo a passo*/
			printf("�rea = %.4f * %f^2\n", pi, raio);
			printf("Per�metro = (2 * %.4f) * %f\n", pi, raio);
			printf("Di�metro = %f * 2\n", raio);
			system("Pause");
			return 0;
	}
	{
	area_cone:
		printf("�rea cone teste");
		system("Pause");
		return 0;
	}
	
	
	
	{
		{
		creditos:
			printf("Pessoas que ajudaram a desenvolver esse app\n");
			Sleep(1000);
			printf("Dipirona537 - Gabriel Guimar�es\n");
			system("Pause");
			return 0;
		}
	}
}