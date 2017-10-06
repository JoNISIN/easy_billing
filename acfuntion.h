struct cRec
{
	int no;
	char date[10];
	char item[10];
	int cash;
};

typedef struct cRec account;

account *rec;
account *data;
account headData={0,"total","zero",0};

char fname[40];
FILE *fp;
int n;

/*void creatfile(char *fname)   //old
{
	fp=fopen(fname,"wb");
	if(fp!=NULL)printf("����: �إߪť��ɮצ��\\!\n");
	else printf("����: ���~!�إ��ɮץ���!\n");
	fclose(fp);
}*/

int creatfile(char *fname)   //new
{
	fp=fopen(fname,"wb");
	if(fp!=NULL)
	{
		printf("����: �إߪť��ɮצ��\\!\n");
		fclose(fp);
		return 1;
	}
	else 
	{
		printf("����: ���~!�إ��ɮץ���!\n");
		fclose(fp);
		return 0;
	}
}

int checkfile(char *fname)
{
	fp=fopen(fname,"rb");
	if(fp==NULL) {fclose(fp); return 0;}
	else {fclose(fp); return 1; }
}

account readHeadData(char *fname)
{
	fp=fopen(fname,"rb");
	rewind(fp);
	fread(&headData,sizeof(account),1,fp);
	fclose(fp);
	return headData;
}

//�צ��q�ɧ��g�_���ӴN���{ 
void writeData(char *fname,account *rec)
{
	int i;
	fp=fopen(fname,"r+b");
	rewind(fp);

	for(i=0;i<(rec[0].no+1);i++)
	{
		fwrite(&rec[i],sizeof(account),1,fp);
		fflush(fp);
	}
	fclose(fp);
}

account* creatdata(int n,account *rec)
{
	rec=(account*)malloc((headData.no+n+1)*sizeof(account));
	rec[0].no=0;
	rec[0].cash=0;
	if(rec!=NULL)return rec;
	else printf("����: �����T�t�m�}�C�O����\n");
}

account* readData(char *fname,account *rec)
{
	int i=0;
	fp=fopen(fname,"rb");
	rewind(fp);
	while(!feof(fp))
	{
		fread(&rec[i],sizeof(account),1,fp);
		i++;
	}
	fclose(fp);
	return rec;
}

//�H����Ƭ���¦�צ��i�H�q�ɧ������g�J�íק���Y�� 
account* recCash(int n,account *rec)
{
	int i;
	int sum=0;
	for(i=1;i<=n;i++)
	{
		printf("�п�J���: ");
		scanf("%s",rec[rec[0].no+i].date) ;
		printf("�п�J���ز���: ");
		scanf("%s",rec[rec[0].no+i].item);
		printf("�п�J���B: ");
		scanf("%d",&rec[rec[0].no+i].cash);
		printf("\n");
		rec[rec[0].no+i].no=rec[0].no+i;
		sum+=rec[rec[0].no+i].cash;
	}
	rec[0].no+=i-1;
	rec[0].cash+=sum;
	return rec;
}

void veiwData(int n,account *rec)
{
	int i;
	printf("�`���ؼ�: %d\n",rec[0].no);
	printf("�`���B��: %d\n\n",rec[0].cash);
	for(i=1;i<=rec[0].no;i++)
	{
		printf("���ؽs��: %d\n",rec[i].no);
		printf("���ؤ��: %s\n",rec[i].date);
		printf("���ئW��: %s\n",rec[i].item);
		printf("���B    : %d\n\n",rec[i].cash);
	}
}

FILE* findEnd(FILE *fp)
{
	rewind(fp);
	while(feof(fp)==0)
	{
		fseek(fp,sizeof(account),SEEK_CUR);
	}
	return fp;
}

/*int countData(FILE *fp)
{
	int i=0;
	rewind(fp);
	while(feof(fp)==0)
	{
		fseek(fp,sizeof(account),SET_CUR);
		i++;
	}
	return i;
}

void writeOnFile(char *fname)
{
	fp=fopen(fname,"r+b");
}

void readFtoData(char *fname)
{
	account data;
	fp=fopen(fname,"rb");
	rewind(fp);
	
	while(!feof(fp))
	{
		if(fread(&data,sizeof(account),1,fp))
		{
			printf("���ؽs�� %d\n",data.no);
			printf("���ؽs�� %d\n",data.no);
			printf("���ؽs�� %d\n",data.no);
		}
	}
}*/
