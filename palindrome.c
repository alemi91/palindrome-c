#include <stdio.h>
#include <stdlib.h>

int oglind(int nr) {
    int aux = 0;
    while (nr != 0) {
        aux = aux * 10 + nr % 10;
        nr /= 10;
    }
    return aux;
}

void sort(int *palindrome, int nrPali) {
	for (int i = 0; i < nrPali - 1; i++) {
        for (int j = i + 1; j < nrPali; j++) {
            if (palindrome[i] > palindrome[j]) {
                int aux = palindrome[i];
                palindrome[i] = palindrome[j];
                palindrome[j] = aux;
            }
        }
    }
}

int main()
{
    int n;
    printf("How many numbers? ");
    scanf("%d", &n);

    int *palindrome = calloc(n, sizeof(int)); 
    int nrPali = 0;

    for (int i = 0; i < n; i++) {
        int nr;
        printf("\n%d. ", i + 1);
        scanf("%d", &nr);
        
        if (nr == oglind(nr)) {
            printf("\n%d is a palindrome!", nr);
            palindrome[nrPali] = nr;
            nrPali++;
        } else {
            printf("\n%d is NOT a palindrome!", nr);
        }
    }

    sort(palindrome, nrPali);

    printf("\nPalindromes found: %d\n", nrPali);
    
    if (nrPali > 0) {
        for (int i = 0; i < nrPali; i++) {
            printf("%d ", palindrome[i]);
        }
        printf("\n");
    }

    return 0;
}