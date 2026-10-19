#include "pch.h"
#include "CppUnitTest.h"
#define LINK_TEST
#include "D:\Проєкти VSC++\PR5.4\PR5.4\5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestRecursion1)
		{
			double res;
			res = S1(1, 3);
			Assert::AreEqual(3.68571, res, 0.0001);
		}
	};
}
