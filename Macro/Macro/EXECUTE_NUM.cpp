#include <cstdio>

#define EXECUTE_NUM 1

#if EXECUTE_NUM == 0
int main() {
	printf("Hello World 0");
	return 0;
}
#else
int main() {
	printf("Hello World 1");
	return 0;
}
#endif