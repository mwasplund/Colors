#pragma once
#include "ColorsUnitTests.h"

TestState RunColorsUnitTests()
{
	auto className = "ColorsUnitTests";
	auto testClass = std::make_shared<Colors::UnitTests::ColorsUnitTests>();
	TestState state = { 0, 0 };
	state += Soup::Test::RunTest(className, "Initialize_ClearBlack", [&testClass]() { testClass->Initialize_ClearBlack(); });
	state += Soup::Test::RunTest(className, "Initialize_Black", [&testClass]() { testClass->Initialize_Black(); });
	state += Soup::Test::RunTest(className, "Initialize_White", [&testClass]() { testClass->Initialize_White(); });
	state += Soup::Test::RunTest(className, "Initialize_Red", [&testClass]() { testClass->Initialize_Red(); });
	state += Soup::Test::RunTest(className, "Initialize_Green", [&testClass]() { testClass->Initialize_Green(); });
	state += Soup::Test::RunTest(className, "Initialize_Blue", [&testClass]() { testClass->Initialize_Blue(); });
	state += Soup::Test::RunTest(className, "Initialize_Default", [&testClass]() { testClass->Initialize_Default(); });
	state += Soup::Test::RunTest(className, "Initialize_Values", [&testClass]() { testClass->Initialize_Values(); });
	state += Soup::Test::RunTest(className, "Set_R", [&testClass]() { testClass->Set_R(); });
	state += Soup::Test::RunTest(className, "Set_G", [&testClass]() { testClass->Set_G(); });
	state += Soup::Test::RunTest(className, "Set_B", [&testClass]() { testClass->Set_B(); });
	state += Soup::Test::RunTest(className, "Set_A", [&testClass]() { testClass->Set_A(); });
	state += Soup::Test::RunTest(className, "Operator_Assignment", [&testClass]() { testClass->Operator_Assignment(); });
	state += Soup::Test::RunTest(className, "Operator_Assignment_Add", [&testClass]() { testClass->Operator_Assignment_Add(); });
	state += Soup::Test::RunTest(className, "Operator_Assignment_Subtract", [&testClass]() { testClass->Operator_Assignment_Subtract(); });
	state += Soup::Test::RunTest(className, "Operator_Assignment_Multiply", [&testClass]() { testClass->Operator_Assignment_Multiply(); });
	state += Soup::Test::RunTest(className, "Operator_Assignment_Divide", [&testClass]() { testClass->Operator_Assignment_Divide(); });
	state += Soup::Test::RunTest(className, "Operator_Arithmetic_Add", [&testClass]() { testClass->Operator_Arithmetic_Add(); });
	state += Soup::Test::RunTest(className, "Operator_Arithmetic_Subtract", [&testClass]() { testClass->Operator_Arithmetic_Subtract(); });
	state += Soup::Test::RunTest(className, "Operator_Arithmetic_Multiply", [&testClass]() { testClass->Operator_Arithmetic_Multiply(); });
	state += Soup::Test::RunTest(className, "Operator_Arithmetic_Divide", [&testClass]() { testClass->Operator_Arithmetic_Divide(); });
	state += Soup::Test::RunTest(className, "Operator_Comparison", [&testClass]() { testClass->Operator_Comparison(); });
	return state;
}