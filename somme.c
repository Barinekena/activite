#include <stdio.h>
#include <stdlib.h>

int somme(int a,int b) {
	return (a + b);
}

void main() {
	int s = somme(2,4);
	printf("Le resultat est %i",s);
}
