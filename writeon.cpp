int writeon(char *fname)
{
	int ch;
	printf("\n[1]�إ߷s����\n\n");
	
	printf("��J�s��ƶ���=>");
	scanf("%d",&n);
	printf("����: ��X�Шϥέt�ƪ��\n");
	headData=readHeadData(fname);
	rec=creatdata(n,rec);
	readData(fname,rec);     
	
	recCash(n,rec);     
	
	/*printf("�ثe�Ҧ�����:\n\n");
	veiwData(n,rec);*/
	
	writeData(fname,rec);
	printf("����: �ɮפw�g�J����!\n\n");
	free(rec);
	
	printf("�p�ݦA����J�s���ؽп�J[1]=>");
	scanf("%d",&ch);
	if(ch==1) return 1;
	else return 0;
}
