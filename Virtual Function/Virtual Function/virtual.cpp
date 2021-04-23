//가상 함수(Virtual Function) : 실질적으로 내가 원하는 함수를 호출
//성능 중요: 버추얼 함수를 직접적으로 명시하는 경향
//성능 중요x : 명시 x, 배우기 쉬움
#include "Header.h"

class Animal {
public:
    int legs;
    //char name[20]
    char* name;

    Animal(int legs, const char* name) {
        this->name = new char[strlen(name) + 1];
        this->legs = legs;
        strcpy(this->name, name);
    }

    virtual ~Animal() {
        printf("애니멀 소멸자 호출됨\n");
        delete[] name;
    }

    void printInfo() {         //부모가 버추얼 함수면 자식은 아니어도 되지만 반대는 안됨.
        printf("다리 %d, 이름 %s\n", legs, name);
    }
};

class Person : public Animal {
public:
    //char regist_no[40];
    char* regist_no;

    Person(const char* regist_no) : Animal(2, "사람") {
        this->regist_no = new char[strlen(regist_no) + 1];
        strcpy(this->regist_no, regist_no);
    }

    virtual ~Person() {               //지속 & 연쇄적으로 부모의 소멸자를 호출
        printf("펄슨 소멸자 호출됨\n");
        delete[] regist_no;
    }

    void printInfo() {
        printf("이름 %s, 주민번호 %s", name, regist_no);
    }
};

int main() {

    Animal* animal = new Person("1234-5678");
    delete animal;

    //   Person* person = new Person("9876-5432");
    //   delete person;

    //   Person* person = new Person("1234-5678");
    //   Animal* animal = person;

    //   animal->printInfo();
    //   person->printInfo();

    return 0;
}