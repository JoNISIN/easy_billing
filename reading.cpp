int reading(char *fname)
{
	printf("\n[2]�˵��b��\n\n");
	headData=readHeadData(fname);
	rec=creatdata(n,rec);
	rec=readData(fname,rec);
	veiwData(0,rec);
	free(rec);
	printf("�p�ݵ����˵�");
	system("PAUSE");
	system("cls");
	return 0;
}
