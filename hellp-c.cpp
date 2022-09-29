#include <cmath>
#include <cstdio>

using namespace std;
float pointToLine(float la, float lb, float lc, float ld, float x, float y, float z);

int main() {
    system("chcp 65001");//设置字符集
    system("cls");
	/*
	 *  TODO:获取数据
	 */
	float la, lb, lc, ld;					  //声明直线系数
	float x1, x2, x3, y1, y2, y3, z1, z2, z3; //声明点坐标
	printf("请输入直线方程的系数(样例 1,1,1,1)：");
	scanf("%f,%f,%f,%f", &la, &lb, &lc, &ld);
	if (la == 0 || lb == 0 || lc == 0) {
		printf("\nerr: 直线系数不可全为零");
		exit(1);
	}
	printf("\n请输入第一个点的坐标(样例 1,1,1)：");
	scanf("%f,%f,%f", &x1, &y1, &z1);
	printf("\n请输入第二个点的坐标(样例 1,1,1)：");
	scanf("%f,%f,%f", &x2, &y2, &z2);
	printf("\n请输入第三个点的坐标(样例 1,1,1)：");
	scanf("%f,%f,%f", &x3, &y3, &z3);
	printf("\n--------------------------------");

	/*
	 *  TODO:计算并输出结果
	 * 距离公式:d=|(A1x0+B1y0+C1z0+D1)n→2-(A2x0+B2y0+C2z0+D2)n→1||n→1×n→2|其中n→i={Ai,Bi,Ci},(i=1,2)。
	 */
	printf("\n对于第一个点(%f,%f,%f): %f", x1, y1, z1, pointToLine(la, lb, lc, ld, x1, y1, z1));
	printf("\n对于第二个点(%f,%f,%f): %f", x2, y2, z2, pointToLine(la, lb, lc, ld, x2, y2, z2));
	printf("\n对于第二个点(%f,%f,%f): %f", x3, y3, z3, pointToLine(la, lb, lc, ld, x3, y3, z3));
}

float pointToLine(float la, float lb, float lc, float ld, float x, float y, float z) {
	return abs(la * x + lb * y + lc * z + ld) / sqrt(la * la + lb * lb + lc * lc);
}