#include "Header.h"

#define INTERVAL 1.0/60.0

int main() {

	float prev = (float)clock() / CLOCKS_PER_SEC;

	while (true) {
		float curr = (float)clock() / CLOCKS_PER_SEC;
		float dt = curr - prev;

		if (dt < INTERVAL) continue;	//�����ִ� 1/60 ���� �۴ٸ� ó������ ���ư���
		prev = curr;

		printf("%.3f\n", curr);

		bool left = keyState('a');
		if (left) {
			//�������� ��� �̵�
		}
		else {
			//�׳� ��� ��������
		}
		//ȭ�� ���
		//���ӻ��� �Ǻ�
	}

	return 0;
}