// definijowanieklas1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std; 

class Triangle {
public:
	int bok_a;
	int bok_b;
	int bok_c;
	int h;

	void obliczPole() {
		cout << "Pole = " << bok_a + bok_b + bok_c << endl;
	}
	void obliczObwod() {
		cout << "Obwod = " << (bok_a * h) / 2 << endl	;
	}
};

int main() {
	Triangle triangle;
	int x;
	int y;
	int z;
	int a;
	cout << "Podaj bok a - ";
	cin >> x;
	triangle.bok_a = x;
	cout << "Podaj bok b - ";
	cin >> y;
	triangle.bok_b = y;
	cout << "Podaj bok c - ";
	cin >> z;
	triangle.bok_c = z;
	cout << "Podaj h - ";
	cin >> a;
	triangle.h = a;
	triangle.obliczPole();
	triangle.obliczObwod();
};