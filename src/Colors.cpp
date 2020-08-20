// <copyright file="Colors.cpp" company="mwasplund"> 
//   Copyright (c) mwasplund. All rights reserved.
// </copyright>

export module Colors;

namespace Colors
{
	/// <summary>
	/// The floating point color 4D
	/// </summary>
	export class Color
	{
	public:
		/// <summary>
		/// Defaults
		/// </summary>
		static const Color& ClearBlack()
		{
			static Color value = Color(0, 0, 0, 0);
			return value;
		}

		static const Color& Black()
		{
			static Color value = Color(0, 0, 0, 1);
			return value;
		}
		static const Color& White()
		{
			static Color value = Color(1, 1, 1, 1);
			return value;
		}

		static const Color& Red()
		{
			static Color value = Color(1, 0, 0, 1);
			return value;
		}

		static const Color& Green()
		{
			static Color value = Color(0, 1, 0, 1);
			return value;
		}

		static const Color& Blue()
		{
			static Color value = Color(0, 0, 1, 1);
			return value;
		}

	public:
		/// <summary>
		/// Initialize a new instance of the Color class
		/// </summary>
		Color() :
			m_r(0.0f),
			m_g(0.0f),
			m_b(0.0f),
			m_a(0.0f)
		{
		}

		Color(float r, float g, float b, float a) :
			m_r(r),
			m_g(g),
			m_b(b),
			m_a(a)
		{
		}

		/// <summary>
		/// Named Access
		/// </summary>
		float GetR() const
		{
			return m_r;
		}

		float GetG() const
		{
			return m_g;
		}

		float GetB() const
		{
			return m_b;
		}

		float GetA() const
		{
			return m_a;
		}

		void SetR(float r)
		{
			m_r = r;
		}

		void SetG(float g)
		{
			m_g = g;
		}

		void SetB(float b)
		{
			m_b = b;
		}

		void SetA(float a)
		{
			m_a = a;
		}

		/// <summary>
		/// Assignment Operators
		/// </summary>
		Color& operator=(const Color& rhs)
		{
			m_r = rhs.m_r;
			m_g = rhs.m_g;
			m_b = rhs.m_b;
			m_a = rhs.m_a;
			return *this;
		}

		Color& operator+=(const Color& rhs)
		{
			m_r += rhs.m_r;
			m_g += rhs.m_g;
			m_b += rhs.m_b;
			m_a += rhs.m_a;
			return *this;
		}

		Color& operator-=(const Color& rhs)
		{
			m_r -= rhs.m_r;
			m_g -= rhs.m_g;
			m_b -= rhs.m_b;
			m_a -= rhs.m_a;
			return *this;
		}

		Color& operator*=(const Color& rhs)
		{
			m_r *= rhs.m_r;
			m_g *= rhs.m_g;
			m_b *= rhs.m_b;
			m_a *= rhs.m_a;
			return *this;
		}

		Color& operator/=(const Color& rhs)
		{
			m_r /= rhs.m_r;
			m_g /= rhs.m_g;
			m_b /= rhs.m_b;
			m_a /= rhs.m_a;
			return *this;
		}

		/// <summary>
		/// Arithmetic Operators
		/// </summary>
		Color operator+(const Color& rhs) const
		{
			return Color(
				m_r + rhs.m_r,
				m_g + rhs.m_g,
				m_b + rhs.m_b,
				m_a + rhs.m_a);
		}

		Color operator-(const Color& rhs) const
		{
			return Color(
				m_r - rhs.m_r,
				m_g - rhs.m_g,
				m_b - rhs.m_b,
				m_a - rhs.m_a);
		}

		Color operator*(const Color& rhs) const
		{
			return Color(
				m_r * rhs.m_r,
				m_g * rhs.m_g,
				m_b * rhs.m_b,
				m_a * rhs.m_a);
		}

		Color operator/(const Color& rhs) const
		{
			return Color(
				m_r / rhs.m_r,
				m_g / rhs.m_g,
				m_b / rhs.m_b,
				m_a / rhs.m_a);
		}

		/// <summary>
		/// Comparison Operators
		/// </summary>
		bool operator==(const Color& rhs) const
		{
			return
				m_r == rhs.m_r &&
				m_g == rhs.m_g &&
				m_b == rhs.m_b &&
				m_a == rhs.m_a;
		}

		bool operator!=(const Color& rhs) const
		{
			return
				m_r != rhs.m_r ||
				m_g != rhs.m_g ||
				m_b != rhs.m_b ||
				m_a != rhs.m_a;
		}

	private:
		/// <summary>
		/// The values
		/// </summary>
		float m_r;
		float m_g;
		float m_b;
		float m_a;
	};
} // namespace Colors
