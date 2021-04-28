#include "Header.h"

#define INTERVAL 1.0/60.0

int main() {

	float prev = (float)clock() / CLOCKS_PER_SEC;

	while (true) {
		float curr = (float)clock() / CLOCKS_PER_SEC;
		float dt = curr - prev;

		if (dt < INTERVAL) continue;	//정해주는 1/60 보다 작다면 처음으로 돌아가게
		prev = curr;

		printf("%.3f\n", curr);

		bool left = keyState('a');
		if (left) {
			//왼쪽으로 블록 이동
		}
		else {
			//그냥 블록 떨어지게
		}
		//화면 출력
		//게임상태 판별
	}

	return 0;
}