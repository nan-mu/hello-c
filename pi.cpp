#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand((int)time(0));
	double x = 0.0, y = 0.0, times = 500000000, goal = 0;
	for (int i = 0; i < times; i++) {
		x = rand()/(double)RAND_MAX;
        y = rand()/(double)RAND_MAX;
        if (((x - 0.5)*(x - 0.5) + (y - 0.5)*(y - 0.5)) <= 0.25)goal += 1;
	}

	printf("PI=%7f", ((4 * goal) / times));
}