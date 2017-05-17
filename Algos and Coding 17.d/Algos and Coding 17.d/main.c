//
//  Algos and Coding 17.d
//
//  Created by George E. Correa on 12/8/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
/*  Write a recursive program to convert an alphanumeric such as “3.14159” to the appropriate numeric data type. */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int stringLength(char *string)
{
    int i = 0;
    
    while(string[i] != '\0')
    {
        i++;
    }
    
    return i;
}

long power(int x, int y)
{
    int result = 1;
    int limit = 0;
    
    while(y > limit)
    {
        result = result * x;
        y--;
    }
    
    return result;
}

double power2(float x, int y)
{
    double result = 1;
    int limit = 0;
    
    while(y > limit)
    {
        result = result * x;
        y--;
    }
    
    return result;
}

int findDecimal(char *string, char delimiter, int stringLength)
{
    int decimal = -1;
    
    for(int i = 0; i < stringLength; i++)
    {
        if(string[i] == delimiter)
        {
            decimal = i;
            break;
        }
    }
    
    return decimal;
}

long leftOfDecimal(char *strng, int strngLngth, int i, long sum)
{
    if(i < strngLngth)
    {
        sum += (strng[i] - 48) * power(10, (strngLngth - i - 1));
        return leftOfDecimal(strng, strngLngth, i + 1, sum);
    }
    else
        return sum;
}

double rightOfDecimal(char*strng, int strngLngth, int i, int j, double sum)
{
    if(i < strngLngth)
    {
        sum += (strng[i + 1] - 48) * power2((.1), (j));
        return rightOfDecimal(strng, strngLngth, i + 1, j + 1, sum);
    }
    else
        return sum;
}

int main(int argc, const char * argv[]) {

    char *string = "3.14159";
    int stringSize = stringLength(string);
    char decimal = '.';
    int position;
    long leftSideSum = 0;
    double rightSideSum = 0;
    
    if (string[0] == '-')
    {
        position = 1;
    }
    else
    {
        position = 0;
    }
    
    int decimalPlace = findDecimal(string, decimal, stringSize);
    
    if(decimalPlace >= 0)
    {
        leftSideSum = leftOfDecimal(string, decimalPlace, position, leftSideSum);
        position = 1;
        rightSideSum = rightOfDecimal(string, stringSize, decimalPlace, position, rightSideSum);
        
        double sumWithDec = leftSideSum + rightSideSum;
        
        if(sumWithDec < FLT_MIN || sumWithDec > FLT_MAX)
        {
            if(string[0] == '-')
                sumWithDec = sumWithDec * (-1);
            printf("%f\n", sumWithDec);
        }
        else
        {
            float sumFloat = leftSideSum + rightSideSum;
            if(string[0] == '-')
                sumFloat = sumFloat * (-1);
            printf("%f\n", sumFloat);
        }
    }
    else
    {
        leftSideSum = leftOfDecimal(string, stringSize, position, leftSideSum);
        if(string[0] == '-')
            leftSideSum = leftSideSum * (-1);
        if(leftSideSum < INT_MIN || leftSideSum > INT_MAX)
            printf("%ld\n", leftSideSum);
        else
        {
            int sumInteger = leftSideSum;
            printf("%d\n", sumInteger);
        }
    }
    
    return 0;
}
