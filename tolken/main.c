//
//  main.c
//  tolken
//
//  Created by Szeto, Colin on 12/16/19.
//  Copyright © 2019 Szeto, Colin. All rights reserved.
//

#include <stdio.h>
#include <stdio.h>
#include <string.h>

//added from https://www.geeksforgeeks.org/strtok-strtok_r-functions-c-examples/

/*
int main()
{
    char str[] = "Aiden is cool";
  
    // Returns first token
    char* token = strtok(str, " ");
  
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, "-");
    }
  
    return 0;
}
*/
//output
//Aiden
//is cool
//Program ended with exit code: 0
/*
struct address
{
   char name[50];
   char street[100];
   char city[50];
   char state[20];
   int pin;
};

int main()
{
    char str[] = "Aiden is Cool";
    char* token;
    char* rest = str;

    while ((token = strtok_r(rest, " ", &rest)))
 //       printf("%s\n", token);
        
        

    return (0);
}
*/
//output from above
//Aiden
//is
//Cool

//what micheal provided

typedef struct language {
    char word[80], reversed[80], pigged[80], shorted[80];
} WORDS;
typedef struct phrases {
    char phrases[1000];
    WORDS words[1000];
} PHRASE;

int main () {
    int i = -1;
    int n = -1;//this is an integer for the array
//    int temp[n];// int array to stor the
//    char *temp[n] = token;

   char str[80] = "This is www.tutorialspoint.com website";
   const char s[2] = " ";
   char *token;
   

    
   /* get the first token */
   token = strtok(str, s);

   /* walk through other tokens */
   while( token != NULL ) {//runs until there is null or end of line
      printf( " %s\n", token );

       i ++;//this is the counter which will print with the word
       n ++;
       
      token = strtok(NULL, s);

       
       printf("%d", i);
    // end of the tokeninizing code
   }
   return(0);
   }
