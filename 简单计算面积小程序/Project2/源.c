#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <inttypes.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#define PI 3.1415926
//��������
double Area(double Length, double Width);	//���������

double Area2(double Radius);	//��Բ�����

double Area3(double side_length);	//�����������

int main() {

	uint8_t option;
	double Length;
	double Width;
	double Radius;
	double side_length;
	while (true)
	{
		puts("����ѡ��1�������Σ�2��Բ�Σ�3�������� 4���˳�����");
		scanf_s(" %"SCNu8, &option);
		switch (option) 
		{

        case 1:
            puts("���볤���γ��ȺͿ��");
            scanf_s(" %lf %lf", &Length, &Width);
            printf("�����������%lf\n", Area(Length, Width));
            break;

        case 2:
            puts("����Բ�İ뾶");
            scanf_s(" %lf", &Radius);
            printf("�����Բ�������%lf\n", Area2(Radius));
            break;

        case 3:
            puts("���������α߳�");
            scanf_s(" %lf", &side_length);
            printf("����������ε������%lf\n", Area3(side_length));
            break;

        case 4:
            puts("��лʹ�ô˳���ף��ǰ���ƽ�");
            return 0; // ֱ���˳�����

        default:
            puts("�������ֵ");
            break;
		}
	}
	return 0;
}
//���庯��
//���������
double Area(double Length, double Width) {


	return Length * Width;
}

//Բ���
double Area2(double Radius) {

	double the_square_of_the_radius = Radius * Radius;//�뾶��ƽ��

	return PI * the_square_of_the_radius;
}

//���������
double Area3(double side_length) {



	return side_length * side_length;
}