#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-7.3rec/Lab-7.3rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest73rec
{
	TEST_CLASS(UnitTest73rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int** a = new int* [2];
			a[0] = new int[2]{ 0, -5 };
			a[1] = new int[2]{ 6, 0 };
			int count;
			bool result;
			int tmp = Part1_CountCols(a, 2, 2, count, result, 0);
			Assert::AreEqual(1, tmp);
		}
	};
}
