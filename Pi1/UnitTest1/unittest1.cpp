#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Pi1/BigDecimal.h"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod){
			BigDecimal a = 4;
			Assert::AreEqual(a.ToString(), std::string("4"));
		}

	};
}