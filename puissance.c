#include <stdio.h>
#include <stdlib.h>

int puissance(int a,int b) {
	int resultat = 1;
	for(int i=0;i<b;i++) {
		resultat *= a;
	}
	return resultat;
}

void main() {
	int c = puissance(2,3);
	printf("Le resultat est %i",c);
}
