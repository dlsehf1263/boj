#include <stdio.h>

int main() {
	int num[3];
	bool isRight;

	while (true) {
		scanf("%d %d %d", &num[0], &num[1], &num[2]);
		if (num[0] == 0 && num[1] == 0 && num[2] == 0) break;

		if (num[0] > num[1] && num[0] > num[2])
			isRight = num[0] * num[0] == num[1] * num[1] + num[2] * num[2];
		else if (num[1] > num[0] && num[1] > num[2])
			isRight = num[1] * num[1] == num[0] * num[0] + num[2] * num[2];
		else if (num[2] > num[1] && num[2] > num[0])
			isRight = num[2] * num[2] == num[1] * num[1] + num[0] * num[0];
		else isRight = false;

		printf("%s\n", isRight ? "right" : "wrong");
	}

	return 0;
}