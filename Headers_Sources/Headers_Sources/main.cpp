//c++ ���α׷��� ������ cpp���� �������� ���������.
#include "main_header.h"
#include "Animal.h"
#include "Person.h"

int main() {

    Animal* animal = new Animal(2, "��");
    animal->printInfo();

    Person* person = new Person("1234-5678", "ȫ�浿");
    person->printInfo();

    //foo();



    return 0;
}


/*
void hoo() {
   printf("hoo()\n");
   count++;
   foo();
}

void goo() {
   printf("goo()\n");
   count++;
   hoo();
}
void foo() {
   if (count <= 10) {
      printf("foo()\n");
      count++;
      goo();
   }
}
*/

/*c++������ �������� �� �� cpp������ �������� �������� �Ѵ�.

�������� ������ �Ǵ� cpp ���Ͽ��� ������ ����ο� �Լ��� ������ �ִٸ�

�� ����� �Լ��� ���� ��ü�� �����ִ� �Լ��� ����ȴ�.(Linking)*/