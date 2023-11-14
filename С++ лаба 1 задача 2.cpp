#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Существуют 4 товара:a,b,c,d"<<endl;
	cout << "Введите цену каждого товара"<<endl;
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
		cout << "Товар не может иметь отрицательную или нулевую стоимость";
	}
	else {
		if ((a + b + c + d) > 500 && (a + b + c + d) < 1000) {
			cout << "Цена покупки:" << (a + b + c + d) - (a + b + c + d) * 0.03;
		}
		if ((a + b + c + d) > 1000) {
			cout << "Цена покупки:" << (a + b + c + d) - (a + b + c + d) * 0.05;
		}
		if ((a + b + c + d) > 0 && (a + b + c + d) < 500 ){
			cout << "Цена покупки:" << a + b + c + d;
		}
	}
}