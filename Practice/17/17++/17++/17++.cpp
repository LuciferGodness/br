﻿// 17++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    const int N = 37;
    int A[N];
    int red[]{ 1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36 };
    int black[]{ 2, 4, 6, 8, 10, 11, 13, 15, 17, 20, 22, 24, 26, 28, 29, 31, 33, 35 };
    int i, n, b, t, s;
    b = 0;
    t = 0;
    s = 0;
    for (i = 0; i < N; i++)
    {
        A[i] = 0;
    }
    while (1)
    {
        cin >> n;
        for (i = 0; i < 18; i++)
        {
            if (n == red[i])
                s++;
            if (n == black[i])
                t++;
                
        }
        A[n]++;
        if (n < 0)
            break;
        for (int i = 0; i < N; i++)
        {
            if (A[i] > b) 
                b = A[i];
        }
        for (int i = 0; i < N; i++)
        {
            if (A[i] == b) cout << i << " ";
        }
        cout << endl;
        for (int i = 0; i < N; i++) 
        {
            if (A[i] == 0) cout << i << " ";
        }
        cout << endl << s << " " << t << endl;
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
