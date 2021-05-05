//c++ 프로그램은 무조건 cpp파일 기준으로 만들어진다.
#include "main_header.h"
#include "Animal.h"
#include "Person.h"

int main() {

    Animal* animal = new Animal(2, "닭");
    animal->printInfo();

    Person* person = new Person("1234-5678", "홍길동");
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

/*c++파일은 컴파일을 할 때 cpp파일을 기준으로 컴파일을 한다.

컴파일의 기준이 되는 cpp 파일에서 위쪽의 선언부에 함수의 선언이 있다면

그 선언된 함수와 실제 몸체를 갖고있는 함수가 연결된다.(Linking)*/