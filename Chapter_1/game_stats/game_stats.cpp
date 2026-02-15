// Game stats

#include <iostream>

using namespace std;

int main()
{   
	// Объявление и установка типа переменной (примитива)
	
	int score;
	double distance;
	char playAgain;
	bool ShildUp;
	short lives, alienKilled;

	// Присвоение значений переменным

	score = 0;
	distance = 1200.76;
	playAgain = 'u';
	ShildUp = true;
	lives = 3;
	alienKilled = 10;
	
	double engineTemp = 6572.89;

	// Вывод
	// Управляющие последовательности: \n - новая строка \t - табуляция

	cout << "\ncore: " << score << endl;
	cout << "distance: " << distance << endl;
	cout << "playAgain: " << playAgain << endl;
	cout << "lives: " << lives << endl;
	cout << "alienKilled: " << alienKilled << endl;
	cout << "engineTemp: " << engineTemp << endl;

	/*
	* https://learn.microsoft.com/ru-ru/cpp/cpp/data-type-ranges?view=msvc-170
	* Модификаторы позволяют изменять типы
	* short - сокращает общее количество значений, которые могут содержаться в переменной
	* long - увеличивает общее количество значений, которые могут содержаться в переменной
	* short - уменьшает простраство, отводимое под переменную, long - увеличивает
	* short и long применимы к int, long также к double
	* signed и unsigned работают только с целочисленными типами данных
	* signed - переменная может хранить положительные и отрицательные данные
	* unsigned - только положительные
	* По умолчанию с целочисленными типами применяется signed
	* cin - получение пользовательского ввода (cin - объект из пространства std) 
	* >> - оператор извлечения, чтобы сохранить значение ввода в переменную
	*/

	int fuel;
	cout << "/nHow mush fuel?";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;

	/*
	* Код определяет идентификатор usshort как сокращенное и альтернативное имя для типа unsigned short int
	* Для опредееления новых имен существующих типов  используется typedef <известный тип> <новое имя>
	*/

	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "/nbonus: " << bonus << endl;
	return 0;

}
