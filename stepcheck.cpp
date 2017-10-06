#include"makefile.cpp"
int stepcheck(void)
{
	char choose;
	printf("請輸入檔案名稱: ");
	scanf("%s",fname);
	fflush(stdin);
	printf("\n");
	printf("正在確認檔案...\n\n");
	if(checkfile(fname))
	{
		printf("檔案[%s]已存在\n是否開啟檔案[%s]\n",fname,fname);
		do
		{
			printf("(y/n)=>");
			choose=getchar();
			if(choose=='y')
			{
				return 1;
			}
			else if(choose=='n')
			{
				return 0;
			}
			else 
			{
				fflush(stdin);
				printf("輸入錯誤請重新輸入\n");
				continue;
			}
		}while(1);
	}
	else 
	{
		printf("檔案[%s]不存在\n是否建立檔案[%s]\n",fname,fname);
		do
		{
			printf("(y/n)=>");
			choose=getchar();
			fflush(stdin);
			if(choose=='y')
			{
				makefile(fname);
				printf("檔案[%s]已建立\n是否開啟檔案[%s]\n",fname,fname);
				do
				{
					printf("(y/n)=>");
					choose=getchar();
					if(choose=='y')
					{
						return 1;
					}
					else if(choose=='n')
					{
						return 0;
					}
					else 
					{
						fflush(stdin);
						printf("輸入錯誤請重新輸入\n");
						continue;
					}
				}while(1);
			}
			else if(choose=='n')
			{
				return 0;
			}
			else 
			{
				fflush(stdin);
				printf("輸入錯誤請重新輸入\n");
				continue;
			}
		}while(1);
		
	}
}
