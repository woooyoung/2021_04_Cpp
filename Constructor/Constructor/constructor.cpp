#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

class Student {
public:
    int student_no;
    char* name;
    int gender;  //0 - ���� / 1 - ����
    //������
    Student(int student_no, const char* n, int g) {
        this->student_no = student_no;
        //name = new char[100];
        name = new char[strlen(n) + 1];
        //���ڿ��� ���̿� ���´� �迭�� ���������.
        strcpy(name, n);
        gender = g;
    }
    //�Ҹ��� : destructor
    ~Student() {
        printf("�Ҹ��� ȣ��\n");
        delete[] name;
    }
    //��� ���� �޸𸮸� �������� ��������� �ϴ� C++�� Ư���� 
    //Ŭ���� ��������� �����޸� �Ҵ� �� ��ü�� �ִٰ� �� ���
    //�Ҹ��ڿ��� ó������ ������ �ϳ��ϳ� Ŭ���� �ܺο��� delete ���� �޸𸮸� 
    //�����ؾ� �Ѵ�. -> �����԰� ���ո����� �ʷ��ϹǷ� �Ҹ��ڸ� ����Ѵ�.

    void printStudentInfo() {
        printf("�л� ��ȣ : %d\n", student_no);
        printf("�л� �̸� : %s\n", name);
        printf("���� : %s\n", gender == 0 ? "����" : "����");
        //�ζ��� ������ --> <������> ? value1 : value2
    }
};

int main() {
    //�ν��Ͻ� = s
    Student s = Student(1234, "ȫ�浿", 0);
    //   s.student_no = 1234;
    //   strcpy(s.name, "ȫ�浿");
    //   s.gender = 0;

    s.printStudentInfo();
    //�ν��Ͻ� = ps
    Student* ps = new Student(4321, "ȫ���", 1);
    //   ps->student_no = 4321;
    //   strcpy(ps->name, "ȫ���");
    //   ps->gender = 1;

    ps->printStudentInfo();

    delete ps;

    return 0;
}


//�ǽ�
/*
��� ȸ��� ��� �����ý����� �ִ�.

�� ��ٰ��� �ý����� �����ڿ� ���� ����� �Է¹޾� ����� �� ������

����� ���� �����ȣ, �̸�, ����, ���� �̶�� �Ӽ��� �����ִ�.

�����ڴ� ������� �ѹ��� �� �� �ְ�,

�����ڿ� ���� ����� �߰��� �� ������ ����� ���� �����ڿ� ����

�����ɼ� �ִ�.

������ �����ȣ�� �Է¹޾� ���ó���� �� �� �ִ�.

��� ��ȣ�� �ý��ۿ� ���� �ڵ����� �����Ǹ�,

�����ȣ�� �����Ǵ� ����� �����Ӱ� �����Ҽ��ִ�.(100��)

*/