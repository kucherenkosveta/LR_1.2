#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
  int number;
  cout << "Введите число: ";
  cin >> number;
  cin.ignore();
  cout << "Вы ввели: "<< number <<"\n";
  cin.get();
}

