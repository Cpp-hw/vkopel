#ifndef PRISMA
#define PRISMA

class Prizma
{
private:
	double  height,
		vol,
		length_side,
		space_base;
	size_t number_grain;
public:
	Prizma(double h=0.0, double lside=0.0, size_t num=1, double sbase=0.0);
	void SetHeight(const double & h);
	void SetLength(const double & length);
	void SetNumberGrain(const size_t & num);
	void SetBase(const double & base);
	double GetHeight() const;
	size_t GetNumGrain() const;
	double GetBase() const;
	double GetLengthSide() const;
	double GetVol();
};
#endif