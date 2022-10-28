#include<stdio.h>
#include<locale.h>

void hex(int h);
void octal(int e);

int main() {
	int d, op;
	setlocale(LC_ALL, "Portuguese");
	printf("Para qual base você deseja converter?\n1.Decimal para hexadecimal.\n2.Decimal para octadecimal.\n\n");
	scanf("%i", &op);
	switch(op){
		case 1:
			printf("Digite um valor inteiro e em decimal: ");
			scanf("%i", &d);
			printf("%i(dec) = ", d);
			hex(d);
			printf("(hex).");
			break;
        case 2:
            printf("Digite um valor inteiro e em decimal: ");
			scanf("%i", &d);
			printf("%i(dec) = ", d);
            		octal(d);
           		 printf("(octal).");
			break;
		default:
			break;
	}
	return(0);
}

void hex(int h){
	int q, r = 0, resto[r];
	while(h >= 1){
		resto[r] = h % 16;
		h = h / 16;
		r++;
	}
	for(int i = (r - 1); i >= 0; i--){
		if(resto[i] == 10){
			printf("A");
		} else if(resto[i] == 11){
			printf("B");
		} else if(resto[i] == 12){
			printf("C");
		} else if(resto[i] == 13){
			printf("D");
		} else if(resto[i] == 14){
			printf("E");
		} else if(resto[i] == 15){
			printf("F");
		} else {
			printf("%i", resto[i]);
		}
	}
}

void octal(int e){
	    int l = 0, resto[l];
		while(e >= 1){
			resto[l] = e % 8;
			e = e / 8;
			l++;
	    }
	    for(int i = l - 1; i >= 0; i--){
		printf("%i", resto[i]);
	    }
}
