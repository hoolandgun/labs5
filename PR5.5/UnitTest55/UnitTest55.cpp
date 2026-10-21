#include "pch.h"
#include "CppUnitTest.h"
#define LINK_TEST
#include "../PR5.5/pr5.5.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestElementSum)
		{
			int res;
			res = pascal_recursive(4, 2);
			Assert::AreEqual(6, res);
		}
	};
}
