#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE* fptr1, * fptr2;
	char ch;
	int count = 0;
	fptr1 = fopen("welcome.txt", "r");
	fptr2 = fopen("outout.txt", "w");
	if ((fptr1 != NULL)&& (fptr2 != NULL))
	{
		while ((ch = getc(fptr1)) != EOF)
			putc(ch, fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("檔案拷貝完成!!\n");
	}
	else
		printf("檔案開啟失敗!!\n");
	system("pause");
	return 0;
}
