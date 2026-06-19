#include <stdio.h>

int oglind(int nr) {
	int aux = 0;
	while (nr != 0) {
		aux = aux * 10 + nr % 10;
		nr /= 10;
	}
	return aux;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int nr;
		scanf("%d", &nr);
		if (nr == oglind(nr)) {
			printf("%d is a palindrome!\n", nr);
		} else {
			printf("%d is NOT a palindrome!\n", nr);
		}
	}
}