// Main.cpp
// Лісничук Арсен
// Лабораторна робота № 5.5
// Рекурсивні функції
// Варіант 13
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int MyRand(const int a, const int b, const int c, const int m, const int i, const int V1, const int V2)
{
	if (i == 1)
		return V1;
	if (i == 2) 
		return V2;
	return (a * MyRand(a, b, c, m, i - 1, V1, V2) + b * MyRand(a, b, c, m, i - 1, V1, V2) + c) % m;
}

int main()
{
	//srand(time(0));

	while (true)
	{
		int V1 = rand(), V2 = rand();
		int rnd = MyRand(1053, 13150, 41841, 110495, 11, V1, V2);
		cout << rnd << " ";
	}


	return 0;
}