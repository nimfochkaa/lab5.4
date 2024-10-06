#include "pch.h"
#include "CppUnitTest.h"
#include "../5.4/5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int N = 5;  

			double iterResult = S0(N);
			double recUpDescend = S1(19, N);   
			double recUpAscend = S2(N, N);       
			double recDownDescend = S3(19, N);  
			double recDownAscend = S4(N, N);     

			Assert::AreEqual(iterResult, recUpDescend, 0.0001, L"Iterative and RecUpDescend results do not match.");
			Assert::AreEqual(iterResult, recUpAscend, 0.0001, L"Iterative and RecUpAscend results do not match.");
			Assert::AreEqual(iterResult, recDownDescend, 0.0001, L"Iterative and RecDownDescend results do not match.");
			Assert::AreEqual(iterResult, recDownAscend, 0.0001, L"Iterative and RecDownAscend results do not match.");
		}
	};
}
