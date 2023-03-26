#include "main.h"

/**
 * dec2bin - Converts decimal to binary
 * @dec: Decimal number to convert
 *
 * Return: Evaluated binary value
 */
int dec2bin(int dec)
{
	int binval = 0;

	if (dec)
	{
		binval += dec2bin(dec / 2);
		binval *= 10;
	}
	binval += (dec % 2);

	return (binval);
}
