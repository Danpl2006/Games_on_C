// Game stats v3

#include <iostream>;
using namespace std;

/*
* const - определение константы(желательно заглавными буквами)
* Константе нельзя присвоить новое значение
* enum - ключевое слово с помощью которого можно определить перечисление
* enum <идентификатор> {само перечисление} (начинается с 0)
* my_difficulty переменная которая может получить значение только из перечисления
* Любой перечислителю без значение присваивается предыдущий + 1
*/
int main()
{
	const int ALIEN_POINTS = 150;
	int alien_killed = 10;
	int score = alien_killed * ALIEN_POINTS;
	cout << "score: " << score << endl;
	enum difficulty {NOVICE, EASY, NORMEL, HARD, UNBEATABLE};
	difficulty my_difficulty = EASY;
	enum ship_cost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
	ship_cost my_ship_cost = BOMBER_COST;
	cout << "\nTo upgrade my ship  to Cruiser will cost: "
		<< (CRUISER_COST - my_ship_cost) << " Resource points.\n";
	return 0;
}