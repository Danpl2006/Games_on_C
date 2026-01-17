// Game_stats

#include <iostream>

using namespace std;

int main()
{
  unsigned int score = 5000;
  cout << "score: " << score << endl;

  // Изменение значения переменной
  
  score = score + 100;
  cout << "score: " << score << endl;

  // Комбинированный оператор присваивания

  score += 100;
  cout << "score: " << score << endl;
  
  // Использование оператора инкремента ++ увеличивающий значение переменной на единицу
  // ++lives - сначала переменная увеличивается на 1 потом все остальное
  // lives++ - присвается сначала потом увеличивается на 1
  // -- декремент, тоже самое только уменьшает на 1

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

  // Целочисленное переполнение
  score = 4294967295;
  cout << "\nscore: " << score << endl;
  ++score;
  cout << "score: " << score << endl;
  return 0; 
}
