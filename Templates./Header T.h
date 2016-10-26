#include<iostream>
#include <Windows.h>
#pragma once
//Return the lower of two Values.
template<typename min>
min Min(min a, min b)
{
	if (a < b)
	{
		return a;
	}
	if (b > a)
	{
		return b;
	}
}
//Return the higher of two Values.
template<typename max>
max Max(max a, max b)
{
	if (a < b)
	{
		return b;
	}
	if (b < a)
	{
		return a;
	}
}
//Constrains a value within the range of two values.
template<typename Clamp>
Clamp clamp(Clamp min, Clamp max, Clamp val)
{
	if (val > min && val < max)
	{
		return val;
	}

	if (val > max)
	{
		return max;
	}
	if (val < min);
	{
		return min;
	}
}
//Checks if a and b represent alphabetical characters if so, function will return value that is aphatbet lower.
template<typename minalpha>
minalpha stank(minalpha min, minalpha max, minalpha val)
{
	if (a < b)
	{
		return a;
	}
	if (b > a)
	{
		return b;
	}
}

//Exercise 2:

//Creates an array on the heap specified capacity.
