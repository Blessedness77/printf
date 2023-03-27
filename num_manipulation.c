#include "main.h"

/**
 * dec2bin - Converts decimal to binary
 * @dec: Decimal number to convert
 *
 * Return: Evaluated binary value
 */
long int dec2bin(int dec)
{
	long int binval = 0, decval = dec;
	int si  = 0;

	if (dec < 0)
	{
		decval = -dec;
		si = 1;
	}

	if (decval)
	{
		binval += dec2bin(decval / 2);
		binval *= 10;
	}
	binval += (decval % 2);

	if (si)
		binval *= -1;

	return (binval);
}
