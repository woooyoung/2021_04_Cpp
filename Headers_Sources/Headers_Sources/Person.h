//#pragma once //�ߺ� �����ִ� ��ũ��

#ifndef __PERSON_H__
#define __PERSON_H__

#include "Animal.h"

class Person : Animal {
public:
	char regist_no[50];

	Person(const char* regist_no, const char* person_name);

	void printInfo();
};

#endif