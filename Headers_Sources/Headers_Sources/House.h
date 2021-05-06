#pragma once
#ifndef __HOUSE_H__
#define __HOUSE_H__

class Animal;   //클래스도 함수와 마찬가지로 전방선언이 가능

class House {
public:
    Animal* animal;

    void setAnimal(Animal* a);

    class Goo;

    class Foo {
    public:
        Goo* g;
    };
    class Goo {
    public:
        Foo* f;
    };
};


#endif