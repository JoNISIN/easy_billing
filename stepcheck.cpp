#include"makefile.cpp"
int stepcheck(void)
{
	char choose;
	printf("�п�J�ɮצW��: ");
	scanf("%s",fname);
	fflush(stdin);
	printf("\n");
	printf("���b�T�{�ɮ�...\n\n");
	if(checkfile(fname))
	{
		printf("�ɮ�[%s]�w�s�b\n�O�_�}���ɮ�[%s]\n",fname,fname);
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
				printf("��J���~�Э��s��J\n");
				continue;
			}
		}while(1);
	}
	else 
	{
		printf("�ɮ�[%s]���s�b\n�O�_�إ��ɮ�[%s]\n",fname,fname);
		do
		{
			printf("(y/n)=>");
			choose=getchar();
			fflush(stdin);
			if(choose=='y')
			{
				makefile(fname);
				printf("�ɮ�[%s]�w�إ�\n�O�_�}���ɮ�[%s]\n",fname,fname);
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
						printf("��J���~�Э��s��J\n");
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
				printf("��J���~�Э��s��J\n");
				continue;
			}
		}while(1);
		
	}
}
