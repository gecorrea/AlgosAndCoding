//
//  Algos and Coding 17.b.d
//
//  Created by George E. Correa on 12/7/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
//  Modify the above program to print temperatures from 100F to -40F, using recursion.

#include <stdio.h>

void tempConversion(float tempF, float minTempF)
{
    float tempC;
    
    if(tempF >= minTempF)
    {
        tempC = (tempF-32)*5/9;
        printf("%.0f degrees Farhenheit is %.2f degrees Celsius.\n", tempF, tempC);
        tempConversion(tempF - 1, minTempF);
    }
}

int main(int argc, const char * argv[]) {
    
    float startTemp = 100;
    float endTemp = -40;
    
    printf("Conversions of temperatures from Farhenheit to Celsius.\n");
    
    tempConversion(startTemp, endTemp);
    
    return 0;
}
