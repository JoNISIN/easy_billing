int mainstep(void)
{
	int choose;
	printf("�w��ϥΥ��{��!!!\n\n");
	
	printf("���{������:\n");
	printf("(1)�ֳt�O�b\n");
	printf("(2)�إ�²���b��\n");
	printf("(3)�˵�²���b��\n\n");
	
	if(stepcheck())
	{
		system("cls");
		printf("�w��ϥΥ��{��!!!\n\n");
	
		printf("���{������:\n");
		printf("(1)�ֳt�O�b\n");
		printf("(2)�إ�²���b��\n");
		printf("(3)�˵�²���b��\n\n");
		
		while(1)
		{
		printf("�z�w�}���ɮ�[%s]\n",fname);
		
		printf("�п��:\n\n");
		printf("[1]����O�b\n");
		printf("[2]�˵��O�b\n");
		printf("(-1�����{��)=>");
		scanf("%d",&choose);
		system("cls");
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
				continue;
		}
		system("cls");
		}
		}
		else
		{
		printf("�P�±z���ϥ�!!!\n");
		printf("�p�ݦA������ɮװ��楻�{���п�J[1]\n");
		printf("�p�����}�п�J[0]\n=>");
		scanf("%d",&choose);
		system("cls");
		return (choose==1)?1:0;
		}	
} 
