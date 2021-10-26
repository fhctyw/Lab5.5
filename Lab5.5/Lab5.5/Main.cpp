// Main.cpp
// Лісничук Арсен
// Лабораторна робота № 5.5
// Рекурсивні функції
// Варіант 13
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int MyRand(const int a, const int b, const int c, const int m, const int i, const int V1, const int V2, int level, int &depth)
{
	if (level > depth)
		depth = level;
	if (i == 1)
		return V1;
	if (i == 2)
		return V2;
	return (a * MyRand(a, b, c, m, i - 1, V1, V2, level + 1, depth) + b * MyRand(a, b, c, m, i - 2, V1, V2, level + 1, depth) + c) % m;
}

int main()
{
	srand(time(0));

	int a, b, c, m, i, depth;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "m = "; cin >> m;
	cout << "i(Vi) = "; cin >> i;

	int V1 = rand(), V2 = rand();
	cout << "MyRand() = " << MyRand(a, b, c, m, i, V1, V2, 1, depth) << endl;
	cout << "depth = " << depth << endl;

	//while (true)
	//{
	//	int V1 = rand(), V2 = rand();
	//	int rnd = MyRand(a, b, c, m, i, V1, V2, 1, depth);
	//	cout << rnd << " ";
	//}


	return 0;
}