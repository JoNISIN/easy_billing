int mainstep(void)
{
	int choose;
	printf("歡迎使用本程式!!!\n\n");
	
	printf("本程式提供:\n");
	printf("(1)快速記帳\n");
	printf("(2)建立簡易帳本\n");
	printf("(3)檢視簡易帳本\n\n");
	
	if(stepcheck())
	{
		system("cls");
		printf("歡迎使用本程式!!!\n\n");
	
		printf("本程式提供:\n");
		printf("(1)快速記帳\n");
		printf("(2)建立簡易帳本\n");
		printf("(3)檢視簡易帳本\n\n");
		
		while(1)
		{
		printf("您已開啟檔案[%s]\n",fname);
		
		printf("請選擇:\n\n");
		printf("[1]執行記帳\n");
		printf("[2]檢視記帳\n");
		printf("(-1關閉程式)=>");
		scanf("%d",&choose);
		system("cls");
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
				continue;
		}
		system("cls");
		}
		}
		else
		{
		printf("感謝您的使用!!!\n");
		printf("如需再次選擇檔案執行本程式請輸入[1]\n");
		printf("如欲離開請輸入[0]\n=>");
		scanf("%d",&choose);
		system("cls");
		return (choose==1)?1:0;
		}	
} 
