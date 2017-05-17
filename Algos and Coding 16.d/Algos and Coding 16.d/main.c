//
//  Algos and Coding 16.d
//
//  Created by George E. Correa on 12/6/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
//  Binary search

#include <stdio.h>

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

int main(int argc, const char * argv[]) {
    
    int array[] = {10, 12, 4, 5, 9, 20, 7, 3, 2, 15, 6};
    
    int target = 4;
    
    int arraySize = arrayLength(array);
    
    for(int i = 0; i < (arraySize - 1); i++)    //b. start
    {
        for(int j = 0; j < ((arraySize - 1) - i); j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    printf("The sorted array is:");
    
    for(int k = 0; k < arraySize; k++)
    {
        printf(" %d", array[k]);
    }
    
    printf(".\n");                              //b. end
    
    int midpoint = 0;                           //c. start
    int lo = 0;
    int hi = arraySize - 1;
    
    if(midpoint > (arraySize - 1))
        printf("There are no elements in the array.");
    else
    {
        do
        {
            if(target == array[hi])
            {
                midpoint = hi;
                break;
            }
            else if(target > array[midpoint])
            {
                lo = midpoint;
            }
            else
            {
                hi = midpoint;
            }
            
            if(hi%2 != 0)
            {
                midpoint = (lo + hi - 1)/2;
            }
            else
                midpoint = (lo + hi)/2;
            
            
            if(target == array[midpoint])
                break;
        }
        while(midpoint >= lo && midpoint <= hi);
    }

    if(midpoint >= lo && midpoint <= hi)
    {
        printf("Your number %d was found at position %d in the array.\n", array[midpoint], midpoint);
    }
    else
    {
        printf("Your number was not found in the array.\n");
    }                                                   //c. end
    
    return 0;
}

/*d. If the array has 1024 elements, approximately how many steps are needed before the search is complete? log base 2 1024 = 10*/
/*e. What is the number of steps if the array has N elements? log base 2 N*/
