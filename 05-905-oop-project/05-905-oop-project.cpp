﻿// 05-905-oop-project.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "Circle.h"
using namespace std;

void test();

struct Student {
    string fio;
    int age;
    string group;
};

int main()
{
    Student ivan = { "Ivanov", 18, "05-904" };
    Student petr = { "Petrov", 24, "05-904" };
    Student ivan2 = { "Ivanovich", 18, "05-904" };

    cout << ivan.fio << endl;

    Circle circle = Circle(); // varExample

    circle.setRadius(123.123);

    cout << circle.getRadius() << endl;

    Circle redCircle(300, "red");

    redCircle.print();
    
    Circle whiteCircle(600);

    whiteCircle.print();

    test();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.