int quickmode(void)
{
	system("cls");
	int choose;
	printf("�w��ϥΥ��{��!!!\n");
	printf("(�ֳt����Ҧ�)\n\n");
	printf("�п�J�ɮצW��: ");
	scanf("%s",fname);
	if(!checkfile(fname))
	{
		printf("����: �L�k�}���ɮ�!\�Э��s�˵��W��!!\n");
		system("PAUSE");
		return 1;
	}
	else
	{
	while(1)
	{
	printf("�п�ܰ���Ҧ�\n[1]�s�W�O�ƶ���\n[2]�˵�����\n([-1]���})=>");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:
			system("cls");
			printf("�w��ϥΥ��{��!!!\n\n");
			printf("�z�w�}���ɮ�[%s]\n",fname);
			while(writeon(fname))
			{
				system("cls");
				printf("�w��ϥΥ��{��!!!\n\n");
				printf("�z�Ҷ}���ɮ�[%s]\n",fname);
			}
			break;
		case 2:
			system("cls");
			printf("�w��ϥΥ��{��!!!\n\n");
			printf("�z�w�}���ɮ�[%s]\n",fname);
			reading(fname);
			break;
		case -1:
			printf("�P�±z���ϥ�!!!\n");
			printf("�p�ݦA������ɮװ��楻�{���п�J[1]\n");
			printf("�p�����}�п�J[0]\n=>");
			scanf("%d",&choose);
			system("cls");
			return (choose==1)?1:0;
			break;
		default:
			printf("��J���~!�Э��s��J!\n");
			system("PAUSE");
			system("cls");
			printf("�w��ϥΥ��{��!!!\n");
			printf("(�ֳt����Ҧ�)\n\n");
			printf("�ɮצW��: %s",fname);
			continue;
	}
	system("cls");
	}
	}
}
