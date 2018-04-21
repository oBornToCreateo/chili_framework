#pragma once

#include "JezierMath.h"

template <typename T>
class _Vec2
{
public:
	inline _Vec2(){}
	inline _Vec2(T inx, T iny)
		:
		x(inx),
		y(iny)
	{}
	inline _Vec2(const _Vec2& vect)
		:
		_Vec2 (vect.x,vect.y)
	{}

	template<typename T2>
	explicit operator _Vec2<T2>() const
	{
		return { T2 x,T2 y };
	}

	/*Vector Vector Operators*/

	inline _Vec2 operator-()
	{
		return Vec2(-x, -y);
	}
	inline _Vec2 operator= (const _Vec2 &rhs)
	{
		x = rhs.x;
		y = rhs.y;
		return *this;
	}
	
	inline _Vec2 operator-(const _Vec2 &rhs)const
	{
		return _Vec2(x - rhs.x , y - rhs.y);
	}
	inline _Vec2& operator-=(const _Vec2 &rhs)
	{
		return *this = *this - rhs;

	}

	inline _Vec2 operator+(const _Vec2 &rhs)const
	{
		return _Vec2(x + rhs.x, y + rhs.y);
	}
	inline _Vec2& operator+=(const _Vec2 &rhs)
	{
		return *this = *this + rhs;
	}

	/*Vector scalar operators*/

	inline _Vec2 operator*(const T rhs) const
	{
		return _Vec2(x * rhs, y * rhs);
	}
	inline _Vec2& operator*=(const T rhs)
	{
		return *this = *this * rhs;
	}

	inline _Vec2 operator/(const T rhs) const
	{
		return _Vec2(x / rhs, y / rhs);
	}
	inline _Vec2& operator/=(const T rhs)
	{
		return *this = *this / rhs;
	}


	/*
	inline T SqLen() 
	{
		return Sq(*this) 
	}

	inline T Length() 
	{
		return std::sqrt(SqLenght);
	}
	*/
	
public:
	T x;
	T y;


};

typedef _Vec2<double> Ved2;
typedef _Vec2<float> Vec2;
typedef _Vec2<int> Vei2;