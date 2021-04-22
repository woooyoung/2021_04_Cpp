#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <ctime>

class FantasyUnit {
public:
    int maxHp;
    int atk;
    int range;
    int movementSpeed;

    FantasyUnit(int maxHp, int atk, int range, int movementSpeed) {
        this->maxHp = maxHp;
        this->atk = atk;
        this->range = range;
        this->movementSpeed = movementSpeed;
    }

    char name[50];

    void printInfo() {
        printf("%s�� �ɷ�\n", name);
        printf("�ִ� ü�� : %d\n", maxHp);
        printf("���ݷ� : %d\n", atk);
        printf("�����Ÿ� : %d\n", range);
        printf("�̵��ӵ� : %d\n", movementSpeed);

    }
};

class Goblin : public FantasyUnit {
public:
    Goblin() : FantasyUnit(10, 5, 10, 10) {
        //      maxHp = 10;
        //      atk = 5;
        //      range = 10;
        //      movementSpeed = 10;

        strcpy(name, "���");
    }
};
class Orc : public FantasyUnit {
public:
    Orc() : FantasyUnit(80, 10, 12, 8) {
        //      maxHp = 80;
        //      atk = 10;
        //      range = 12;
        //      movementSpeed = 8;

        strcpy(name, "��ũ");
    }
};
class Slime : public FantasyUnit {
public:
    Slime() : FantasyUnit(100, 3, 5, 4) {
        //      maxHp = 100;
        //      atk = 3;
        //      range = 5;
        //      movementSpeed = 4;

        strcpy(name, "������");
    }
};
class skeletonArcher : public FantasyUnit {
public:
    skeletonArcher() : FantasyUnit(60, 20, 50, 3) {
        //      maxHp = 60;
        //      atk = 20;
        //      range = 50;
        //      movementSpeed = 3;

        strcpy(name, "�ذ�ü�");
    }
};