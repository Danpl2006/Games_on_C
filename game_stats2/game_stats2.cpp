// Game_stats

#include <iostream>

using namespace std;

int main()
{
	unsigned int score = 5000;
	cout << "score: " << score << endl;

	// Èçìåíåíèå çíà÷åíèÿ ïåðåìåííîé

	score = score + 100;
	cout << "score: " << score << endl;

	// Êîìáèíèðîâàííûé îïåðàòîð ïðèñâàèâàíèÿ

	score += 100;
	cout << "score: " << score << endl;

	// Èñïîëüçîâàíèå îïåðàòîðà èíêðåìåíòà ++ óâåëè÷èâàþùèé çíà÷åíèå ïåðåìåííîé íà åäèíèöó
	// ++lives - ñíà÷àëà ïåðåìåííàÿ óâåëè÷èâàåòñÿ íà 1 ïîòîì âñå îñòàëüíîå
	// lives++ - ïðèñâàåòñÿ ñíà÷àëà ïîòîì óâåëè÷èâàåòñÿ íà 1
	// -- äåêðåìåíò, òîæå ñàìîå òîëüêî óìåíüøàåò íà 1

	int lives = 3;
	++lives;
	cout << "lives: " << lives << endl;

	lives = 3;
	lives++;
	cout << "lives: " << lives << endl;

	lives = 3;
	int bonus = ++lives * 10;
	cout << "lives, bonus: " << lives << ', ' << bonus << endl;

	lives = 3;
	bonus = lives++ * 10;
	cout << "lives, bonus: " << lives << ', ' << bonus << endl;

	// Öåëî÷èñëåííîå ïåðåïîëíåíèå

	score = 4294967295;
	cout << "\nscore: " << score << endl;
	++score;
	cout << "score: " << score << endl;
	return 0;
}
