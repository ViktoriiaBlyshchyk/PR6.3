#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\PR6.3\PR6.3\PR6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int const n = 3;
			int a[n] = { 1, 2, 3 };
			int S = 0;
			for (int i = 0; i < n; i++)
				S += a[i] * a[i];
			Assert::AreEqual(14, S);
		}
	};
}