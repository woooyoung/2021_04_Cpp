//static : ���� -> Ŭ���� ����, �ܺο� ���� �ǹ̰� �ٸ���.

#include "Header.h"

int main() {

	MyClass::static_member_int = 100;
	printf("%d", MyClass::static_member_int);

	/*
	MyClass* c = new MyClass();
	c->foo();
	//c->goo();

	MyClass::goo();
	*/
	return 0;
}

int MyClass::static_member_int = 1;

void MyClass::foo() {

}
void MyClass::goo() {

}