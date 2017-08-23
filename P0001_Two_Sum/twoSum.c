#include <stdio.h>
#include <stdlib.h>


typedef struct els {
	int value;
	int originalIndex;
} els;

int* twoSum(int* nums, int numsSize, int target);
els* sort(els* array, int numsSize);

int main(int argc, char** argv) {
	int array[] = {2, 7, 11, 15, 2, 4, 12, 24, 22, 2389, 238, 538, 4422};
	int* coords = twoSum(array, 13, 2401);
	printf("Answer = [%d, %d]\n", coords[0], coords[1]);
	return 0;
}

int* twoSum(int* nums, int numsSize, int target) {
	els* array = malloc(numsSize * sizeof(els));
	int i;
	// Populate the els array
	for (i = 0; i < numsSize; i++) {
		array[i].value = nums[i];
		array[i].originalIndex = i;
	}
	// Sort the array
	array = sort(array, numsSize);
	for (i = 0; i < numsSize; i++) {
		printf("%d ", array[i].value);
	}
	printf("\n");
	// Find the case where sum = target
	int low = 0, high = numsSize - 1, sum = 0;
	while (low != high) {
		sum = array[low].value + array[high].value;
		if (sum > target) { high--; }
		if (sum < target) { low++; }
		if (sum == target) {
			int* coords = malloc(2 * sizeof(int));
			coords[0] = array[low].originalIndex;
			coords[1] = array[high].originalIndex;
			return coords;
		}
	}
	return NULL;
}

els* sort(els* array, int numsSize) {
	int i, j, temp;
	int x;
	for (i = 0; i < numsSize - 1; i++) {
		for (j = i; array[j].value > array[j + 1].value && j < numsSize - 1; j++) {
			temp = array[j].value;
			array[j].value = array[j + 1].value;
			array[j + 1].value = temp;
		}
		for (x = 0; x < numsSize; x++) {
			printf("%d ", array[x].value);
		}
		printf("\n");
	}
	return array;
}
