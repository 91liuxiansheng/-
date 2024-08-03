#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <inttypes.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#define PI 3.1415926
//声明函数
double Area(double Length, double Width);	//长方形面积

double Area2(double Radius);	//求圆的面积

double Area3(double side_length);	//求正方形面积

int main() {

	uint8_t option;
	double Length;
	double Width;
	double Radius;
	double side_length;
	while (true)
	{
		puts("输入选项1：长方形，2：圆形，3：正方形 4：退出程序");
		scanf_s(" %"SCNu8, &option);
		switch (option) 
		{

        case 1:
            puts("输入长方形长度和宽度");
            scanf_s(" %lf %lf", &Length, &Width);
            printf("长方形面积：%lf\n", Area(Length, Width));
            break;

        case 2:
            puts("输入圆的半径");
            scanf_s(" %lf", &Radius);
            printf("计算出圆的面积：%lf\n", Area2(Radius));
            break;

        case 3:
            puts("输入正方形边长");
            scanf_s(" %lf", &side_length);
            printf("计算出正方形的面积：%lf\n", Area3(side_length));
            break;

        case 4:
            puts("感谢使用此程序，祝您前程似锦");
            return 0; // 直接退出程序

        default:
            puts("输入错误值");
            break;
		}
	}
	return 0;
}
//定义函数
//长方形面积
double Area(double Length, double Width) {


	return Length * Width;
}

//圆面积
double Area2(double Radius) {

	double the_square_of_the_radius = Radius * Radius;//半径的平方

	return PI * the_square_of_the_radius;
}

//正方形面积
double Area3(double side_length) {



	return side_length * side_length;
}