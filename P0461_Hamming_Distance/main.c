#include <stdio.h>
#include <stdlib.h>

int hammingDistance(int x, int y);

int main(int argc, char**argv) {
	printf("Output = %d\n", hammingDistance(60, 13));
	return 0;
}

int hammingDistance(int x, int y) {
	// XOR x and y to get differences in bits
	int z = x ^ y;
	int sum = 0;
	// Until all bits have been checked...
	while (z != 0x00) {
		// Increment sum if the rightmost bit indicates a difference
		if ((z & 0x01) == 0x01) { sum++; }
		// Shift off the rightmost bit
		z = z >> 1;
	}
	return sum;
}
