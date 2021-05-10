#include <iostream>
#include <cstdio>
//#include <cstring>
#include <string>
#include <vector>

using namespace std;

namespace hong {
    void foo();

    class Person {
    public:
        Person();
        void printInfo(int i, const char* str);
    };
}

namespace kim {
    void foo();
}


int main() {

    string myStr = "Hello";
    vector<int> myvec;

    hong::foo();
    kim::foo();

    printf("%s", myStr.c_str());

    return 0;
}

void hong::foo() {
    printf("홍길동이 만든 함수입니다.\n");
}
void kim::foo() {
    printf("김철수가 만든 함수입니다.\n");
}

hong::Person::Person() {

}

void hong::Person::printInfo(int i, const char* c) {

}