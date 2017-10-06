int quickmode(void)
{
	system("cls");
	int choose;
	printf("歡迎使用本程式!!!\n");
	printf("(快速執行模式)\n\n");
	printf("請輸入檔案名稱: ");
	scanf("%s",fname);
	if(!checkfile(fname))
	{
		printf("提示: 無法開啟檔案!\請重新檢視名稱!!\n");
		system("PAUSE");
		return 1;
	}
	else
	{
	while(1)
	{
	printf("請選擇執行模式\n[1]新增記事項目\n[2]檢視項目\n([-1]離開)=>");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:
			system("cls");
			printf("歡迎使用本程式!!!\n\n");
			printf("您已開啟檔案[%s]\n",fname);
			while(writeon(fname))
			{
				system("cls");
				printf("歡迎使用本程式!!!\n\n");
				printf("您所開啟檔案[%s]\n",fname);
			}
			break;
		case 2:
			system("cls");
			printf("歡迎使用本程式!!!\n\n");
			printf("您已開啟檔案[%s]\n",fname);
			reading(fname);
			break;
		case -1:
			printf("感謝您的使用!!!\n");
			printf("如需再次選擇檔案執行本程式請輸入[1]\n");
			printf("如欲離開請輸入[0]\n=>");
			scanf("%d",&choose);
			system("cls");
			return (choose==1)?1:0;
			break;
		default:
			printf("輸入錯誤!請重新輸入!\n");
			system("PAUSE");
			system("cls");
			printf("歡迎使用本程式!!!\n");
			printf("(快速執行模式)\n\n");
			printf("檔案名稱: %s",fname);
			continue;
	}
	system("cls");
	}
	}
}
