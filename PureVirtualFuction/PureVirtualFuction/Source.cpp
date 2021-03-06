//순수 가상함수 : 몸체가 없는 가상함수 , 무조건 상속 - 자식클래스에서 구현(구현을 나중으로 미룬다)

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

enum class Time {
    Morning, Afternoon, Night
};

class Animal {
public:
    char name[50];
    Animal(const char* name) {
        strcpy(this->name, name);
    }
    //pure virtual func
    //구현해 주세요 / 건드리지 마세요
    virtual int getLegs() = 0;

    void printInfo() {
        printf("이름 : %s / 다리 : %d\n", name, getLegs());
    }
};

class Person : public Animal {
private:
    Time time = Time::Morning;
public:
    Person(const char* name) : Animal(name) {}

    virtual int getLegs() {
        switch (time) {
        case Time::Morning: return 4;
        case Time::Afternoon: return 2;
        case Time::Night: return 3;
        }
    }
    void setTime(Time t) {
        this->time = t;
    }
};

class Dog : public Animal {
public:
    Dog() : Animal("개") {}

    //   virtual int getLegs() {
    //      return 4;
    //   }
};

int main() {

    //Animal* animal = new Animal("abcd");

    Person* person = new Person("길동");
    person->setTime(Time::Night);
    person->printInfo();

    Dog* dog = new Dog();
    dog->printInfo();

    return 0;
}