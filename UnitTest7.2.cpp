#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-7.2/Lab-7.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest72
{
	TEST_CLASS(UnitTest72)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a [] = { 2, -4, 5, 9, 10 };
			int index = smallestInRow(a, 5);
			Assert::AreEqual(1, index);
		}
	};
}
