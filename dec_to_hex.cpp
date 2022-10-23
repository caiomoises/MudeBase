#include<stdio.h>
#include<locale.h>

void hex(int h);

int main() {
	int d;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um valor inteiro e em decimal: ");
	scanf("%i", &d);
	hex(d);
	return(0);
}

void hex(int h){
	int q;
	while(h >= 1){
		//q = h;
		q = h % 16;
		h = h / 16;	
		if(q == 10){
			printf("F");
		} else if(q == 11){
			printf("E");
		} else if(q == 12){
			printf("D");
		} else if(q == 13){
			printf("C");
		} else if(q == 14){
			printf("B");
		} else if(q == 15){
			printf("A");
		} else {
			printf("%i", q);
		}
	}
}
