#include <stdio.h>
int count=50;
void fun1()
{
	printf("In fun1 = %d",count);
}
void fun2(){
	int count=20;
	fun1();
}

int main(void){
	fun2();
	return 0;
}
