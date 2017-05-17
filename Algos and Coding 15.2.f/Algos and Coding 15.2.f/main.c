//
//  Algos and Coding 15.2.f
//
//  Created by George E. Correa on 11/29/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
//  Create a substring of the above string that contains the following substring.
//  "you have come unarmed!


#include <stdio.h>

void createSubstring(char *fullString, char *subString)
{
    // Declare variables i, j, fullStringLength, subStringPosition and newSubString.
    int i = 0;
    int j = 0;
    int fullStringLength;
    int subStringPosition = 0;
    
    // First we will find the length of fullString.
    while(fullString[i] != '\0')
    {
        i++;
    }
    
    fullStringLength = i;
    
    /* Now that we have the length of fullString, write a loop that will go through the entire string to look for the subString that we want. */
    for(i=0; i <= fullStringLength; i++)
    {
        // If fullString at i is equal to subString at j = 0, store i as subStringPosition.
        if(fullString[i] == subString[j])
        {
            subStringPosition = i;
            
            /* While fullString at i is equal to subString at j and j is not null increase both i and j. */
            while(fullString[i] == subString[j] && subString[j] != '\0')
            {
                i++;
                j++;
            }
            
            /* Once the loop is exited, if subString at j is equal to null, then we have found the subString and break out of the loop. */
            if(subString[j] == '\0')
            {
                printf("Substring %s was found at position %d.\n", subString, subStringPosition);
                break;
            }
            
            /* If j is not null then we have not found the subString. Set j equal to 0 and continue the loop. */
            else
            {
                j = 0;
            }
        }
    }
    /* Here is were we begin an array of the substring of the string we want. Create and array for the new substring. */
    char *newSubString;
    
    /* Use a for loop using integer k and comparing it to the value of j which should be at the null character if we have found the string we are looking for. We want to continue this loop while k is less than j. */
    for(int k = 0; k < j; k++)
    {
        // newSubString will start at position k and push the character at fullString at subStringPosition (our index for where the substring we are looking for began). */
        newSubString[k] = fullString[subStringPosition];
        // Increase subStringPosition and continue the loop.
        subStringPosition++;
        // Test to make sure that we are getting the substring we want.
        printf("%c", newSubString[k]);
    }
}

int main(int argc, const char * argv[]) {
    
    char *myQuote;
    
    myQuote = "\"Mr. Fay, is this going to be a battle of wits?\"\n\"If it is,\" was the indifferent retort, \"you have come unarmed!\"";
    
    printf("%s\n", myQuote);
    
    createSubstring(myQuote, "\"you have come unarmed!");
    
    return 0;
}
