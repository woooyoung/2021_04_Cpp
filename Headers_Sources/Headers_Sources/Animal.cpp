#include "main_header.h"
#include "Animal.h"


Animal::Animal(int legs, const char* name) {
	this->legs = legs;
	strcpy(this->name, name);
}

void Animal::printInfo() {
	printf("������ �̸� : %s, ������ �ٸ� : %d\n", name, legs);
}