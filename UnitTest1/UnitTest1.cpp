#include "pch.h"
#include "CppUnitTest.h"
#include "../PR 5.4/PR 5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestS0)
		{
			
			double result = S0(1); 
			double expected = 2; 
			double epsilon = 0.0001; 

			
			Assert::AreEqual(result, expected, epsilon);
		}
	};
}
