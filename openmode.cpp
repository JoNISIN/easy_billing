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
		printf("�п�ܱҰʼҦ�\n");
		printf("[1]�`�W�ҰʼҦ�(�A�Ω�즸�ϥΤΫإ߷s�ɮ�)\n");
		printf("[2]�ֳt�ҰʼҦ�(�A�Ω�w�إ��ɮ�)\n=>");
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
				printf("��J�ﶵ�����~!!�Э��s��J!!\n");
				continue;
		}
	}
	system("cls");
	printf("�{���w����!\n�P�±z���ϥ�!!\n");
}
