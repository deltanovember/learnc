#include <stdio.h>

void move() {


}
int main() {

	int width = 2;
	int height = 2;
	long long moves = 0;

	int x = 0;
	int y = 0;

	while (x < width || y < height) {

		if (x < width && y < height) {
			moves += 2;
			x++;
			y++;
		}
		else if (x < width) {
			moves += 1;
			x++;
		}
		else if (y < width) {
			moves += 1;
			y++;
		}		
		//x = x + 1;
		//moves++;
	}
	printf("%lld\n", moves);	
	return 0;
}