#include "Prisma.h"

Prizma::Prizma(double h, double lside, size_t num, double sbase)
{
	height = h;
	length_side = lside;
	space_base = sbase;
	number_grain = num;
}
void Prizma:: SetHeight(const double & h)
{
	if (h>0.0)
	{
		height = h;
	}
	else
		height = 1.0;
}
void Prizma:: SetLength(const double & length)
{
	if (length>0.0)
	{
		length_side = length;
	}
	else
	{
		length_side = 1.0;
	}
}
void Prizma:: SetNumberGrain(const size_t & num)
{
	if (num>3)
	{
		number_grain = num;
	}
	else
	{
		number_grain = 3;
	}
}
void Prizma:: SetBase(const double & base)
{
	if (base>10.0)
	{
		space_base = base;
	}
	else
	{
		space_base = 10;
	}
}
double Prizma:: GetHeight() const
{
	return height;
}
size_t Prizma:: GetNumGrain() const
{
	return number_grain;
}
double Prizma:: GetBase() const
{
	return space_base;
}
double Prizma:: GetLengthSide() const
{
	return length_side;
}
double Prizma:: GetVol()
{
	return vol = space_base*height;
}