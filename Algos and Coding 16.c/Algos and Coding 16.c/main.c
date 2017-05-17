//
//  Algos and Coding 16.c
//
//  Created by George E. Correa on 12/6/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
/*  Implement the Bubble Sort algorithm – first in the simple algorithmic language and then in C. */

int arrayLength(int *array)
{
    int a = 0;
    int arraySize = 0;
    
    while (array[a] != '\0')
    {
        a++;
        arraySize++;
    }
    
    return arraySize;
}

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int bubbleArray[] = {10, 12, 4, 5, 9, 20, 7, 3, 2, 15, 6};
    
    int bubbleArraySize = arrayLength(bubbleArray);
    
    for(int i = 0; i < (bubbleArraySize - 1); i++)
    {
        for(int j = 0; j < ((bubbleArraySize-1)-i); j++)
        {
            if(bubbleArray[j] > bubbleArray[j+1])
            {
                int temp = bubbleArray[j];
                bubbleArray[j] = bubbleArray[j+1];
                bubbleArray[j+1] = temp;
            }
        }
    }
    
    printf("The sorted array is:");
    
    for(int k = 0; k < bubbleArraySize; k++)
    {
        printf(" %d", bubbleArray[k]);
    }
    
    printf(".\n");
    
    return 0;
}
