#include <stdio.h>
#include <stdlib.h>

int main(void){
	
/* Configura as cores padrão de primeiro plano e tela de fundo do console.

  COLOR [attr]

  attr        Especifica os atributos de cor da saída do console

Atributos de cor são especificados por DOIS dígitos hexadecimais. O primeiro
corresponde à cor de tela de fundo; o segundo à cor de primeiro plano. Cada
dígito pode ter apenas um dos seguintes valores:

    0 = Preto        8 = Cinza
    1 = Azul         9 = Azul claro
    2 = Verde        A = Verde claro
    3 = Verde-água   B = Verde-água claro
    4 = Vermelho     C = Vermelho claro
    5 = Roxo         D = Lilás
    6 = Amarelo      E = Amarelo claro
    7 = Branco       F = Branco brilhante
*/

	
	system("color F0");
	printf("Preto\n");
	system("PAUSE");

	system("color F1");
	printf("Azul\n");
	system("PAUSE");

	system("color F2");
	printf("verde\n");
	system("PAUSE");
	
	system("color F3");
	printf("verde agua\n");
	system("PAUSE");

	system("color F4");
	printf("vermelho\n");
	system("PAUSE");

	system("color F5");
	printf("roxo\n");
	system("PAUSE");

	system("color F6");
	printf("amarelo\n");
	system("PAUSE");

	system("color F7");
	printf("Cinza\n");
	system("PAUSE");

	system("color F8");
	printf("Cinza escuro\n");
	system("PAUSE");

	system("color F9");
	printf("Azul claro\n");
	system("PAUSE");

	system("color FA");
	printf("verde claro\n");
	system("PAUSE");
	
	system("color FB");
	printf("verde agua claro\n");
	system("PAUSE");

	system("color FC");
	printf("vermelho claro\n");
	system("PAUSE");

	system("color FD");
	printf("lilás\n");
	system("PAUSE");

	system("color FE");
	printf("amarelo claro\n");
	system("PAUSE");

	system("color 0F");
	printf("Branco brilhante\n");
	system("PAUSE");


	return 0;
}
