#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>

class MyClass {
public:
    static int static_member_int;
    int a;
    void foo();
    static void goo();
};






/*
class MyClass {
public:
   static int b; //��������
   int a;
   void foo() {      //�ڱ� �ڽ��� �ν��Ͻ��� �ִ�.
      a = 100;
      this->a = 200;
      printf("foo\n");
   }
   static void goo() { //��ü�� �ʿ���� (Ŭ���� �ȿ� �����ϴ� Ŭ���� �ν��Ͻ��� ���� �Լ���)
      b = 100;
      printf("goo\n");
   }
};

*/