#include<stdio.h>

int main()
{
	int num,replace;
	int n1=0,n2=0,n3=0;  // �������鳤�� 
	static int numble[1];  // ������� 
	static int character[1];  // �����ĸ 
	static int other[1];  // ������� 
	
	printf("������һ���ַ�:");
	for(int i=0;;i++)  // ����������'\n'���� 
	{
		num=getchar();  // ��getchar�����ȡ�ַ� 
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
	
//	�������� 
//	for(int i=0;i<n;i++)
//	{
//		printf("numble[%d]=%d\n",i,numble[i]);
//	}

	printf("�б�����\n");	
	
	printf("numble=[");  //   // ��ӡnumble[] 
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
	
	printf("character=[");  // ��ӡcharacter[] 
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
	
	printf("other=[");  // ��ӡother[] 
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
