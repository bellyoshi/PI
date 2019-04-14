#include "stdafx.h"
#include "CppUnitTest.h"
#include "../PiDll/BigDecimal.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(ToStringTest)
		{
			// TODO: テスト コードをここに挿入します
			BigDecimal b = 4;
			Assert::AreEqual(b.ToString(), std::string("4"));
		}
		TEST_METHOD(operandPlusTest)
		{
			// TODO: テスト コードをここに挿入します
			BigDecimal b = 1;
			BigDecimal a = 2;
			BigDecimal c;
			c = a + b;
			Assert::AreEqual(std::string("3"),c.ToString()) ;
		}

		TEST_METHOD(operandMinusTest)
		{
			// TODO: テスト コードをここに挿入します
			BigDecimal b = 1;
			BigDecimal a = 2;
			BigDecimal c;
			c = a - b;
			Assert::AreEqual(std::string("1"),c.ToString() );
		}

		TEST_METHOD(operandDivTest)
		{
			// TODO: テスト コードをここに挿入します
			BigDecimal b = 1;
			BigDecimal c;
			c = b / 8;
			Assert::AreEqual(std::string("0.125"),c.ToString());
		}
	};
}