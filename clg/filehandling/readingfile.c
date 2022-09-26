#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char str[15];
    fp=fopen("ftext.txt","w");
    printf("Apka subh naam daliye\n");
    gets(str);
    if(fp==NULL)
    {
        printf("File does not exist\n");
        exit(1);
    }
   fputs(str,fp);
    fclose(fp);
    return 0;
}