//������ �����ε�      +,-,*,/  �⺻ �ڷ������� ��ȿ
#include <cstdio>

class Vector {
public:
    float X;
    float Y;

    Vector(float X, float Y) {
        this->X = X;
        this->Y = Y;
    }

    Vector() {
        X = 0.0f;
        Y = 0.0f;
    }

    void printInfo() {
        printf("%.2f, %.2f", X, Y);
    }
};

Vector operator+(Vector& v1, Vector& v2) {
    return Vector(v1.X + v2.X, v1.Y + v2.Y);
}

int main() {
    Vector v1 = Vector(100, 200);
    Vector v2 = Vector(1, 2);


    Vector v3 = v1 + v2;

    v3.printInfo();      //�������� �Ҵ�� Ŭ���� �ν��Ͻ����� �����Ѵ�.

    return 0;
}

//c++���� ������ �����ε��� �����ϰ� �̰� Ȱ���ϴ� ���¼ҽ� ���̺귯���� ����
//�Ǵ� ���� ������ ����. ���� ���� �ȴ�.