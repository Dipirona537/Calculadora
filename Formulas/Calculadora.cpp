#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#include <WinUser.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");
	{
	selecionar_programa:
		/*Escolha de formula*/
		int escolha;
		printf("Programa para resolução de diversos problemas matemáticos\n");
		printf("Utilize valores padrão do SI (metro, grama, segundo, kelvin, ampère, etc...)\n");
		//printf("Caso o programa der certo adicionaremos mais fórmulas conforme o tempo passa.\n");
		Sleep(500);
		printf("-----\n");
		printf("Escolha o tipo de problema que deseja resolver:\n");
		printf("1 - Bhaskara\n2 - Área Triângulo\n3 - Área Quadrado\n4 - Área Círculo\n5 - Área Cone\n6 - Área Trapézio\n7 - Conversão Binário e Hex\n8 - Teste número primo\n9 - Calculadora seno, cosseno e tangente\n99 - Créditos\n100 - Sair do programa\n");
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
			goto trapezio;
		case 7:
			goto conversor;
		case 8:
			goto teste_primo;
		case 9:
			goto calculadorasenos;
		case 99:
			goto creditos;
		case 100:
			goto fechar;
		default:
			printf("Confire o que você digitou\n");
			Sleep(1000);
			goto selecionar_programa;
		}

		/*bhaskara*/
		{
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
				goto selecionar_programa;
			}
		}

		{
			/*Area triangulo*/
		a_triangulo:
			int escolha_triangulo;
			printf("Area do Triângulo\n");
			printf("Escolha qual tipo de triângulo calcular a área.\n");
			printf("-----\n");
			printf("1 - Triângulo Retângulo\n2 - Triângulo Equilátero\n3 - Triângulo Isósceles\n4 - Triângulo Escaleno\n");
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
			printf("Triângulo Retângulo\n");
			printf("Insira a Base do triângulo\n");
			scanf_s("%d", &b_tri_1);
			printf("Agora insira a Altura\n");
			scanf_s("%d", &h_tri_1);
			area_tri_1 = (b_tri_1 * h_tri_1) / 2;
			printf("A área é: %.2dm^2\n", area_tri_1);
			printf("\n");
			printf("Passo a passo\n");
			/*passo a passo area_tri_3*/
			printf("Área = %.2d*%.2d / 2\n", b_tri_1, h_tri_1);
			system("Pause");
			goto selecionar_programa;
		}

		{
		triangulo2:
			/*Area triângulo equilátero*/
			int b, h, area_tri_3;
			printf("Triângulo Equilátero\n");
			printf("Insira a Base do triângulo\n");
			scanf_s("%d", &b);
			printf("Agora insira a Altura\n");
			scanf_s("%d", &h);
			area_tri_3 = (b * h) / 2;
			printf("A área é: %.2dm^2\n", area_tri_3);
			printf("\n");
			printf("Passo a passo\n");
			/*passo a passo area_tri_3*/
			printf("Área = %.2d*%.2d / 2\n", b, h);
			system("Pause");
			goto selecionar_programa;
		}

		{
		triangulo3:
			/*Area triângulo isósceles*/
			int b_tri_2, h_tri_2, area_tri_2;
			printf("Triângulo Isósceles\n");
			printf("Insira a Base do triângulo\n");
			scanf_s("%d", &b_tri_2);
			printf("Agora insira a Altura\n");
			scanf_s("%d", &h_tri_2);
			area_tri_2 = (b_tri_2 * h_tri_2) / 2;
			printf("A área é: %.2dm^2\n", area_tri_2);
			printf("\n");
			printf("Passo a passo\n");
			/*passo a passo area_tri_3*/
			printf("Área = %.2d*%.2d / 2\n", b_tri_2, h_tri_2);
			system("Pause");
			goto selecionar_programa;
		}

		{
		triangulo4:
			/*Area triangulo escaleno*/
			int b_tri_3, h_tri_3, area_tri_3;
			printf("Triângulo Escaleno\n");
			printf("Insira a Base do triângulo\n");
			scanf_s("%d", &b_tri_3);
			printf("Agora insira a Altura\n");
			scanf_s("%d", &h_tri_3);
			area_tri_3 = (b_tri_3 * h_tri_3) / 2;
			printf("A área é: %.2dm^2\n", area_tri_3);
			printf("\n");
			printf("Passo a passo\n");
			/*passo a passo area_tri_3*/
			printf("Área = %.2d*%.2d / 2\n", b_tri_3, h_tri_3);
			system("Pause");
			goto selecionar_programa;
		}

		{
		quadrado:
			/*Area quadrado*/
			int lado_quadrado, area_quadrado;
			printf("Área do Quadrado\n");
			printf("Digite o valor do lado do quadrado\n");
			scanf_s("%d", &lado_quadrado);
			area_quadrado = (lado_quadrado * lado_quadrado);
			printf("A área é = %.2dm^2\n", area_quadrado);
			/*passo a passo*/
			printf("Área = %d * %d\n", area_quadrado, area_quadrado);
			system("Pause");
			goto selecionar_programa;
		}

		{
		circulo:
			/*Área círculo*/
			double pi, raio, area_circulo, diametro, perimetro_circulo;;
			printf("Área do círculo\n");
			printf("Defina seu valor de PI (Padrão do programa = 3,1416)\n");
			scanf_s("%lf", &pi);
			printf("Digite o raio do seu círculo\n");
			scanf_s("%lf", &raio);
			area_circulo = (pi * (pow(raio, 2)));
			perimetro_circulo = (2 * pi) * raio;
			diametro = (2 * raio);
			printf("Área = %.4fm^2\n", area_circulo);
			printf("Perímetro = %.4fm\n", perimetro_circulo);
			/*passo a passo*/
			printf("Área = %.4f * %fm^2\n", pi, raio);
			printf("Perímetro = (2 * %.4fm) * %f\n", pi, raio);
			printf("Diâmetro = %.fm\n", diametro);
			system("Pause");
			goto selecionar_programa;
		}

		{
		area_cone:
			/*area cone*/
			double geratriz, geratriz_comeco, raio_cone, altura_cone, area_cone_total, area_cone_total_1, area_cone_base, area_cone_lateral, pi_cone, volume_cone;
			printf("Área do Cone\n");
			printf("Digite o valor de pi que deseja usar (Padrão 3,1416)\n");
			scanf_s("%lf", &pi_cone);
			printf("Digite o raio do cone\n");
			scanf_s("%lf", &raio_cone);
			printf("Digite a altura do cone\n");
			scanf_s("%lf", &altura_cone);
			printf("\n");
			/*Calculos*/
			printf("Passo a Passo\n");
			printf("\n");
			geratriz_comeco = ((pow(raio_cone, 2)) + (pow(altura_cone, 2)));
			geratriz = sqrt(geratriz_comeco);
			area_cone_base = (pi_cone * (pow(raio_cone, 2)));
			area_cone_lateral = ((pi_cone * raio_cone) * (geratriz));
			area_cone_total_1 = (raio_cone + geratriz);
			area_cone_total = ((pi_cone) * ((raio_cone * area_cone_total_1)));
			volume_cone = (((pi_cone * (pow(raio_cone, 2))) * altura_cone) / (3));
			printf("Área total = %.4fm^2\n", area_cone_total);
			printf("Área da base = %.4fm^2\n", area_cone_base);
			printf("Área da lateral = %.4fm^2\n", area_cone_lateral);
			printf("Volume = %.4fm^3\n", volume_cone);
			printf("Geratriz = %.4f\n", geratriz);
			/*passo a passo*/
			printf("\n");
			printf("-----\n");
			printf("Geratriz^2 = %.4f^2 + %.4f^2\n", raio_cone, altura_cone);
			printf("Geratriz = sqrt(%.4f)\n", geratriz_comeco);
			printf("Área Total = %.4f * %.4f * (%.4f + %.4f)\n", pi_cone, raio_cone, raio_cone, geratriz);
			printf("Área total = %.4f\n", area_cone_total);
			printf("-----\n");
			system("Pause");
			goto selecionar_programa;
		}

		{
		trapezio:
			/*Trapezio*/
			int base_menor, base_maior, altura_trapezio, area_trapezio_1, area_trapezio;
			printf("Área do Trapézio\n");
			printf("Digite o valor da base maior\n");
			scanf_s("%d", &base_maior);
			printf("Digite o valor da base menor\n");
			scanf_s("%d", &base_menor);
			printf("Digite o valor da altura\n");
			scanf_s("%d", &altura_trapezio);
			area_trapezio_1 = (((base_maior * base_menor)) * (altura_trapezio));
			area_trapezio = (area_trapezio_1 / 2);
			printf("Área = %dm^2\n", area_trapezio);
			/*passo a passo*/
			printf("Área = ((%d * %d) * %d) / 2\n", base_maior, base_menor, altura_trapezio);
			printf("Área = %d / 2\n", area_trapezio_1);
			system("Pause");
			goto selecionar_programa;
		}

		{
		conversor:
			int escolha_conversor;
			printf("Conversor binário e Hex\n");
			printf("1 - Decimal para Binário e Hex\n2 - Binário para decimal e Hex\n3 - Hex para binário e decimal\n");
			scanf_s("%d", &escolha_conversor);
			switch (escolha_conversor)
			{
			case 1:
				goto decimal_binario;
			case 2:
				goto binario_decimal;
			case 3:
				goto hex_decimal;
			}
			{
			decimal_binario:
				{
					int decimal = 0;
					printf("Decimal para binário\n");
					printf("Insira o decimal que deseja converter\n");
					scanf_s("%d", &decimal);
					int resto = 0, bin_int = 0, binario = 1;
					printf("Binário = ");
					while (decimal != 0) {
						resto = decimal % 2;
						bin_int = (resto * binario) + bin_int;
						decimal = decimal / 2;
						binario = binario * 10;
					}
					printf("%d", bin_int);
				}
			}









			system("Pause");
			goto selecionar_programa;
		}



		{
		binario_decimal:
			printf("binario p decimal\n");
			system("Pause");
			goto selecionar_programa;
		}

		{
		hex_decimal:
			printf("hex p decimal\n");
			system("Pause");
			goto selecionar_programa;
		}
	}
		{
		teste_primo:
			int numero, quantidade_divisoes, sobra, divisores = 0;
			printf("Detector de números primos\n");
			printf("Digite o número que queira detectar\n");
			scanf_s("%d", &numero);
			/*Numero primo = um numero q e divisivel por 1 ou ele mesmo*/
			for (quantidade_divisoes = 1; quantidade_divisoes <= numero; quantidade_divisoes++) {//testa todas as divisoes de 1 ate o numero escolhido
				sobra = numero % quantidade_divisoes;
				if (sobra == 0) divisores++;//se a sobra dos numeros for = 0 aumenta-se 1 nos numeros divisores desse numero
			}
			if (divisores != 2) { //Testa se o numero e diferente de 2
				printf("Número não é primo\n");//se nao ele nao e primo
			}
			else printf("Número primo\n");//se sim ele e primo
			system("Pause");
			goto selecionar_programa;

		}



		{
			int calculadoras_senos_selecionar;
		calculadorasenos:
			printf("Calculadora de senos, cossenos e tangentes\n");
			printf("Digite o que deseja fazer\n");
			printf("1 - Calculadora senos\n2 - Calculadora cossenos\n3 - Calculadora tangentes\n4 - Calculadora senos por tabela\n5 - Voltar\n");
			scanf_s("%d", &calculadoras_senos_selecionar);
			switch (calculadoras_senos_selecionar) {
			case 1:
				goto seno;
			case 2:
				goto cosseno;
			case 3:
				goto tan;
			case 4:
				goto cos_tan_sen_tabela;
			case 5:
				goto selecionar_programa;
			default:
				printf("Valor invalido\n");
				goto calculadorasenos;
			}

			{
			seno:
				{
					float sen, cateto, hipotenusa;
					printf("Cálculo seno por cateto e hipotenusa\n");
					printf("Digite o cateto oposto\n");
					scanf_s("%f", &cateto);
					printf("Digite a hipotenusa\n");
					scanf_s("%f", &hipotenusa);
					sen = cateto / hipotenusa;
					printf("Seno = %f\n", sen);
					system("Pause");
					goto calculadorasenos;
				}
			cosseno:
				{
					float cos, cateto, hipotenusa;
					printf("Cálculo cosseno por cateto e hipotenusa\n");
					printf("Digite o cateto adjascente\n");
					scanf_s("%f", &cateto);
					printf("Digite a hipotenusa\n");
					scanf_s("%f", &hipotenusa);
					cos = cateto / hipotenusa;
					printf("Seno = %f\n", cos);
					system("Pause");
					goto calculadorasenos;
				}
			tan:
				{
					float tan, cateto, cateto_oposto;
					printf("Cálculo ctangente\n");
					printf("Digite o cateto adjascente\n");
					scanf_s("%f", &cateto);
					printf("Digite o cateto oposto\n");
					scanf_s("%f", &cateto_oposto);
					tan = cateto / cateto_oposto;
					printf("Seno = %f\n", tan);
					system("Pause");
					goto calculadorasenos;
				}
				{
				cos_tan_sen_tabela:
				seno_escolha:
					double seno_selecionado1, seno_selecionado2, cosselecionado1, cosselecionado2, sen30, sen45, sen60, sen90, cos30, cos45, cos60, cos90, tan30, tan45, tan60, resultado;
					int seno_selecionado11, seno_selecionado22, seno_escolha;
					sen30 = 0.5;
					sen45 = 0.7071;
					sen60 = 0.8660;
					sen90 = 1;
					cos30 = 0.8660;
					cos45 = 0.7071;
					cos60 = 0.5;
					cos90 = 0;
					tan30 = 0.5774;
					tan45 = 1;
					tan60 = 1.7321;
					seno_selecionado1 = 0;
					seno_selecionado2 = 0;
					cosselecionado1 = 0;
					cosselecionado2 = 0;
					printf("Calculadora dos senos\n");
					printf("Escolha o que deseja calcular\n");
					printf("1 - Seno(a) - Seno(b)\n2 - Seno(a) + Seno(b)\n3 - Voltar\n");
					scanf_s("%d", &seno_escolha);
					switch (seno_escolha) {
					case 1:
						goto senoamenosb;
					case 2:
						goto senoamaisb;
					case 3:
						goto selecionar_programa;
					default:
						printf("Valor invalido\n");
						goto seno_escolha;
					}

					{
						//sen a-b
					senoamenosb:
					seno1:
						printf("Lista dos senos\n1 - sen 30 = 0.5\n2 - sen 45 = 0.7071\n3 - sen 60 = 0.8660\n4 - sen 90 = 1\n");
						printf("Digite o seno A\n");
						scanf_s("%d", &seno_selecionado11);
						switch (seno_selecionado11) {
						case 1:
							seno_selecionado1 = sen30;
							cosselecionado2 = cos30;
							printf("---------------\n");
							printf("Sen30 escolhido\n");
							printf("---------------\n");
							break;
						case 2:
							seno_selecionado1 = sen45;
							cosselecionado2 = cos45;
							printf("---------------\n");
							printf("Sen45 escolhido\n");
							printf("---------------\n");
							break;
						case 3:
							seno_selecionado1 = sen60;
							cosselecionado2 = cos60;
							printf("---------------\n");
							printf("Sen60 escolhido\n");
							printf("---------------\n");
							break;
						case 4:
							seno_selecionado1 = sen90;
							cosselecionado2 = cos90;
							printf("---------------\n");
							printf("Sen90 escolhido\n");
							printf("---------------\n");
							break;
						default:
							printf("Escolha um valor correto\n");
							goto seno1;
						}
					seno2:
						printf("Lista dos senos\n1 - sen 30 = 0.5\n2 - sen 45 = 0.7071\n3 - sen 60 = 0.8660\n4 - sen 90 = 1\n");
						printf("Digite o seno B\n");
						scanf_s("%d", &seno_selecionado22);
						switch (seno_selecionado22) {
						case 1:
							seno_selecionado2 = sen30;
							cosselecionado1 = cos30;
							printf("---------------\n");
							printf("Sen30 escolhido\n");
							printf("---------------\n");
							break;
						case 2:
							seno_selecionado2 = sen45;
							cosselecionado1 = cos45;
							printf("---------------\n");
							printf("Sen45 escolhido\n");
							printf("---------------\n");
							break;
						case 3:
							seno_selecionado2 = sen60;
							cosselecionado1 = cos60;
							printf("---------------\n");
							printf("Sen60 escolhido\n");
							printf("---------------\n");
							break;
						case 4:
							seno_selecionado2 = sen90;
							cosselecionado1 = cos90;
							printf("---------------\n");
							printf("Sen90 escolhido\n");
							printf("---------------\n");
							break;
						default:
							printf("Selecione um valor correto\n");
							goto seno2;
						}
						resultado = (seno_selecionado1 * cosselecionado1) - (seno_selecionado2 * cosselecionado2);
						printf("Sen(%lf) - Sen(%lf) = %f\n", seno_selecionado1, seno_selecionado2, resultado);
						system("Pause");
						goto seno_escolha;
					}
					{
						//sen a+b
					senoamaisb:
					seno11:
						printf("Lista dos senos\n1 - sen 30 = 0.5\n2 - sen 45 = 0.7071\n3 - sen 60 = 0.8660\n4 - sen 90 = 1\n");
						printf("Digite o seno A\n");
						scanf_s("%d", &seno_selecionado11);
						switch (seno_selecionado11) {
						case 1:
							seno_selecionado1 = sen30;
							cosselecionado2 = cos30;
							printf("---------------\n");
							printf("Sen30 escolhido\n");
							printf("---------------\n");
							break;
						case 2:
							seno_selecionado1 = sen45;
							cosselecionado2 = cos45;
							printf("---------------\n");
							printf("Sen45 escolhido\n");
							printf("---------------\n");
							break;
						case 3:
							seno_selecionado1 = sen60;
							cosselecionado2 = cos60;
							printf("---------------\n");
							printf("Sen60 escolhido\n");
							printf("---------------\n");
							break;
						case 4:
							seno_selecionado1 = sen90;
							cosselecionado2 = cos90;
							printf("---------------\n");
							printf("Sen90 escolhido\n");
							printf("---------------\n");
							break;
						default:
							printf("Escolha um valor correto\n");
							goto seno11;
						}
					seno22:
						printf("Lista dos senos\n1 - sen 30 = 0.5\n2 - sen 45 = 0.7071\n3 - sen 60 = 0.8660\n4 - sen 90 = 1\n");
						printf("Digite o seno B\n");
						scanf_s("%d", &seno_selecionado22);
						switch (seno_selecionado22) {
						case 1:
							seno_selecionado2 = sen30;
							cosselecionado1 = cos30;
							printf("---------------\n");
							printf("Sen30 escolhido\n");
							printf("---------------\n");
							break;
						case 2:
							seno_selecionado2 = sen45;
							cosselecionado1 = cos45;
							printf("---------------\n");
							printf("Sen45 escolhido\n");
							printf("---------------\n");
							break;
						case 3:
							seno_selecionado2 = sen60;
							cosselecionado1 = cos60;
							printf("---------------\n");
							printf("Sen60 escolhido\n");
							printf("---------------\n");
							break;
						case 4:
							seno_selecionado2 = sen90;
							cosselecionado1 = cos90;
							printf("---------------\n");
							printf("Sen90 escolhido\n");
							printf("---------------\n");
							break;
						default:
							printf("Selecione um valor correto\n");
							goto seno22;
						}
						resultado = (seno_selecionado1 * cosselecionado1) + (seno_selecionado2 * cosselecionado2);
						printf("Sen(%lf) + Sen(%lf) = %f\n", seno_selecionado1, seno_selecionado2, resultado);
						system("Pause");
						goto seno_escolha;
					}
				}
			}
		}








		//asd
		{
		fechar:
			printf("Obrigado por usar o programa, espero que tenha te ajudado!\n");
			Sleep(1000);
			return 0;
		}

		{
			{
			creditos:
				printf("Pessoas que ajudaram a desenvolver esse app\n");
				Sleep(1000);
				printf("Dipirona537 - Gabriel Guimarães\n");
				printf("Hakimen - Jheffão\n");
				system("Pause");
				goto selecionar_programa;
			}
		}
}
