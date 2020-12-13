#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp1, *fp2, *fp;

	char arr1[7][9], arr2[7][9];//declaring 2D arrays to store multiple strings stored in the file

	fp1 = fopen("file1.txt", "r");//opening file1.txt in read mode
	fp2 = fopen("file2.txt", "r");//opening file2.txt in read mode
	
	//scanning the contents of corresponding files and storing them in corresponding arrays
	for(int i = 0; i < 6; i++)
	{
		fscanf(fp1, "%s", arr1[i]);
		fscanf(fp2, "%s", arr2[i]);
	}

	//closing the 2 files
	fclose(fp1);
   	fclose(fp2);

	fp = fopen("file.txt", "w");//opening file1.txt in write mode

	//printing the contents of file1.txt in file.txt 
	for(int i = 0; i < 6; i++)
		fprintf(fp, "%s ", arr1[i]);

	fprintf(fp, "\n");
	
	//printing the contents of file1.txt in file.txt
	for(int i = 0; i < 6; i++)
		fprintf(fp, "%s ", arr2[i]);
		
	fclose(fp);//closing the file fp
	
	fp = fopen("file.txt", "r");//opening file1.txt in read mode
	char s[1000];//declaring an array to store the contents of file.txt
	
	//printing the contents of file.txt
	while(!feof(fp)) 
	{
		fgets(s, 1000, fp);
		printf("%s", s);
	}

    fclose(fp);//closing the file fp

    return 0;
}
