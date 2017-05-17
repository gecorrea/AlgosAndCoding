//
//  Algos and Coding 15.2.e
//
//  Created by George E. Correa on 11/29/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
//  Create an array that contains positions of all commas i.e. “,” in the above sentence

#include <stdio.h>

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

void findCommas(char *fullString, char comma)
{
    // Declare variables i, j, fullStringLength and commaArray.
    int i = 0;
    int j = 0;
    int fullStringLength;
    int commaArray[100];
    int numberOfCommas = 0;
    
    // First we will find the length of fullString.
    fullStringLength = stringLength(fullString);
    
    /* Now that we have the length of fullString, write a loop that will go through the entire string to look for the commas and store the position in commaArray. */
    for(i=0; i <= fullStringLength; i++)
    {
        // If fullString at i is equal to comma, store i in commaArray starting at position 0.
        if(fullString[i] == comma)
        {
            commaArray[j] = i;
                j++;
            numberOfCommas++;
        }
    }
    
//    // To test that findCommas function works
//    j=0;
//    printf("The poistions of the commas in your string are:");
//    
//    /* Since our array starts at 0 and we know there are 3 commas, we want to print at one less than number of commas, (commArray[0], commaArray[1], and commaArray[2]). So, we will print as long as j is less than number of commas which will stop it at one less than number of commas. */
//    while(j < numberOfCommas)
//    {
//        printf("%d ", commaArray[j]);
//        j++;
//    }
}

int main(int argc, const char * argv[]) {
    
    char *myQuote;
    
    myQuote = "\"Mr. Fay, is this going to be a battle of wits?\"\n\"If it is,\" was the indifferent retort, \"you have come unarmed!\"";
    
    printf("%s\n", myQuote);
    
    findCommas(myQuote, ',');
    
    return 0;
}
