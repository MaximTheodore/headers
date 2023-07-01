#include <iostream>
#include <Windows.h>
#include <string>
#include "Three_letter.h"
#include "Type.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    int a, b;
    double c, d;
    string j, k;
    cout << "Введите два целых числа!\n";
    cin >> a;
    cin >> b;
    cout << "Введите два числа с запятой!\n";
    cin >> c;
    cin >> d;
    cout << "Введите два слова!\n";
    cin>>j;
    cin>>k;
    cout << Type:: new_sum(sum(a, b))<<"\n";
    cout << Type::new_sum(sum(c, d))<<"\n";
    cout << Type::new_sum(sum(j, k));

}

