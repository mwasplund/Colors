// <copyright file="ColorsUnitTests.h" company="mwasplund"> 
//   Copyright (c) mwasplund. All rights reserved.
// </copyright>

namespace Colors::UnitTests
{
	class ColorsUnitTests
	{
	public:
		void Initialize_ClearBlack()
		{
			auto& uut = Color::ClearBlack();

			Assert::AreEqual(0.0f, uut.GetR(), "Verify R value.");
			Assert::AreEqual(0.0f, uut.GetG(), "Verify R value.");
			Assert::AreEqual(0.0f, uut.GetB(), "Verify R value.");
			Assert::AreEqual(0.0f, uut.GetA(), "Verify R value.");
		}

		void Initialize_Black()
		{
			auto& uut = Color::Black();

			Assert::AreEqual(0.0f, uut.GetR(), "Verify R value.");
			Assert::AreEqual(0.0f, uut.GetG(), "Verify R value.");
			Assert::AreEqual(0.0f, uut.GetB(), "Verify R value.");
			Assert::AreEqual(1.0f, uut.GetA(), "Verify R value.");
		}

		void Initialize_White()
		{
			auto& uut = Color::White();

			Assert::AreEqual(1.0f, uut.GetR(), "Verify R value.");
			Assert::AreEqual(1.0f, uut.GetG(), "Verify R value.");
			Assert::AreEqual(1.0f, uut.GetB(), "Verify R value.");
			Assert::AreEqual(1.0f, uut.GetA(), "Verify R value.");
		}

		void Initialize_Red()
		{
			auto& uut = Color::Red();

			Assert::AreEqual(1.0f, uut.GetR(), "Verify R value.");
			Assert::AreEqual(0.0f, uut.GetG(), "Verify R value.");
			Assert::AreEqual(0.0f, uut.GetB(), "Verify R value.");
			Assert::AreEqual(1.0f, uut.GetA(), "Verify R value.");
		}

		void Initialize_Green()
		{
			auto& uut = Color::Green();

			Assert::AreEqual(0.0f, uut.GetR(), "Verify R value.");
			Assert::AreEqual(1.0f, uut.GetG(), "Verify R value.");
			Assert::AreEqual(0.0f, uut.GetB(), "Verify R value.");
			Assert::AreEqual(1.0f, uut.GetA(), "Verify R value.");
		}

		void Initialize_Blue()
		{
			auto& uut = Color::Blue();

			Assert::AreEqual(0.0f, uut.GetR(), "Verify R value.");
			Assert::AreEqual(0.0f, uut.GetG(), "Verify R value.");
			Assert::AreEqual(1.0f, uut.GetB(), "Verify R value.");
			Assert::AreEqual(1.0f, uut.GetA(), "Verify R value.");
		}

		void Initialize_Default()
		{
			Color uut = Color();

			Assert::AreEqual(0.0f, uut.GetR(), "R must be initialized to zero.");
			Assert::AreEqual(0.0f, uut.GetG(), "G must be initialized to zero.");
			Assert::AreEqual(0.0f, uut.GetB(), "B must be initialized to zero.");
			Assert::AreEqual(0.0f, uut.GetA(), "A must be initialized to zero.");
		}

		void Initialize_Values()
		{
			Color uut = Color(0.1f, 0.2f, 0.3f, 0.4f);

			Assert::AreEqual(0.1f, uut.GetR(), "R must be initialized to 0.1.");
			Assert::AreEqual(0.2f, uut.GetG(), "G must be initialized to 0.2.");
			Assert::AreEqual(0.3f, uut.GetB(), "B must be initialized to 0.3.");
			Assert::AreEqual(0.4f, uut.GetA(), "A must be initialized to 0.4.");
		}

		void Set_R()
		{
			Color uut = Color();
			uut.SetR(1);

			Assert::AreEqual(1.0f, uut.GetR(), "R must be set.");
			Assert::AreEqual(0.0f, uut.GetG(), "G must be not set.");
			Assert::AreEqual(0.0f, uut.GetB(), "B must be not set.");
			Assert::AreEqual(0.0f, uut.GetA(), "A must be not set.");
		}

