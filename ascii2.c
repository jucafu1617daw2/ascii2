//Autor: Juan Jose Castillo Funes
#include <stdio.h>

int main() {
	char c;
	int n,i;

	printf("TAULA ASCII MAJÚSCULES 22-2-2017\n");
	printf("CAR  HEX  DEC\n");
	n='Z'-'A';
	for (i=n;i>=0;i--) {
		c='A'+i;
		printf("%c    %x   %d\n",c+32,c+32,c+32);
	}
	return(0);
}
