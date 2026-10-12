#include "pch.h"
#include "CppUnitTest.h"
#define LINK_TEST
#include "../PR5.3/pr5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestTeylorSeries)
		{
			double res;
			res = f(0.5);
			Assert::AreEqual(0.252612, res, 0.0001);
		}
	};
}
