#include<stdio.h>

int main()
{
	int num,replace;
	int n1=0,n2=0,n3=0;  // 定义数组长度 
	static int numble[1];  // 存放数字 
	static int character[1];  // 存放字母 
	static int other[1];  // 存放其他 
	
	printf("请输入一串字符:");
	for(int i=0;;i++)  // 结束运行由'\n'决定 
	{
		num=getchar();  // 用getchar逐个获取字符 
		if('0'<=num && num<='9')  // numble[] 
		{
			numble[n1]=num-48;
			n1++;
		}
		else if(('A'<=num && num<='Z')or('a'<=num && num<='z'))  //character[]
		{
			character[n2]=num;
			n2++;
		}
		else if(num=='\n')  // '\n', break;
		{
			break;
		}
		else  // other[]
		{
			other[n3]=num;
			n3++;
		}
	}
	printf("n1=%d\n",n1);
	printf("n2=%d\n",n2);
	printf("n3=%d\n",n3);
	
//	游历数组 
//	for(int i=0;i<n;i++)
//	{
//		printf("numble[%d]=%d\n",i,numble[i]);
//	}

	printf("列表！！！\n");	
	
	printf("numble=[");  //   // 打印numble[] 
	for(int i=0;i<n1;i++)
	{
		if(0<=i && i<n1-1)
		{
			printf("%d, ",numble[i]);
		}
		else if(i<n1)
		{
			printf("%d",numble[i]);	
		}
	}
	printf("]\n");
	
	printf("character=[");  // 打印character[] 
	for(int i=0;i<n2;i++)
	{
		if(0<=i && i<n2-1)
		{
			printf("%c, ",character[i]);
		}
		else if(i<n2)
		{
			printf("%c",character[i]);	
		}
	}
	printf("]\n");
	
	printf("other=[");  // 打印other[] 
	for(int i=0;i<n3;i++)
	{
		if(0<=i && i<n3-1)
		{
			printf("%c, ",other[i]);
		}
		else if(i<n3)
		{
			printf("%c",other[i]);	
		}
	}
	printf("]\n");

	return 0;
}
