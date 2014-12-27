// Day4_Varible.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int c=0;

void var_test(){
	static int a=0;
	int b=0;
	a++;
	b++;
	c++;
	printf("a,b,c的值分别为：%d %d %d\n",a,b,c);
}

int _tmain(int argc, _TCHAR* argv[])
{
	for(int i=0;i<10;i++){
		var_test();
		
	}
	int c;
	return 0;
}

