#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("date > file1.txt");//redirecting the data displayed by date into file1.txt  
    system("sleep 5");//pausing the system for 5 seconds before comling the next line 
    system("date > file2.txt");//redirecting the data displayed by date into file2.txt
    
    FILE *pf1, *pf2;
    pf1 = fopen("file1.txt", "r");//opening file1.txt in read mode 
    pf2 = fopen("file2.txt", "r");//opening file2.txt in read mode
    
    char arr1[7][9], arr2[7][9];//declaring 2D arrays to store multiple strings stored in the file 
    
    //scanning the contents of corresponding files and storing them in corresponding arrays
    for(int i = 0; i < 6; i++)
    {
    	fscanf(pf1, "%s", arr1[i]);
    	fscanf(pf2, "%s", arr2[i]);
    }
    
    //printing the contents of corresponding files
	for(int i = 0; i < 6; i++)
    	printf("%s ", arr1[i]);
    	
    printf("\n");
    
    for(int i = 0; i < 6; i++)
    	printf("%s ", arr2[i]);
    
    //closing the 2 files
    fclose(pf1);
	fclose(pf2);
	return 0;
}
