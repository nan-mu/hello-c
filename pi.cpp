#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	long long int x = 0, y = 0;							//预计生成两个12位数表示投针坐标
	long long int zx = 274877906944, zy = 274877906944; //设定正方形的范围
	long long int r = 137438953472;						//设定圆的半径
	double goal = 0;									//投中的数量
	double cNum = 100000000;							//计算次数
	srand((int)time(0));								//随机数种子
	for (double i = 0; i < cNum; i++) {					//开投！
		x = (long long)(rand()) * 8388864;
		y = (long long)(rand()) * 8388864;
		if (((x - r) * (x - r) + (y - r) * (y - r)) < r)
			goal += 1;
	}

	printf("goal=%llf\n", goal);
	printf("PI=%lf", ((4 * goal) / cNum));
}