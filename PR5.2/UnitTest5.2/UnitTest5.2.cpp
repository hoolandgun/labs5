#include "pch.h"
#include "CppUnitTest.h"
#define LINK_TEST
#include "../PR5.2/pr5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestFunctionA)
		{
			double x = 2.0;
			int n = 1;
			double a = 0.5;
			A(x, n, a);
			Assert::AreEqual((1.0 / 24.0), a, 0.0001);
		}
	};
}
