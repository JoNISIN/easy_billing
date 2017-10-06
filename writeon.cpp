int writeon(char *fname)
{
	int ch;
	printf("\n[1]建立新項目\n\n");
	
	printf("輸入新資料項數=>");
	scanf("%d",&n);
	printf("提示: 支出請使用負數表示\n");
	headData=readHeadData(fname);
	rec=creatdata(n,rec);
	readData(fname,rec);     
	
	recCash(n,rec);     
	
	/*printf("目前所有項目:\n\n");
	veiwData(n,rec);*/
	
	writeData(fname,rec);
	printf("提示: 檔案已寫入完成!\n\n");
	free(rec);
	
	printf("如需再次輸入新項目請輸入[1]=>");
	scanf("%d",&ch);
	if(ch==1) return 1;
	else return 0;
}
