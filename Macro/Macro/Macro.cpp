#define SWAP(X, Y, T) T = X; X = Y; Y = T;

#include <cstdio>

int main() {
	int v1 = 100;
	int v2 = 200;
	int temp;

	SWAP(v1, v2, temp);

	printf("v1 : %d\n", v1);
	printf("v2 : %d\n", v2);

	return 0;
}