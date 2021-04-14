#include <cstdio>

#define SWAP(X, Y, TYPE) {TYPE temp = v1; v1 = v2; v2 = temp; }

int main() {
	int v1 = 100;
	int v2 = 200;


	SWAP(v1, v2, int);
	SWAP(v1, v2, int);

	return 0;

}