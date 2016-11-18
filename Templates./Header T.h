#include<iostream>
#include <Windows.h>
#pragma once
//Return the lower of two Values.
template<typename T>
T Min(T a, T b)
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
template<typename T>
T Max(T a, T b)
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
template<typename T>
T clamp(T min, T max, T val)
{
	if (val > min && val < max)
	{
		return val;
	}

	if (val > max)
	{
		return max;
	}
	if (val < min)
	{
		return min;
	}
}

char Min(char a, char b)
{

}

//Exercise 2:

//Creates an array on the heap specified capacity.

template<typename T>
T atr(T val)
{
	if (val >= 0)
	return 3;



}