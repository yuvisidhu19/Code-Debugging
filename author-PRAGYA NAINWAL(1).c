#include<stdio.h>
int main()
{
    #define MAX 100
    char str1[MAX],*revstr;
	printf("\n\n Recursion : Get reverse of a string :\n");
	printf("------------------------------------------\n");	

    printf(" Input any string: ");
    scanf("%s",&str1);

    revstr = ReverseOfString(str1);//call the function ReverseOfString

    printf(" The reversed string is: %s\n\n",revstr);
    return 0;
}
char ReverseOfString(char str1[])
{
    static int i=0;
    static char revstr[MAX];
    if(*str1)
    {
         ReverseOfString(str1+1);//calling the function ReverseOfString itself
         revstr[i=+1] = *str1;
    }
    return revstr;
}


