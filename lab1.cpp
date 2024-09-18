#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int budget = 2000;
	int quantity;
	double price;

	cout << "Ваш бюджет становить " << budget << endl << "Введіть кількість товарів:\n";
	cin >> quantity;
	cout << "Введіть ціну товару:\n";
	cin >> price;
	if ((quantity * price) > budget) {
		cout << "Ви перевищили бюджет!\n";
	}
	else {
		cout << "Все добре, ви не перевищили бюджет.\n";
	}
}
