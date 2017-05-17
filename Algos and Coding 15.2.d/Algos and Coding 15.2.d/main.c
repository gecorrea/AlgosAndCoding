//
//  Algos and Coding 15.2.d
//
//  Created by George E. Correa on 11/28/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
/*  Write a function to find the position at which the substring “indifferent” appears above. */

#include <stdio.h>

void findSubstringIndex(char *fullString, char *subString)
{
    // Declare variables i, j, fullStringLength and subStringPosition.
    int i = 0;
    int j = 0;
    int fullStringLength;
    int subStringPosition;
    
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
}

int main(int argc, const char * argv[]) {
    
    char *myQuote;
    
    myQuote = "\"Mr. Fay, is this going to be a battle of wits?\"\n\"If it is,\" was the indifferent retort, \"you have come unarmed!\"";
    
    printf("%s\n", myQuote);
    
    findSubstringIndex(myQuote, "indifferent");
    
    return 0;
}
