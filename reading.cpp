int reading(char *fname)
{
	printf("\n[2]檢視帳表\n\n");
	headData=readHeadData(fname);
	rec=creatdata(n,rec);
	rec=readData(fname,rec);
	veiwData(0,rec);
	free(rec);
	printf("如需結束檢視");
	system("PAUSE");
	system("cls");
	return 0;
}
