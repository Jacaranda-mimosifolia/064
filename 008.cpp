#include<stdio.h> 
int main(void)
{
	int i=1234;
	printf("%d\n",printf("%d\n",printf("%d\n",i)));
	return 0;
}
//第三个printf输出1234 
//第二个printf输出5，为第三个printf的返回值 
//第一个printf输出2，为第二个printf的返回值 