		void Set_G()
		{
			Color uut = Color();
			uut.SetG(1);

			Assert::AreEqual(0.0f, uut.GetR(), "R must be not set.");
			Assert::AreEqual(1.0f, uut.GetG(), "G must be set.");
			Assert::AreEqual(0.0f, uut.GetB(), "B must be not set.");
			Assert::AreEqual(0.0f, uut.GetA(), "A must be not set.");
		}

		void Set_B()
		{
			Color uut = Color();
			uut.SetB(1);

			Assert::AreEqual(0.0f, uut.GetR(), "R must be not set.");
			Assert::AreEqual(0.0f, uut.GetG(), "G must be not set.");
			Assert::AreEqual(1.0f, uut.GetB(), "B must be set.");
			Assert::AreEqual(0.0f, uut.GetA(), "A must be not set.");
		}

		void Set_A()
		{
			Color uut = Color();
			uut.SetA(1);

			Assert::AreEqual(0.0f, uut.GetR(), "R must be not set.");
			Assert::AreEqual(0.0f, uut.GetG(), "G must be not set.");
			Assert::AreEqual(0.0f, uut.GetB(), "B must be not set.");
			Assert::AreEqual(1.0f, uut.GetA(), "A must be set.");
		}

		void Operator_Assignment()
		{
			Color original = Color(0.1f, 0.2f, 0.3f, 0.4f);
			Color uut = original;

			Assert::AreEqual(0.1f, uut.GetR(), "R must be set to 0.1.");
			Assert::AreEqual(0.2f, uut.GetG(), "G must be set to 0.2.");
			Assert::AreEqual(0.3f, uut.GetB(), "B must be set to 0.3.");
			Assert::AreEqual(0.4f, uut.GetA(), "A must be set to 0.4.");
		}

		void Operator_Assignment_Add()
		{
			Color uut = Color(0.1f, 0.2f, 0.3f, 0.4f);
			uut += Color(0.01f, 0.02f, 0.03f, 0.04f);

			Assert::AreEqual(0.11f, uut.GetR(), "R must be set to 0.11.");
			Assert::AreEqual(0.22f, uut.GetG(), "G must be set to 0.22.");
			Assert::AreEqual(0.33f, uut.GetB(), "B must be set to 0.33.");
			Assert::AreEqual(0.44f, uut.GetA(), "A must be set to 0.44.");
		}

		void Operator_Assignment_Subtract()
		{
			Color uut = Color(1.1f, 2.2f, 3.3f, 4.4f);
			uut -= Color(0.1f, 0.2f, 0.3f, 0.4f);

			Assert::AreEqual(1.0f, uut.GetR(), "R must be set to 1.0.");
			Assert::AreEqual(2.0f, uut.GetG(), "G must be set to 2.0.");
			Assert::AreEqual(3.0f, uut.GetB(), "B must be set to 3.0.");
			Assert::AreEqual(4.0f, uut.GetA(), "A must be set to 4.0.");
		}

		void Operator_Assignment_Multiply()
		{
			Color uut = Color(0.1f, 0.2f, 0.3f, 0.4f);
			uut *= Color(0.5f, 0.5f, 0.5f, 0.5f);

			Assert::AreEqual(0.05f, uut.GetR(), "R must be set to 0.05.");
			Assert::AreEqual(0.1f, uut.GetG(), "G must be set to 0.1.");
			Assert::AreEqual(0.15f, uut.GetB(), "B must be set to 0.15.");
			Assert::AreEqual(0.2f, uut.GetA(), "A must be set to 0.2.");
		}

