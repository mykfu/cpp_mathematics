// lesson_06.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <algorithm>
#include <functional>
#include <valarray>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <set>
#include <map>


using namespace std;

void print(vector<string> strs) {
	for (vector<string>::iterator iter = strs.begin(); iter != strs.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
}

void printInt(int i) {
	cout << i << " ";
}

void square(int& i) {
	i *= i;
}

string& strtoupper(string& str) {
	transform(str.begin(), str.end(), str.begin(), ::toupper);
	return str;
}

void print(valarray<int>& va) {
	for (int i = 0; i < va.size(); i++)
	{
		cout << va[i] << " ";
	}
	cout << endl;
}

int main()
{
	vector<int> v1;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(6);
	v1.push_back(12);
	v1[0];
	v1.at(0);

	vector<string> strs;
	strs.push_back("apple");
	strs.push_back("banana");
	strs.push_back("orange");

	print(strs);
	cout << "size = " << strs.size() << endl;

	strs.insert(strs.begin() + 1, "mandarin");
	strs.insert(strs.begin() + 1, "mandarin2");
	strs.insert(strs.begin() + 1, "vinograd");

	for (auto iter = strs.begin(); iter != strs.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << "size = " << strs.size() << endl;

	strs.erase(strs.begin() + 3, strs.begin() + 4);

	for (auto iter : strs) {
		cout << iter << " ";
	}
	cout << "size = " << strs.size() << endl;

	for_each(v1.begin(), v1.end(), printInt);
	cout << endl;
	for_each(v1.begin(), v1.end(), square);
	for_each(v1.begin(), v1.end(), printInt);
	cout << endl;

	transform(strs.begin(), strs.end(), strs.begin(), strtoupper);
	print(strs);
	cout << endl;

	void (*f)();
	int (*f)(int, int);

	transform(v1.begin(), v1.end(), v1.begin(), [](int x)->int { return x + 100; });
	transform(v1.begin(), v1.end(), v1.begin(), f);
	//transform(v1.begin(), v1.end(), v1.begin(), plus<int>());
	for_each(v1.begin(), v1.end(), printInt);
	cout << endl;


	sort(strs.begin(), strs.end());
	print(strs);
	cout << endl;
	reverse(strs.begin(), strs.begin() + strs.size() / 2);
	print(strs);
	cout << endl;
	srand(123);
	random_shuffle(strs.begin() + 1, strs.end() - 1);
	print(strs);
	cout << endl;

	vector<string>::iterator found = find(strs.begin(), strs.end(), "MANDARIN2");
	cout << *found << endl;

	//int arr[] = { 1,2,3,4,5,6 };
	//vector<int> v2(arr, arr + 6);
	//copy(v2.begin(), v2.end(), v1);

	for_each(v1.begin(), v1.end(), printInt);
	cout << endl;

	const int SIZE = 5;
	array<int, SIZE> fixedArray;

	int a1[SIZE] = { 1, 2, 3, 4, 5 };
	int a2[SIZE] = { 11, 12, 13, 14, 15 };

	valarray<int> va1(a1, SIZE);
	valarray<int> va2(a2, SIZE);
	valarray<int> va3(SIZE);

	print(va1);
	print(va2);
	va3 = va1 + va2;
	print(va3);

	cout << "sum of va1 is " << va1.sum() << endl;
	cout << "max of va1 is " << va1.max() << endl;
	cout << "min of va1 is " << va1.min() << endl;

	deque<int> deq;
	queue<int> queue;

	list<int> list;
	stack<int> stack;

	set<int> set;

	map<int, string> map;

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
