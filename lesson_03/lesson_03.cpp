// lesson_03.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define out(X) (cout << #X << " = " << X)

using namespace std;

class Point {
protected:
	int x, y;
	// int Point::count = 0;
public:
	static int count;
	Point(int x = 0, int y = 0) : x(x), y(y) {
		count++;
	}

	virtual ~Point() {}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	static int getCount() {
		return count;
	}
	
	static void setCount(int count) {
		Point::count = count;
	}

	void setX(int x) {
		this->x = x;
	}

	void setY(int y) {
		(*this).y = y;
	}

	virtual void print() const {
		cout << "Point@(" << x << ", " << y << ")\n";
	}

};

class MovablePoint : public Point {
private:
	int xSpeed, ySpeed;

public:
	MovablePoint(int x, int y, int xSpeed = 0, int ySpeed = 0) : 
		Point(x, y), xSpeed(xSpeed), ySpeed(ySpeed) {}

	int getXSpeed() {
		return xSpeed;
	}

	int getYSpeed() {
		return ySpeed;
	}

	void move() {
		Point::setX(x + xSpeed);
		y += ySpeed;
	}

	void print() const {
		cout << "Movable";
		Point::print();
		cout << "\tspeed = (" << xSpeed << ", " << ySpeed << ")\n";
	}


};

int main()
{
	Point::count = 0;
	Point p;
	p.print();
	Point p1(10);
	p1.print();

	Point p2(20, 30);
	p2.print();

	Point* ptrPoint = new Point(31, 32);

	ptrPoint->print();

	Point points[2] = {Point(1,1), Point(2, 3)};

	points[0].print();
	cout << "points = " << points << endl;

	(points + 1)->print();

	Point* ptrPoints = new Point[2];

	MovablePoint mp(10, 20, 100, 300);
	cout << "mp = ";
	mp.print();
	mp.move();
	cout << "mp after = ";
	mp.print();

	Point* ptrPoint2 = new MovablePoint(32, 65, 100, 200);
	ptrPoint2->print();
	
	Point p3 = MovablePoint(32, 65, 100, 200);
	p3.print();

	MovablePoint* ptrMV = (MovablePoint*) ptrPoint;
	cout << "ptrMV = ";
	ptrMV->print();


	delete ptrPoint2;
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
