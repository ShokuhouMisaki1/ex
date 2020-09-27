/*描述：将摄氏温度转化为华氏温度的简易程序
*/

#include <stdio.h>
int main(int argc, char *argv[])
{
	float a;
	printf("摄氏度: ");
	scanf("%f",&a);
	printf("=%.2f华氏度\n",a*9/5+32);
	
	return 0;
} 