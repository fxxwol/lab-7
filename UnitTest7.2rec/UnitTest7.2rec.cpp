#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-7.2rec/Lab-7.2rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest72rec
{
	TEST_CLASS(UnitTest72rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 2, -4, 5, 9, 10 };
			int tmp = smallestInRow(a, 5, 0, 2, 0);
			Assert::AreEqual(1, tmp);

		}
	};
}
