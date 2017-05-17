//
//  Algos and Coding 15.2.j
//
//  Created by George E. Correa on 12/1/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
/*  Given this string: “USA, Canada, Mexico, Bermuda, Grenada, Belize” --
    create an array that contains these countries as its elements. Note: the comma is the separator
    a. Make sure your program works when you add or remove countries from your string
    b. Change your program so that the delimiter can be easily changed */

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

int findDelimiter(char *string, char delimiter, int stringLength)
{
    int numOfDelimiters = 0;
    
    for(int i = 0; i < stringLength; i++)
    {
        if(string[i] == delimiter)
            numOfDelimiters++;
    }
    
    return numOfDelimiters;
}

int findLongestString(char *string, char delimiter1, char delimiter2, int stringLenth)
{
    int longestString = 0;
    int currentString = 0;
    
    for(int i = 0; i < stringLenth; i++)
    {
        if(string[i] != delimiter1 && string[i] != delimiter2 && string[i] != '\0')
        {
            currentString++;
        }
    
        if(currentString > longestString)
        {
            longestString = currentString;
            currentString = 0;
        }
    }
    
    return longestString;
}


int main(int argc, const char * argv[]) {
    
    char givenString[] = {"USA, Canada, Mexico, Bermuda, Grenada, Belize, Argentina"};
    
    char delimiter1 = ',';
    char delimiter2 = ' ';
    
    int givenStringLength = stringLength(givenString);
    
    printf("The current string length is %d characters.\n", givenStringLength);
    
    int numberOfCommas = findDelimiter(givenString, delimiter1, givenStringLength);
    
    int numberOfSpaces = findDelimiter(givenString, delimiter2, givenStringLength);
    
    printf("The number of commas is %d.\n", numberOfCommas);
    printf("The number of spaces is %d.\n", numberOfSpaces);
    
    int j = 0;
    int k = 0;
    
    int arraySize = numberOfCommas + 1;
    
    int longestCountry = (findLongestString(givenString, delimiter1, delimiter2, givenStringLength) + 1);
    
    char stringArray[arraySize][longestCountry];
    

    for(int i = 0; i < arraySize; i++)
    {
        while(givenString[j] != ',' && givenString[j] != ' ' && givenString[j] != '\0')
        {
            
            stringArray[i][k] = givenString[j];
            k++;
            j++;
        }
        
        // Set k equal to 0 again.
        if(givenString[j] == '\0')
        {
            stringArray[i][k] = '\0';
            break;
        }
        else
        {
            stringArray[i][k] = '\0';
            while(givenString[j] == ',' || givenString[j] == ' ')
            {
                j++;
            }
            k = 0;
        }
    }
    
    for(int m = 0; m <= numberOfCommas; m++)
    {
        printf("The element in %d is %s.\n", m, stringArray[m]);
    }
    
    return 0;
}
