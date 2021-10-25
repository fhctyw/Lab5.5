#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab5.5\Main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int tmp = MyRand(0, 0, 0, 0, 1, 10, 0);
			Assert::AreEqual(10, tmp);
		}
	};
}
