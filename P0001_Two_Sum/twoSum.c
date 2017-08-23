#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target);

int main(int argc, char** argv) {
	int array[] = {2, 7, 11, 15, 2, 4, 12, 24, 22, 2389, 238, 538, 4422};
	int* coords = twoSum(array, 13, 27);
	printf("Answer = [%d, %d]\n", coords[0], coords[1]);
	return 0;
}

int* twoSum(int* nums, int numsSize, int target) {
	// Find the case where sum = target
	int i, j;
	for (i = 0; i < numsSize - 1; i++) {
		for (j = i + 1; j < numsSize; j++) {
			if (nums[i] + nums[j] == target) {
				int* coords = malloc(2 * sizeof(int));
				coords[0] = i;
				coords[1] = j;
				return coords;
			}
		}
	}
	return NULL;
}
