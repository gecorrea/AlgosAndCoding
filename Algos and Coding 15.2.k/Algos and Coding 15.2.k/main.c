//
//  Algos and Coding 15.2.k
//
//  Created by George E. Correa on 12/12/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
/*  Modify the program above so it can understand countries separated by either a comma or a space or a period. “USA. Canada, Mexico, Bermuda Grenada, Belize”*/

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

int findLongestString(char *string, char delimiter1, char delimiter2, char delimiter3, int stringLenth)
{
    int longestString = 0;
    int currentString = 0;
    
    for(int i = 0; i < stringLenth; i++)
    {
        if(string[i] != delimiter1 && string[i] != delimiter2 && string[i] != delimiter3 && string[i] != '\0')
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

int findArraySize(char *string, char delimiter1, char delimiter2, char delimiter3, int stringLenth)
{
    int arraySize = 0;
    int i = 0;
    
    while(i < stringLenth)
    {
        if(string[i] != delimiter1 && string[i] != delimiter2 && string[i] != delimiter3 && string[i] != '\0')
        {
            arraySize++;
            while(string[i] != delimiter1 && string[i] != delimiter2 && string[i] != delimiter3 && string[i] != '\0')
            {
                i++;
            }
        }
        else
            i++;
        
    }
    return arraySize;
}


int main(int argc, const char * argv[]) {
    
    char givenString[] = {"USA. Canada, Mexico, Bermuda Grenada, Belize"};
    
    char delimiter1 = ',';
    char delimiter2 = ' ';
    char delimiter3 = '.';
    
    int givenStringLength = stringLength(givenString);
    
    printf("The current string length is %d characters.\n", givenStringLength);
    
    int numberOfCommas = findDelimiter(givenString, delimiter1, givenStringLength);
    
    int numberOfSpaces = findDelimiter(givenString, delimiter2, givenStringLength);
    
    int numberOfPeriods = findDelimiter(givenString, delimiter3, givenStringLength);
    
    printf("The number of commas is %d.\n", numberOfCommas);
    printf("The number of spaces is %d.\n", numberOfSpaces);
    printf("The number of periods is %d.\n", numberOfPeriods);
    
    int j = 0;
    int k = 0;
    
    int arraySize = findArraySize(givenString, delimiter1, delimiter2, delimiter3, givenStringLength);
    
    int longestCountry = (findLongestString(givenString, delimiter1, delimiter2, delimiter3, givenStringLength) + 1);
    
    char stringArray[arraySize][longestCountry];
    
    
    for(int i = 0; i < arraySize; i++)
    {
        while(givenString[j] != delimiter1 && givenString[j] != delimiter2 && givenString[j] != delimiter3 && givenString[j] != '\0')
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
            while(givenString[j] == delimiter1 || givenString[j] == delimiter2 || givenString[j] == delimiter3)
            {
                j++;
            }
            k = 0;
        }
    }
    
    for(int m = 0; m < arraySize; m++)
    {
        printf("The element in %d is %s.\n", m, stringArray[m]);
    }
    
    return 0;
}
