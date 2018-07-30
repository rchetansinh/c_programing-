
//Using C, How will you search for a word in file ?
//If i enter an ID Number it should look in the .txt file the employee who owns that ID Number then it will display it on the screen.. 


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *fp ;
	char line[200],search_string[50]="pragnesh";
	char file[]="test.txt";	
	fp = fopen ("test.txt","r");
	if(!fp)
	{
		 perror("could not find the file");
		 exit(0);
	}
	 while ( fgets ( line, 200, fp ) != NULL ) 
	{
		if(strstr(line,search_string))	
                puts ( line );

	}
	fclose(fp);
	return 0;
}


        
