#include "util.h"

int main() {
	int size;

	cout << "Input ize of square matrix: ";
	cin >> size;

	int** matrix = create(size);

	if (matrix == NULL) {
		return -1;
	}

	init_user(matrix, size);

	print("Matrix:\n");
	print(convert(matrix, size));

	//logic

	remove(matrix, size);

	return 0;
}