#pragma once
#ifndef __HOUSE_H__
#define __HOUSE_H__

class Animal;   //Ŭ������ �Լ��� ���������� ���漱���� ����

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