#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
  int a;
  cout << "Введите число c клавиатуры6: ";
  cin >> a;
  cin.ignore();
  cout << "Вы ввели: "<< a <<"\n";
  cin.get();
}

