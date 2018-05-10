// <copyright file="ColorFUnitTests.h" company="mwasplund"> 
//     Copyright (c) MWASPLUND. All rights reserved.
// </copyright>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Colors::UnitTests
{
	TEST_CLASS(ColorFUnitTests)
	{
	public:
		TEST_METHOD(ColorF_Initialize_ClearBlack)
		{
			auto& uut = ColorF::ClearBlack();

			Assert::AreEqual(0.0f, uut.GetR(), L"Verify R value.");
			Assert::AreEqual(0.0f, uut.GetG(), L"Verify R value.");
			Assert::AreEqual(0.0f, uut.GetB(), L"Verify R value.");
			Assert::AreEqual(0.0f, uut.GetA(), L"Verify R value.");
		}

		TEST_METHOD(ColorF_Initialize_Black)
		{
			auto& uut = ColorF::Black();

			Assert::AreEqual(0.0f, uut.GetR(), L"Verify R value.");
			Assert::AreEqual(0.0f, uut.GetG(), L"Verify R value.");
			Assert::AreEqual(0.0f, uut.GetB(), L"Verify R value.");
			Assert::AreEqual(1.0f, uut.GetA(), L"Verify R value.");
		}

		TEST_METHOD(ColorF_Initialize_White)
		{
			auto& uut = ColorF::White();

			Assert::AreEqual(1.0f, uut.GetR(), L"Verify R value.");
			Assert::AreEqual(1.0f, uut.GetG(), L"Verify R value.");
			Assert::AreEqual(1.0f, uut.GetB(), L"Verify R value.");
			Assert::AreEqual(1.0f, uut.GetA(), L"Verify R value.");
		}

		TEST_METHOD(ColorF_Initialize_Red)
		{
			auto& uut = ColorF::Red();

			Assert::AreEqual(1.0f, uut.GetR(), L"Verify R value.");
			Assert::AreEqual(0.0f, uut.GetG(), L"Verify R value.");
			Assert::AreEqual(0.0f, uut.GetB(), L"Verify R value.");
			Assert::AreEqual(1.0f, uut.GetA(), L"Verify R value.");
		}

		TEST_METHOD(ColorF_Initialize_Green)
		{
			auto& uut = ColorF::Green();

			Assert::AreEqual(0.0f, uut.GetR(), L"Verify R value.");
			Assert::AreEqual(1.0f, uut.GetG(), L"Verify R value.");
			Assert::AreEqual(0.0f, uut.GetB(), L"Verify R value.");
			Assert::AreEqual(1.0f, uut.GetA(), L"Verify R value.");
		}

		TEST_METHOD(ColorF_Initialize_Blue)
		{
			auto& uut = ColorF::Blue();

			Assert::AreEqual(0.0f, uut.GetR(), L"Verify R value.");
			Assert::AreEqual(0.0f, uut.GetG(), L"Verify R value.");
			Assert::AreEqual(1.0f, uut.GetB(), L"Verify R value.");
			Assert::AreEqual(1.0f, uut.GetA(), L"Verify R value.");
		}

		TEST_METHOD(ColorF_Initialize_Default)
		{
			ColorF uut = ColorF();

			Assert::AreEqual(0.0f, uut.GetR(), L"R must be initialized to zero.");
			Assert::AreEqual(0.0f, uut.GetG(), L"G must be initialized to zero.");
			Assert::AreEqual(0.0f, uut.GetB(), L"B must be initialized to zero.");
			Assert::AreEqual(0.0f, uut.GetA(), L"A must be initialized to zero.");
		}

		TEST_METHOD(ColorF_Initialize_Values)
		{
			ColorF uut = ColorF(0.1f, 0.2f, 0.3f, 0.4f);

			Assert::AreEqual(0.1f, uut.GetR(), L"R must be initialized to 0.1.");
			Assert::AreEqual(0.2f, uut.GetG(), L"G must be initialized to 0.2.");
			Assert::AreEqual(0.3f, uut.GetB(), L"B must be initialized to 0.3.");
			Assert::AreEqual(0.4f, uut.GetA(), L"A must be initialized to 0.4.");

			Assert::AreEqual(0.1f, uut[0], L"[0] must be initialized to 0.1.");
			Assert::AreEqual(0.2f, uut[1], L"[1] must be initialized to 0.2.");
			Assert::AreEqual(0.3f, uut[2], L"[2] must be initialized to 0.3.");
			Assert::AreEqual(0.4f, uut[3], L"[3] must be initialized to 0.4.");
		}

		TEST_METHOD(ColorF_Set_R)
		{
			ColorF uut = ColorF();
			uut.SetR(1);

			Assert::AreEqual(1.0f, uut.GetR(), L"R must be set.");
			Assert::AreEqual(0.0f, uut.GetG(), L"G must be not set.");
			Assert::AreEqual(0.0f, uut.GetB(), L"B must be not set.");
			Assert::AreEqual(0.0f, uut.GetA(), L"A must be not set.");
		}

		TEST_METHOD(ColorF_Set_G)
		{
			ColorF uut = ColorF();
			uut.SetG(1);

			Assert::AreEqual(0.0f, uut.GetR(), L"R must be not set.");
			Assert::AreEqual(1.0f, uut.GetG(), L"G must be set.");
			Assert::AreEqual(0.0f, uut.GetB(), L"B must be not set.");
			Assert::AreEqual(0.0f, uut.GetA(), L"A must be not set.");
		}

		TEST_METHOD(ColorF_Set_B)
		{
			ColorF uut = ColorF();
			uut.SetB(1);

			Assert::AreEqual(0.0f, uut.GetR(), L"R must be not set.");
			Assert::AreEqual(0.0f, uut.GetG(), L"G must be not set.");
			Assert::AreEqual(1.0f, uut.GetB(), L"B must be set.");
			Assert::AreEqual(0.0f, uut.GetA(), L"A must be not set.");
		}

		TEST_METHOD(ColorF_Set_A)
		{
			ColorF uut = ColorF();
			uut.SetA(1);

			Assert::AreEqual(0.0f, uut.GetR(), L"R must be not set.");
			Assert::AreEqual(0.0f, uut.GetG(), L"G must be not set.");
			Assert::AreEqual(0.0f, uut.GetB(), L"B must be not set.");
			Assert::AreEqual(1.0f, uut.GetA(), L"A must be set.");
		}

		TEST_METHOD(ColorF_Operator_MemberAccess)
		{
			ColorF uut = ColorF();
			uut[0] = 0.1f;
			uut[1] = 0.2f;
			uut[2] = 0.3f;
			uut[3] = 0.4f;

			Assert::AreEqual(0.1f, uut.GetR(), L"R must be set to 0.1.");
			Assert::AreEqual(0.2f, uut.GetG(), L"G must be set to 0.2.");
			Assert::AreEqual(0.3f, uut.GetB(), L"B must be set to 0.3.");
			Assert::AreEqual(0.4f, uut.GetA(), L"A must be set to 0.4.");

			Assert::AreEqual(0.1f, uut[0], L"[0] must be set to 0.1.");
			Assert::AreEqual(0.2f, uut[1], L"[1] must be set to 0.2.");
			Assert::AreEqual(0.3f, uut[2], L"[2] must be set to 0.3.");
			Assert::AreEqual(0.4f, uut[3], L"[3] must be set to 0.4.");
		}

		TEST_METHOD(ColorF_Operator_Assignment)
		{
			ColorF original = ColorF(0.1f, 0.2f, 0.3f, 0.4f);
			ColorF uut = original;

			Assert::AreEqual(0.1f, uut[0], L"[0] must be set to 0.1.");
			Assert::AreEqual(0.2f, uut[1], L"[1] must be set to 0.2.");
			Assert::AreEqual(0.3f, uut[2], L"[2] must be set to 0.3.");
			Assert::AreEqual(0.4f, uut[3], L"[3] must be set to 0.4.");
		}

		TEST_METHOD(ColorF_Operator_Assignment_Add)
		{
			ColorF uut = ColorF(0.1f, 0.2f, 0.3f, 0.4f);
			uut += ColorF(0.01f, 0.02f, 0.03f, 0.04f);

			Assert::AreEqual(0.11f, uut[0], L"[0] must be set to 0.11.");
			Assert::AreEqual(0.22f, uut[1], L"[1] must be set to 0.22.");
			Assert::AreEqual(0.33f, uut[2], L"[2] must be set to 0.33.");
			Assert::AreEqual(0.44f, uut[3], L"[3] must be set to 0.44.");
		}

		TEST_METHOD(ColorF_Operator_Assignment_Subtract)
		{
			ColorF uut = ColorF(0.21f, 0.42f, 0.63f, 0.84f);
			uut -= ColorF(0.1f, 0.2f, 0.3f, 0.4f);

			AssertEx::AreNearEqual(0.11f, uut[0], L"[0] must be set to 0.11.");
			AssertEx::AreNearEqual(0.22f, uut[1], L"[1] must be set to 0.22.");
			AssertEx::AreNearEqual(0.33f, uut[2], L"[2] must be set to 0.33.");
			AssertEx::AreNearEqual(0.44f, uut[3], L"[3] must be set to 0.44.");
		}

		TEST_METHOD(ColorF_Operator_Assignment_Multiply)
		{
			ColorF uut = ColorF(0.1f, 0.2f, 0.3f, 0.4f);
			uut *= ColorF(0.5f, 0.5f, 0.5f, 0.5f);

			Assert::AreEqual(0.05f, uut[0], 0, L"[0] must be set to 0.05.");
			Assert::AreEqual(0.1f, uut[1], 0, L"[1] must be set to 0.1.");
			Assert::AreEqual(0.15f, uut[2], 0, L"[2] must be set to 0.15.");
			Assert::AreEqual(0.2f, uut[3], 0, L"[3] must be set to 0.2.");
		}

		TEST_METHOD(ColorF_Operator_Assignment_Divide)
		{
			ColorF uut = ColorF(0.1f, 0.2f, 0.3f, 0.4f);
			uut /= ColorF(0.5f, 0.5f, 0.5f, 0.5f);

			Assert::AreEqual(0.2f, uut[0], 0, L"[0] must be set to 0.2.");
			Assert::AreEqual(0.4f, uut[1], 0, L"[1] must be set to 0.4.");
			Assert::AreEqual(0.6f, uut[2], 0, L"[2] must be set to 0.6.");
			Assert::AreEqual(0.8f, uut[3], 0, L"[3] must be set to 0.8.");
		}

		TEST_METHOD(ColorF_Operator_Arithmetic_Add)
		{
			ColorF uut = ColorF(0.1f, 0.2f, 0.3f, 0.4f) + ColorF(0.01f, 0.02f, 0.03f, 0.04f);

			Assert::AreEqual(0.11f, uut[0], L"[0] must be set to 0.11.");
			Assert::AreEqual(0.22f, uut[1], L"[1] must be set to 0.22.");
			Assert::AreEqual(0.33f, uut[2], L"[2] must be set to 0.33.");
			Assert::AreEqual(0.44f, uut[3], L"[3] must be set to 0.44.");
		}

		TEST_METHOD(ColorF_Operator_Arithmetic_Subtract)
		{
			ColorF uut = ColorF(0.21f, 0.42f, 0.63f, 0.84f) - ColorF(0.1f, 0.2f, 0.3f, 0.4f);

			AssertEx::AreNearEqual(0.11f, uut[0], L"[0] must be set to 0.11.");
			AssertEx::AreNearEqual(0.22f, uut[1], L"[1] must be set to 0.22.");
			AssertEx::AreNearEqual(0.33f, uut[2], L"[2] must be set to 0.33.");
			AssertEx::AreNearEqual(0.44f, uut[3], L"[3] must be set to 0.44.");
		}

		TEST_METHOD(ColorF_Operator_Arithmetic_Multiply)
		{
			ColorF uut = ColorF(0.1f, 0.2f, 0.3f, 0.4f) * ColorF(0.5f, 0.5f, 0.5f, 0.5f);

			Assert::AreEqual(0.05f, uut[0], 0, L"[0] must be set to 0.05.");
			Assert::AreEqual(0.1f, uut[1], 0, L"[1] must be set to 0.1.");
			Assert::AreEqual(0.15f, uut[2], 0, L"[2] must be set to 0.15.");
			Assert::AreEqual(0.2f, uut[3], 0, L"[3] must be set to 0.2.");
		}

		TEST_METHOD(ColorF_Operator_Arithmetic_Divide)
		{
			ColorF uut = ColorF(0.1f, 0.2f, 0.3f, 0.4f) / ColorF(0.5f, 0.5f, 0.5f, 0.5f);

			Assert::AreEqual(0.2f, uut[0], 0, L"[0] must be set to 0.2.");
			Assert::AreEqual(0.4f, uut[1], 0, L"[1] must be set to 0.4.");
			Assert::AreEqual(0.6f, uut[2], 0, L"[2] must be set to 0.6.");
			Assert::AreEqual(0.8f, uut[3], 0, L"[3] must be set to 0.8.");
		}

		TEST_METHOD(ColorF_Operator_Comparison)
		{
			ColorF uut1 = ColorF(0.1f, 0.1f, 0.1f, 0.1f);
			ColorF uut2 = ColorF(0.1f, 0.1f, 0.1f, 0.2f);
			ColorF uut3 = ColorF(0.1f, 0.1f, 0.2f, 0.1f);
			ColorF uut4 = ColorF(0.1f, 0.2f, 0.1f, 0.1f);
			ColorF uut5 = ColorF(0.2f, 0.1f, 0.1f, 0.1f);

			Assert::IsTrue(uut1 == uut1, L"Must equal self.");
			Assert::IsFalse(uut1 != uut1, L"Must equal self.");

			Assert::IsFalse(uut1 == uut2, L"Must not equal.");
			Assert::IsTrue(uut1 != uut2, L"Must not equal.");

			Assert::IsFalse(uut1 == uut3, L"Must not equal.");
			Assert::IsTrue(uut1 != uut3, L"Must not equal.");

			Assert::IsFalse(uut1 == uut4, L"Must not equal.");
			Assert::IsTrue(uut1 != uut4, L"Must not equal.");

			Assert::IsFalse(uut1 == uut5, L"Must not equal.");
			Assert::IsTrue(uut1 != uut5, L"Must not equal.");
		}
	};
} // namespace Colors::UnitTests