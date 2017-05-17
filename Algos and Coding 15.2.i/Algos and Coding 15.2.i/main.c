//
//  Algos and Coding 15.2.i
//
//  Created by George E. Correa on 11/30/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
/*  You have an array of strings. Create a new string, which is a concatenation of all the array elements.
        a. Check that the length of individual strings when added equals the length of the final string
        b. Makesureyourprogramworkswithanarraywithnoelements */

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

void stringConcatenation(char *array[],int arraySize)
{

    int totalStringsLength = 0;
    
    
    // Find the length of each string using stringLenth function.
    for(int i = 0; i < arraySize; i++)
    {
        totalStringsLength += stringLength(array[i]);
    }

    printf("The total number of characters is %d.\n", totalStringsLength);
    
    // Create a new string array
    char newStringArray[totalStringsLength];

    // Concatenate the strings
    int k = 0;
    int l = 0;
    for(int j = 0; j < arraySize; j++)
    {

        while(array[j][l] != '\0')
        {
        
            newStringArray[k] = array[j][l];
            k++;
            l++;
        }
        l = 0;
    }
    
    // Print the new string array
    if(totalStringsLength > 0)
    {
      printf("Your new array is: %s\n", newStringArray);
    }
    
    else
    {
        printf("There are no strings in your array.\n");
    }
    
}

int main(int argc, const char * argv[]) {
    
    // Create an array of strings.
    char *stringArray[3] = {"program", "C", "tech"};
    char *stringArray2[1] = {""};
    // Call the function to concatenate the strings.
    stringConcatenation(stringArray, 3);
    stringConcatenation(stringArray2, 1);
    
    return 0;
}
