// lesson_04.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

//
//void swap(int& a, int& b) {
//	int t = a;
//	a = b;
//	b = t;
//}
//
//void swap(double& a, double& b) {
//	double t = a;
//	a = b;
//	b = t;
//}

template<typename T>
void swap(T& a, T& b) {
	T t = a;
	a = b;
	b = t;
}

template<typename T = int>
T abs(T value) {
	if (value >= 0) return value;
	else return -value;
}

template<class T>
class Number {
private:
	T value;

public:
	T getValue() {
		return value;
	}


};


template<typename T, int s>
class Stack {
	T data[s];
	int c;

public:
	Stack() {c = 0}
	void push(T t) {
		if (c < s) data[c++] = s;
	}

	T pop() {
		if (!empty()) return data[--c];
		else return T();
	}

	bool empty() {
		return c == 0;
	}
};

template<typename T>
class Node {
private:
	T value;
	Node* next;

public:
	Node(T value, Node* next = nullptr) : value(value), next(next) {}

	T getValue() {
		return value;
	}

	Node* getNext() {
		return next;
	}
};

template<typename T>
class LinkedList {
private:
	Node<T>* head;

public:

	LinkedList(Node<T>* head = nullptr) : head(head) {}


	void add(Node<T>* new_node) {

	}

	T pop() {
		return nullptr;
	}

	Node<T> getElementAt(int k) {
		return nullptr;
	}

	void removeElementAt(int k) {

	}

	Node<T> operator[](int k) {
		return nullptr;
	}

	void print() const {
		cout << "LinkedList@[";
		
		Node<T>* current = head;
		while (current != nullptr)
		{
			cout << current->getValue() << (current->getNext() ? ", " : "");
			current = current->getNext();
		}
		cout << "]\n";
	}

};



int main()
{
	vector<int> vec(10);
	vector<string> vec2(10);
	string s1 = "asdf";
	string s2 = "fasd";
	swap(s1, s2);

	Number<double> num;

	Node<int>* n3 = new Node<int>(3, nullptr);
	Node<int>* n2 = new Node<int>(2, n3);
	Node<int>* n1 = new Node<int>(1, n2);

	LinkedList<int>* list = new LinkedList<int>(n1);

	list->print();


	Stack<int, 10> st;

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
