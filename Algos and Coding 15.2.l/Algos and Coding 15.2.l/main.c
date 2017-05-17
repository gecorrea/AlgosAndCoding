//
//  Algos and Coding 15.2.l
//
//  Created by George E. Correa on 12/5/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
/*  Change your program so that it can support any number of delimiters.
    Hint: Use an array to store your delimiters. */

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

int findDelimiter(char *string, char *delimiter, int stringLength, int delimiterSize)
{
    int numOfDelimiters = 0;
    
    for(int i = 0; i < stringLength; i++)
    {
        for(int n = 0; n < delimiterSize; n++)
        {
            if(string[i] == delimiter[n])
                numOfDelimiters++;
        }
    }
    
    return numOfDelimiters;
}

int findLongestString(char *string, char *delimiter, int stringLenth, int delimiterSize)
{
    int longestString = 0;
    int currentString = 0;
    
    for(int i = 0; i < stringLenth; i++)
    {
        int n = 0;
        while(n < delimiterSize)
        {
            if(string[i] != delimiter[n] && string[i] != '\0')
            {
                n++;
                if((n + 1) == delimiterSize)
                {
                    currentString++;
                    break;
                }
            }
            else
                break;
        }
        
            if(currentString > longestString)
            {
                longestString = currentString;
                currentString = 0;
            }
    }
    
    return longestString;
}

int findArraySize(char *string, char *delimiter, int stringLenth, int delimiterSize)
{
    int arraySize = 0;
    
    for(int i = 0; i <= stringLenth; i++)
    {
        int n = 0;
        
        while(n < delimiterSize)
        {
            if(string[i] != delimiter[n] && string[i] != '\0')
                n++;
            else
            {
                arraySize++;
                break;
            }
        }
        
            for(int n = 0; n < delimiterSize; n++)
            {
                if(string[i] == delimiter[n])
                {
                    i++;
                }
            }
            
    }

    return arraySize;
}


int main(int argc, const char * argv[]) {
    
    char givenString[] = {"USA. Canada, Mexico, Bermuda Grenada, Belize"};
    
    char delimiterArray[] = {',', ' ', '.'};
    
    int givenStringLength = stringLength(givenString);
    
    int delimiterArrayLength = stringLength(delimiterArray);
    
    printf("The current string length is %d characters.\n", givenStringLength);
    
    int numberOfDelimters = findDelimiter(givenString, delimiterArray, givenStringLength, delimiterArrayLength);
    
    printf("The number of delimiters is %d.\n", numberOfDelimters);

    
    int j = 0;
    int k = 0;
    
    int arraySize = findArraySize(givenString, delimiterArray, givenStringLength, delimiterArrayLength);
    
    int longestCountry = (findLongestString(givenString, delimiterArray, givenStringLength, delimiterArrayLength));
    
    char stringArray[arraySize][longestCountry];
    
    
    for(int i = 0; i < arraySize; i++)
    {
        int n = 0;
        
        while(j < givenStringLength)
        {
            while(n < delimiterArrayLength)
            {
                if(givenString[j] != delimiterArray[n])
                {
                    n++;
                }
                else
                    break;
            }

            if(givenString[j] != delimiterArray[n] && givenString[j] != '\0')
            {
                stringArray[i][k] = givenString[j];
                k++;
                j++;
                n = 0;
            }
            // Set k equal to 0 again.
            else if(givenString[j] == '\0')
            {
                stringArray[i][k] = '\0';
                break;
            }
            else
            {
                stringArray[i][k] = '\0';
                j++;
                for(int p = 0; p < delimiterArrayLength; p++)
                {
                    if(givenString[j] == delimiterArray[p])
                    {
                        j++;
                    }
                }
                break;
            }
        }
        k = 0;
    }
    
    for(int m = 0; m < arraySize; m++)
    {
        printf("The element in %d is %s.\n", m, stringArray[m]);
    }
    
    return 0;
}
