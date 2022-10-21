#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
  int a;
  cout << "Введите число: ";
  cin >> a;
  cin.ignore();
  cout << "Вы ввели: "<< a <<"\n";
  cin.get();
}

