#include"stepcheck.cpp"
#include"writeon.cpp"
#include"reading.cpp"
#include"mainstep.cpp"
#include"quickmode.cpp"

void openmode(void)
{
	int ch;
	while(1)
	{
		printf("請選擇啟動模式\n");
		printf("[1]常規啟動模式(適用於初次使用及建立新檔案)\n");
		printf("[2]快速啟動模式(適用於已建立檔案)\n=>");
		scanf("%d",&ch);
		fflush(stdin);
		switch(ch)
		{
			case 1:
				while(mainstep());
				break;
			case 2:
				while(quickmode());
				break;
			default:
				printf("輸入選項有錯誤!!請重新輸入!!\n");
				continue;
		}
	}
	system("cls");
	printf("程式已結束!\n感謝您的使用!!\n");
}
