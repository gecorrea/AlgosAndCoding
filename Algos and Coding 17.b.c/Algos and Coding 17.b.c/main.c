//
//  Algos and Coding 17.b.c
//
//  Created by George E. Correa on 12/7/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
//  Modify the above program to add a header to your output

#include <stdio.h>

void tempConversion(float tempF, float maxTempF)
{
    float tempC;
    
    if(tempF <= maxTempF)
    {
        tempC = (tempF-32)*5/9;
        printf("%.0f degrees Farhenheit is %.2f degrees Celsius.\n", tempF, tempC);
        tempConversion(tempF + 1, maxTempF);
    }
}

int main(int argc, const char * argv[]) {
    
    float startTemp = -40;
    float endTemp = 100;
    
    printf("Conversions of temperatures from Farhenheit to Celsius.\n");
    
    tempConversion(startTemp, endTemp);
    
    return 0;
}
