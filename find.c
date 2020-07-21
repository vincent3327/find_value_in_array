/**************************************************************
*此为异或方法计算指定数据在数组中位置的算法程序
*21/7/2020
*vincent you
*nanshan Shennan          Overcross ShenZhen
***************************************************************/
#include<stdio.h>
#define DIM(a) (sizeof(a)/sizeof(*a))
int array[] = {1,2,33,44,23,456,77,5,8,9,0,123,543};
int findval(int val,int length)
{
	int pos,tmp;
	for(int i=0;i<length;i++)
	{
		tmp = val^array[i];
		if(0==tmp)
		{	//printf(i)
			pos = i ;
			break;
		}
	}
	return pos;
}

int main()
{
	int val = 456;
	
	printf("the value:%d is at %dth positon in array\n",val,findval(val,DIM(array)));
}
ff
