#include<stdio.h>

char *_strstr(const char *str, const char *subStr);

//	str - address of main string
//	subStr - address of sub string to be located in main string
//	returns starting address of located sub string

char *_strstr(const char *str, const char *subStr)
{
	// traverse main string
	for(int i = 0 ; str[i] != '\0' ; i++)
	{
		// compare ith character of main string with first character of substring
		if(str[i] == subStr[0])
		{
			int j;
			for(j = 0 ; subStr[j] != '\0' ; j++)
			{
				if(subStr[j] != str[i + j])
					break;	
			}
			if(subStr[j] == '\0')
				return str+i;	
		}
	}
	// if substring is not found, return NULL
	return NULL;	
}


int main(void)
{
	char str[50] ;
	char sub[20] ;

	printf("Enter string:");
	scanf("%[^\n]s",str);
	printf("Enter  Substring:");
	scanf("%s",sub);


	char result = _strstr(str, sub);

	if (result != NULL)
	{
		printf("%s is substring of %s",sub,str);
	}
	else
	{
		printf("%s is not substring of %s",sub,str);

	}
		
    return 0;
}



