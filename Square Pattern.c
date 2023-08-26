#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int i, j, k;
	for (i = 0; i < n; i++) {
		k = 0;
		for (j = 0; j < i; j++) {
			printf("%d ", n - k++);
		}

		for (j = 0; j < n - i; j++) {
			printf("%d ", n - k);
		}

		for (j = 0; j < n - i - 1; j++) {
			printf("%d ", n - k);
		}

		for (j = i - 1; j >= 0; j--) {
			printf("%d ", n - j);
		}

		printf("\n");
	}
	for (i = n - 1; i > 0; i--) {
		k = 0;
		for (j = 0; j < i - 1; j++) {
			printf("%d ", n - k++);
		}

		for (j = 0; j < n - i + 1; j++) {
			printf("%d ", n - k);
		}

		for (j = 0; j < n - i - 1; j++) {
			printf("%d ", n - k);
		}

		for (j = i - 1; j >= 0; j--) {
			printf("%d ", n - j);
		}

		printf("\n");
	}

	return 0;
}
