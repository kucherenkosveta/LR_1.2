#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
  int a;
  cout << "Введите число c клавиатуры: ";
  cin >> a;
  cin.ignore();
  cout << "Вы ввели: "<< a <<"\n";
  cin.get();
}

