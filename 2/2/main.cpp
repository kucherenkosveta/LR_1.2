#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
  int a;
  cout << "Введите циферку c клавиатуры: ";
  cin >> a;
  cin.ignore();
  cout << "Введенное вами число: "<< a <<"\n";
  cin.get();
}

