#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	
	/*int num1;

	printf("덧셈 결과 : %d\n", result);
	printf("%d+%d=%d\n", num1, num2, result);
	printf("%d와 %d의 합은 %d입니다\n", num1, num2, result);*/

	/*int num1 = 9, num2 = 2;
	printf("%d+%d=%d\n", num1, num2, num1 + num2);
	printf("%d-%d=%d\n", num1, num2, num1 - num2);
	printf("%d*%d=%d\n", num1, num2, num1 * num2);
	printf("%d/%d의 몫=%d\n", num1, num2, num1 / num2);
	printf("%d/%d의 나머지=%d\n", num1, num2, num1 % num2);*/

	/*int num1 = 2, num2 = 4, num3 = 6;
	num1 += 3; 
	num2 *= 4;
	num3 %= 5;
	printf("Result: %d,%d,%d\n", num1, num2, num3);*/

	//int num1 = 10;
	//int num2 = (num1--) + 2;
	//printf("num2:%d\n", num2); //12

	//int result;
	//int num3, num4;
	//printf("정수 one :");
	//scanf("%d", &num3);

	//int num5 = 0xA;//16진수

	//int i;
	//float num10 = 0.0;
	//for (i = 0; i < 100; i++) {
	//	num10 += 0.1;
	//}

	//printf("0.1을 100번 더한 결과:%f\n", num10);
	

	////3
	//int num1;
	//scanf_s("%d", &num1);
	//num1 = num1 * num1;
	//printf("%d\n", num1);

	////4
	//int num2, num3;
	//scanf_s("%d %d", & num2, &num3);
	//printf("몫: %d 나머지: %d\n", num2 / num3, num2 % num3);

	////5
	//int a, b, c;
	//scanf_s("%d %d %d", &a,&b,&c);
	//printf("%d\n", (a - b) * (b + c) * (c % a));


	////1
	//int x;
	//scanf_s("%d", &x);
	//x = ~x;
	//x++;
	//printf("%d\n",x);



	////2
	//int num4 = 3;
	//num4 = num4 << 3;
	//num4=num4 >> 1;
	//printf("%d\n", num4);
	//

	//과제
	int y,z;
	scanf_s("%d %d",&y, &z);
	printf("10 & 15 : %d\n", y&z);
	printf("10 | 15 : %d\n", y|z);
	printf("10 ^ 15 : %d\n", y^z);




	return 0;
}