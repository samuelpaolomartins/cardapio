#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
	
int main(void){
	
	float cachorroquente = 5.70, xcompleto = 18.30, xsalada = 16.50, hamburguer = 22.40, coca2L = 10.00, refrigerante = 1.00, TOTAL = 0;
	int i = 0, numero = 0, numpedido = 0, quant = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0, p6 = 0;
	char num1[50], strPedido[50], strquant[50], a, b, c;
	
	//entrada de dados
	
	printf("Qual o nuemro da mesa?: \n");
	
	do{
	c = getch(); //captura o caractere digitado pelo usuario
	
	if(isdigit(c) != 0){ //se for um numero
	num1[i] = c; //armazena no vetor de caracteres
	i++; //incrementa o indice do vetor de caracteres
	printf("%c", c); //exibe o caractere digitado
	}else if(c == 8 && i){ //se for pressionada a tecla BACKSPACE e houver caracteres ja digitados
	num1[i] = '\0'; // o indice atual do vetor de caracteres recebe a terminaçao do string
	i--; // o indice do vetor de caracteres é decrementado
	printf("\b \b"); // o caractere digitado é apagado na tela
	}
	
	}while(c != 13);//o loop vai ser executado ate que a tecla ENTER seja pressionada (cód 13 na tabela ASCII)
	
	num1[i] = '\0'; // o indice atual do vetor de caracteres recebe a terminaçao do string
	numero = atoi(num1); // a variavel numero recebe o valor do vetor de caracteres convertido para inteiro
	
	printf("\nQual o item do pedido abaixo? \n");
	
	printf("codigo produto          preco unitario \n");
	printf(" 100   cachorro quente    R$ 5,70 \n");
	printf(" 101   X completo         R$ 18,30 \n");
	printf(" 102   x salada           R$ 16,50 \n");
	printf(" 103   hamburguer         R$ 22,40 \n");
	printf(" 104   coca 2L            R$ 10,00 \n");
	printf(" 105   refrigerante       R$ 1,00 \n");
	printf(" 999 encerrar pedido\n");
	
	//inicio do processo
	while(numpedido != 999){ // numpedido n pode ser 999
	
	while (1) {
	   printf ("codigo:\n");
	        gets (strPedido);
	        if (sscanf (strPedido, "%d", &numpedido) != 1 || numpedido != 100 && numpedido != 101  && numpedido != 102 && numpedido != 103 && numpedido != 104 && numpedido != 105 && numpedido != 999){
	            printf ("Por favor, entre com um valor numerico do pedido correto e/ou numero positivo\n", stderr);
	        }
	        else{
	            break;
	        }
	    }
	
	while(numpedido == 100 || numpedido == 101 || numpedido == 102 || numpedido == 103 || numpedido == 104 || numpedido == 105){
	
	printf ("quantidade:\n");
	        gets (strquant);
	        if (sscanf (strquant, "%d", &quant) != 1 || quant <= 0){
	            printf ("Por favor, entre com um valor numerico e positivo\n", stderr);
	        }
	        else{
	        break;
	        }
	
	}
	
	switch(numpedido){
	case 100:
	p1 += numpedido;
	c1 += quant;
	TOTAL += (cachorroquente * quant);
	break;
	
	case 101:
	p2 += numpedido;
	c2 += quant;
	TOTAL += (xcompleto * quant);
	break;
	
	case 102:
	p3 += numpedido;
	c3 += quant;
	TOTAL += (xsalada * quant);
	break;
	
	case 103:
	p4 += numpedido;
	c4 += quant;
	TOTAL += (hamburguer * quant);
	break;
	
	case 104:
	p5 += numpedido;
	c5 += quant;
	TOTAL += (coca2L * quant);
	break;
	
	case 105:
	p6 += numpedido;
	c6 += quant;
	TOTAL += (refrigerante * quant);
	break;
	
	case 999:
	break;
	
	}
	
	}
	
	//fim do processo
	
	//mostra na tela o pedido
	printf("a mesa %d pediu os seguintes itens: \n", numero);
	
	if(p1){
	printf("codigo %d cachorro quente \n %d quantidade(s) \n", p1, c1);
	}
	
	if(p2){
	printf("codigo %d x completo \n %d quantidade(s) \n", p2, c2);
	}
	
	if(p3){
	printf("codigo %d x salada \n %d quantidade(s) \n", p3, c3);
	}
	
	if(p4){
	printf("codigo %d hamburguer \n %d quantidade(s) \n", p4, c4);
	}
	
	if(p5){
	printf("codigo %d coca 2L \n %d quantidade(s) \n", p5, c5);
	}
	
	if(p6){
	printf("codigo %d refrigerante \n %d quantidade(s) \n", p6, c6);
	}
	
	printf("o valor total eh de: %.2f \n", TOTAL);
	
system ("pause");// fim do sistema
return(0);
}
