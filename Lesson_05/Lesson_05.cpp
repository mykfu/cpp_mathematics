// Lesson_05.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define NDEBUG
#include <cassert>
#include <vector>
using namespace std;

enum Error
{
	OK, LN, SQRT
};

Error errcode;
//
//double f(double x) { // x <= 0, x < exp(10)
//	if (x <= 0) {
//		errcode = LN;
//		return 0;
//	}
//	if (x > exp(10)) {
//		errcode = SQRT;
//		return 0;
//	}
//	errcode = OK;
//	return sqrt(10 - log(x));
//}
//
//double f(double x) { // x <= 0, x < exp(10)
//	if (x <= 0) throw "Logarithm undefined.";
//	if (x > exp(10)) throw "Square root undefined.";
//	return sqrt(10 - log(x));
//}
//
//class LnException{};
//class SqrtException{};

class LnException : public exception{
	char const* what() const throw() {
		return "Logarithm undefined.";
	}	
};
class SqrtException : public exception {
	char const* what() const throw() {
		return "Squre root undefined.";
	}
};

double f(double x) { // x <= 0, x < exp(10)
	if (x <= 0) throw LnException();
	if (x > exp(10)) throw SqrtException();
	return sqrt(10 - log(x));
}

int main()
{
	double x, y;
	cout << "Enter x:\n";
	cin >> x;
	try {
		y = f(x);
		cout << "y = sqrt(10 - log(" << x << ")) = " << y << endl;
	}
	//catch (LnException) {
	//	cout << "Error: Logarithm undefined." << endl;
	//}
	//catch (SqrtException) {
	//	cout << "Error: Square root undefined." << endl;
	//}
	//catch (const char* ex) {
	//	cout << "Error: " << ex << endl;
	//}
	catch (exception& ex) {
		cout << "Error: " << ex.what() << endl;
	}
	//try {
	//	throw 1;
	//}
	//catch (int e) {
	//	cout << e;
	//}

	//switch (errcode)
	//{
	//case LN:
	//	cerr << "Logarithm undefined.\n";
	//	return EXIT_FAILURE;
	//case SQRT:
	//	cerr << "Square root undefined.\n";
	//	return EXIT_FAILURE;
	//case OK:
	//	cout << "y = sqrt(10 - log(" << x << ")) = " << y << endl;
	//	return EXIT_SUCCESS;
	//default:
	//	cerr << "Internal error.\n";
	//	return EXIT_FAILURE;
	//}

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	assert(v.size() == 2);
	
	try {
		cout << "v[2] = " << v.at(2) << endl;
	}
	catch (exception & ex) {
		cout << ex.what() << endl;
	}

	static_assert(sizeof(int) == 4, "int must be 4 bytes.");

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
