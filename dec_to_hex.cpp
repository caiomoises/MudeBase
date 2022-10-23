#include<stdio.h>
#include<locale.h>

void hex(int h);
void oct(int o);

int main() {
	int d, op;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite para que base você deseja converter: ");
	printf("\n1. Decimal para hexadecimal. \n2. Decimal para octodecimal.\n");
	scanf("%i", &op);
	switch(op){
		case 1:
			printf("\nDigite um valor inteiro e em decimal: ");
			scanf("%i", &d);
			hex(d);
			break;
		case 2:
			printf("\nDigite um valor inteiro e em decimal: ");
			scanf("%i", &d);
			oct(d);
			break;
		default:
			break;
	}
	return(0);
}

void hex(int h){
	printf("\n%i(dec) = %X(hex).", h, h);
}
void oct(int o){
	printf("\n%i(dec) = %o(octal).", o, o);
}
