#include "Header.h"

#define INTERVAL 1.0/60.0            

int main() {

    float prev = (float)clock() / CLOCKS_PER_SEC;
    Display* display = new Display();
    GameEngine* gameEngine = new GameEngine();      ///1
    showConsoleCursor(false);

    while (true) {
        float curr = (float)clock() / CLOCKS_PER_SEC;
        float dt = curr - prev;

        if (dt < INTERVAL)   continue;
        prev = curr;

        //printf("%.3f\n", curr);

        bool left = keyState('a');
        if (left) {
            //�������� ���� �̵�
        }
        else {
            // �׳� ���� ��������
        }

        gameEngine->next(dt, 0);            ///3

        //ȭ�� ���
        gameEngine->makeDisplayData();   /////2
        display->draw();

        //���� ���� �Ǻ�
    }

    return 0;
}