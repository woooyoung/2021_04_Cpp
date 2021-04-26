#include "Header.h"

//class Calender {
//public:
//	enum Month {
//	JAN =1, FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC
//	};
//};
//게임엔진
//playing  paused  win  lose

//일반적인 enum
//클래스 내부의 enum
//강화된 enum class type

enum class Month{
	JAN =1, FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC
	};

enum Math {
		INC,DEC
};

int main() {

	//Month m = JAN;

//	Calender::Month m = Calender::JAN;
		
	Month m = Month::JAN;
	int value = (int)m;

	switch (m)
	{
	case Month:: JAN:
		printf("1월");
		break;
	case Month:: FEB:
		printf("2월");
		break;
	case Month::MAR:
		printf("3월");
		break;
	case Month::APR:
		printf("4월");
		break;
	case Month::MAY:
		printf("5월");
		break;
	case Month::JUN:
		printf("6월");
		break;
	case Month:: JUL:
		printf("7월");
		break;
	case Month:: AUG:
		printf("8월");
		break;
	case Month:: SEP:
		printf("9월");
		break;
	case Month:: OCT:
		printf("10월");
		break;
	case Month:: NOV:
		printf("11월");
		break;
	case Month:: DEC:
		printf("12월");
		break;
	}
	printf("%d\n", m);

	return 0;
}