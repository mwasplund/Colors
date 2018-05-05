// <copyright file="ColorF.cpp" company="mwasplund"> 
//     Copyright (c) MWASPLUND. All rights reserved.
// </copyright>

#include "ColorF.h"

using namespace Colors;

std::wostream& Colors::operator<<(std::wostream& stream, const ColorF& value)
{
	stream << L"ColorF["
		<< value[0] << L","
		<< value[1] << L","
		<< value[2] << L","
		<< value[3] << L"]";

	return stream;
}

/*static*/ const ColorF& ColorF::ClearBlack()
{
	static ColorF value = ColorF(0, 0, 0, 0);
	return value;
}

/*static*/ const ColorF& ColorF::Black()
{
	static ColorF value = ColorF(0, 0, 0, 1);
	return value;
}
/*static*/ const ColorF& ColorF::White()
{
	static ColorF value = ColorF(1, 1, 1, 1);
	return value;
}

/*static*/ const ColorF& ColorF::Red()
{
	static ColorF value = ColorF(1, 0, 0, 1);
	return value;
}

/*static*/ const ColorF& ColorF::Green()
{
	static ColorF value = ColorF(0, 1, 0, 1);
	return value;
}

/*static*/ const ColorF& ColorF::Blue()
{
	static ColorF value = ColorF(0, 0, 1, 1);
	return value;
}

ColorF::ColorF() :
	m_r(0.0f),
	m_g(0.0f),
	m_b(0.0f),
	m_a(0.0f)
{
}

ColorF::ColorF(float r, float g, float b, float a) :
	m_r(r),
	m_g(g),
	m_b(b),
	m_a(a)
{
}

float ColorF::GetR() const
{
	return m_r;
}

float ColorF::GetG() const
{
	return m_g;
}

float ColorF::GetB() const
{
	return m_b;
}

float ColorF::GetA() const
{
	return m_a;
}

void ColorF::SetR(float r)
{
	m_r = r;
}

void ColorF::SetG(float g)
{
	m_g = g;
}

void ColorF::SetB(float b)
{
	m_b = b;
}

void ColorF::SetA(float a)
{
	m_a = a;
}

ColorF& ColorF::operator=(const ColorF& rhs)
{
	m_r = rhs.m_r;
	m_g = rhs.m_g;
	m_b = rhs.m_b;
	m_a = rhs.m_a;
	return *this;
}

ColorF& ColorF::operator+=(const ColorF& rhs)
{
	m_r += rhs.m_r;
	m_g += rhs.m_g;
	m_b += rhs.m_b;
	m_a += rhs.m_a;
	return *this;
}

ColorF& ColorF::operator-=(const ColorF& rhs)
{
	m_r -= rhs.m_r;
	m_g -= rhs.m_g;
	m_b -= rhs.m_b;
	m_a -= rhs.m_a;
	return *this;
}

ColorF& ColorF::operator*=(const ColorF& rhs)
{
	m_r *= rhs.m_r;
	m_g *= rhs.m_g;
	m_b *= rhs.m_b;
	m_a *= rhs.m_a;
	return *this;
}

ColorF& ColorF::operator/=(const ColorF& rhs)
{
	m_r /= rhs.m_r;
	m_g /= rhs.m_g;
	m_b /= rhs.m_b;
	m_a /= rhs.m_a;
	return *this;
}

ColorF ColorF::operator+(const ColorF& rhs) const
{
	return ColorF(
		m_r + rhs.m_r,
		m_g + rhs.m_g,
		m_b + rhs.m_b,
		m_a + rhs.m_a);
}

ColorF ColorF::operator-(const ColorF& rhs) const
{
	return ColorF(
		m_r - rhs.m_r,
		m_g - rhs.m_g,
		m_b - rhs.m_b,
		m_a - rhs.m_a);
}

ColorF ColorF::operator*(const ColorF& rhs) const
{
	return ColorF(
		m_r * rhs.m_r,
		m_g * rhs.m_g,
		m_b * rhs.m_b,
		m_a * rhs.m_a);
}

ColorF ColorF::operator/(const ColorF& rhs) const
{
	return ColorF(
		m_r / rhs.m_r,
		m_g / rhs.m_g,
		m_b / rhs.m_b,
		m_a / rhs.m_a);
}

bool ColorF::operator==(const ColorF& rhs) const
{
	return
		m_r == rhs.m_r &&
		m_g == rhs.m_g &&
		m_b == rhs.m_b &&
		m_a == rhs.m_a;
}

bool ColorF::operator!=(const ColorF& rhs) const
{
	return
		m_r != rhs.m_r ||
		m_g != rhs.m_g ||
		m_b != rhs.m_b ||
		m_a != rhs.m_a;
}

float& ColorF::operator[](size_t index)
{
	switch (index)
	{
	case 0:
		return m_r;
	case 1:
		return m_g;
	case 2:
		return m_b;
	case 3:
		return m_a;
	default:
		throw std::runtime_error("Index out of range.");
	}
}

float ColorF::operator[](size_t index) const
{
	switch (index)
	{
	case 0:
		return m_r;
	case 1:
		return m_g;
	case 2:
		return m_b;
	case 3:
		return m_a;
	default:
		throw std::runtime_error("Index out of range.");
	}
}