		void Operator_Assignment_Divide()
		{
			Color uut = Color(0.1f, 0.2f, 0.3f, 0.4f);
			uut /= Color(0.5f, 0.5f, 0.5f, 0.5f);

			Assert::AreEqual(0.2f, uut.GetR(), "R must be set to 0.2.");
			Assert::AreEqual(0.4f, uut.GetG(), "G must be set to 0.4.");
			Assert::AreEqual(0.6f, uut.GetB(), "B must be set to 0.6.");
			Assert::AreEqual(0.8f, uut.GetA(), "A must be set to 0.8.");
		}

		void Operator_Arithmetic_Add()
		{
			Color uut = Color(0.1f, 0.2f, 0.3f, 0.4f) + Color(0.01f, 0.02f, 0.03f, 0.04f);

			Assert::AreEqual(0.11f, uut.GetR(), "R must be set to 0.11.");
			Assert::AreEqual(0.22f, uut.GetG(), "G must be set to 0.22.");
			Assert::AreEqual(0.33f, uut.GetB(), "B must be set to 0.33.");
			Assert::AreEqual(0.44f, uut.GetA(), "A must be set to 0.44.");
		}

		void Operator_Arithmetic_Subtract()
		{
			Color uut = Color(1.1f, 2.2f, 3.3f, 4.4f) - Color(0.1f, 0.2f, 0.3f, 0.4f);

			Assert::AreEqual(1.0f, uut.GetR(), "R must be set to 1.0.");
			Assert::AreEqual(2.0f, uut.GetG(), "G must be set to 2.0.");
			Assert::AreEqual(3.0f, uut.GetB(), "B must be set to 3.0.");
			Assert::AreEqual(4.0f, uut.GetA(), "A must be set to 4.0.");
		}

		void Operator_Arithmetic_Multiply()
		{
			Color uut = Color(0.1f, 0.2f, 0.3f, 0.4f) * Color(0.5f, 0.5f, 0.5f, 0.5f);

			Assert::AreEqual(0.05f, uut.GetR(), "R must be set to 0.05.");
			Assert::AreEqual(0.1f, uut.GetG(), "G must be set to 0.1.");
			Assert::AreEqual(0.15f, uut.GetB(), "B must be set to 0.15.");
			Assert::AreEqual(0.2f, uut.GetA(), "A must be set to 0.2.");
		}

		void Operator_Arithmetic_Divide()
		{
			Color uut = Color(0.1f, 0.2f, 0.3f, 0.4f) / Color(0.5f, 0.5f, 0.5f, 0.5f);

			Assert::AreEqual(0.2f, uut.GetR(), "R must be set to 0.2.");
			Assert::AreEqual(0.4f, uut.GetG(), "G must be set to 0.4.");
			Assert::AreEqual(0.6f, uut.GetB(), "B must be set to 0.6.");
			Assert::AreEqual(0.8f, uut.GetA(), "A must be set to 0.8.");
		}

		void Operator_Comparison()
		{
			Color uut1 = Color(0.1f, 0.1f, 0.1f, 0.1f);
			Color uut2 = Color(0.1f, 0.1f, 0.1f, 0.2f);
			Color uut3 = Color(0.1f, 0.1f, 0.2f, 0.1f);
			Color uut4 = Color(0.1f, 0.2f, 0.1f, 0.1f);
			Color uut5 = Color(0.2f, 0.1f, 0.1f, 0.1f);

			Assert::IsTrue(uut1 == uut1, "Must equal self.");
			Assert::IsFalse(uut1 != uut1, "Must equal self.");

			Assert::IsFalse(uut1 == uut2, "Must not equal.");
			Assert::IsTrue(uut1 != uut2, "Must not equal.");

			Assert::IsFalse(uut1 == uut3, "Must not equal.");
			Assert::IsTrue(uut1 != uut3, "Must not equal.");

			Assert::IsFalse(uut1 == uut4, "Must not equal.");
			Assert::IsTrue(uut1 != uut4, "Must not equal.");

			Assert::IsFalse(uut1 == uut5, "Must not equal.");
			Assert::IsTrue(uut1 != uut5, "Must not equal.");
		}
	};
} // namespace Colors::UnitTests