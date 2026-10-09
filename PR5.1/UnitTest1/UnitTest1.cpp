#include "pch.h"
#include "CppUnitTest.h"

#define LINK_TEST
#include "../PR5.1/pr5.1.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double t;
            t = g(2.0, 3.0);

            Assert::AreEqual(19.0, t, 0.0001);
        }
    };
}
