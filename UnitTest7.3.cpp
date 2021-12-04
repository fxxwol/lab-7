#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-7.3/Lab-7.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest73
{
	TEST_CLASS(UnitTest73)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int** a = new int* [2];
			a[0] = new int[2]{ 0, -5 };
			a[1] = new int[2]{ 6, 0 };
			int count;
			int tmp = Count(a, 2, 2, count);
			Assert::AreEqual(1, tmp);


		}
	};
}
