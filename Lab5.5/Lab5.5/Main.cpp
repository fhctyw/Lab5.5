// Main.cpp
// Лісничук Арсен
// Лабораторна робота № 5.5
// Рекурсивні функції
// Варіант 13
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int MyRand(const int a, const int b, const int c, const int m, const int i, const int& V1, const int& V2)
{

	int tV1 = V1, t1V1 = V1;
	int tV2 = V2, t1V2 = V2;

	if (i == 1) 
		return V1; // V1
	if (i == 2) 
		return V2; // V2	
	else
	{
		MyRand(a, b, c, m, i - 1, tV1, tV2);
		MyRand(a, b, c, m, i - 2, t1V1, t1V2);
	}
	return (a * MyRand(a, b, c, m, i - 1, tV1, tV2) + b * MyRand(a, b, c, m, i - 2, t1V1, t1V2) + c) % m;
}

int main()
{
	srand(time(0));
	


	while (true)
	{
		int V1 = rand(), V2 = rand();
		int rnd = MyRand(1053, 13150, 41841, 11049, 10, V1, V2);
		cout << rnd << " ";
	}


	return 0;
}