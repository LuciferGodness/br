﻿// 10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
int main()
{
    int s, l1, l2, r1, r2, x1;
    cin >> s >> l1 >> l2 >> r1 >> r2;
	if (l1 < r1)
		x1 = l1;
	else
		x1 = r1;
	if (x1 + l2 == s)
		cout << x1 << " " << l2 << endl;
	else if (x1 + r2 == s)
		cout << x1 << " " << r2 << endl;
	else {
		if (x1 + l2 == s)
			cout << x1 << " " << l2 << endl;
		else if (x1 + r2 == s)
			cout << x1 << " " << r2 << endl;
		else
			cout << -1 << endl;
	}
	system("pause");
	return 0;
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
