#include "CppUnitTest.h"
#include "stdafx.h"
#include "../TestGit/MyMath.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Math math;
			Assert::AreEqual(math.product(3, 2), 6);
		}

		TEST_METHOD(TestMethod2)
		{
			Math math;
			Assert::AreEqual(math.product(3, 2), 7);
		}

	};
}

