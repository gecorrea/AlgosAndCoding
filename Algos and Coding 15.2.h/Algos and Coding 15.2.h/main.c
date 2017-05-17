//
//  Algos and Coding 15.2.h
//
//  Created by George E. Correa on 11/30/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
//  Make your code dynamic so that it works with any string. You will need to use malloc.

#include <stdio.h>
#include <stdlib.h>

int stringLength(char *string)
{
    int i = 0;
    int cstringLength = 0;
    
    while(string[i] != '\0')
    {
        i++;
    }
    
    cstringLength = i;
    
    return cstringLength;
}

void replacementString(char *fullString, char *subString, char *replacement)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int fullStringLength = 0;
    int subStringLength = 0;
    int replacementLength = 0;
    int subStringPosition = 0;
    
    // Find the length of fullString, subString and replacement.
    fullStringLength = stringLength(fullString);
    subStringLength = stringLength(subString);
    replacementLength = stringLength(replacement);
    
    // Get the length of the memory we need allocated
    int newStringLength = fullStringLength - subStringLength + replacementLength;
    
    // Use malloc to get the memory we need
    char *newString = malloc(sizeof(char) * newStringLength);
    
    // We have the length of fullString. Look for the subString that we want.
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
            
            /* If subString at j is equal to null, then we have found the subString and break out of the loop. */
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
    
    for(int l = 0; l < subStringPosition; l++)
    {
        newString[l] = fullString[l];
    }
    
    k = subStringPosition;
    
    for(int m = 0; replacement[m] != '\0'; m++)
    {
        newString[k] = replacement[m];
        k++;
    }
    
    while(i<= fullStringLength)
    {
        newString[k] = fullString[i];
        k++;
        i++;
    }
    
    
    printf("%s\n", newString);
    
    free(newString);
    
}

int main(int argc, const char * argv[]) {
    
    char *myQuote;
    
    
    myQuote = "\"Mr. Fay, is this going to be a battle of wits?\"\n\"If it is,\" was the indifferent retort, \"you have come unarmed!\"\0";
    
    
    printf("%s", myQuote);
    
    
    replacementString(myQuote, "indifferent", "nonchalant");
    
    return 0;
}
