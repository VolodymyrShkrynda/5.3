#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double S;
			const double x = 3;
			int n = 0;
			S = x * x * x / ((3 * n + 1) * (3 * n) * (3 * n - 1));

		}
	};
}
