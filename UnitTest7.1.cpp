#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-7.1/Lab-7.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int** a = new int* [2];
			a[0] = new int[2]{ 0, 0 };
			a[1] = new int[2]{ 0, 6 };
			int S;
			int k;
			Calc(a, 2, 2, S, k);
			Assert::AreEqual(6, S);


		}
	};
}
