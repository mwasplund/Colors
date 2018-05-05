// <copyright file="ColorF.h" company="mwasplund"> 
//     Copyright (c) MWASPLUND. All rights reserved.
// </copyright>

#pragma once
#include <iostream>

namespace Colors
{
SOUP_PKG_ACTIVE namespace SOUP_PKG_VERSION
{
	/// <summary>
	/// The floating point color 4D
	/// </summary>
	struct ColorF
	{
		friend std::wostream& operator<<(std::wostream& stream, const ColorF& value);

	public:
		/// <summary>
		/// Defaults
		/// </summary>
		static const ColorF& ClearBlack();
		static const ColorF& Black();
		static const ColorF& White();
		static const ColorF& Red();
		static const ColorF& Green();
		static const ColorF& Blue();

	public:
		/// <summary>
		/// Initialize a new instance of the ColorF class
		/// </summary>
		ColorF();
		ColorF(float r, float g, float b, float a);

		/// <summary>
		/// Named Access
		/// </summary>
		float GetR() const;
		float GetG() const;
		float GetB() const;
		float GetA() const;
		void SetR(float r);
		void SetG(float g);
		void SetB(float b);
		void SetA(float a);

		/// <summary>
		/// Assignment Operators
		/// </summary>
		ColorF& operator=(const ColorF& rhs);
		ColorF& operator+=(const ColorF& rhs);
		ColorF& operator-=(const ColorF& rhs);
		ColorF& operator*=(const ColorF& rhs);
		ColorF& operator/=(const ColorF& rhs);

		/// <summary>
		/// Arithmetic Operators
		/// </summary>
		ColorF operator+(const ColorF& rhs) const;
		ColorF operator-(const ColorF& rhs) const;
		ColorF operator*(const ColorF& rhs) const;
		ColorF operator/(const ColorF& rhs) const;

		/// <summary>
		/// Comparison Operators
		/// </summary>
		bool operator==(const ColorF& rhs) const;
		bool operator!=(const ColorF& rhs) const;

		/// <summary>
		/// Member Access Operators
		/// </summary>
		float& operator[](size_t index);
		float operator[](size_t index) const;

	private:
		/// <summary>
		/// The values
		/// </summary>
		float m_r;
		float m_g;
		float m_b;
		float m_a;
	};
} // namespace Version
} // namespace Colors