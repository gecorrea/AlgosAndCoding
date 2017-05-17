//
//  Algos and Coding 12d
//
//  Created by George E. Correa on 11/16/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /* Print a table of Farhenheit to Celsius conversions from 100 F to -400 F for
     every degree*/
    float tempF;
    float minTempF = -40;
    
    printf("Conversions of temperatures from Farhenheit to Celsius.\n");
    
    for (tempF = 100; tempF >= minTempF; tempF--)
    {
        // Converting the Farhenheit temperature to Celsius.
        float tempC = (tempF-32)*5/9;
        printf("%.0f degrees Farhenheit is %.2f degrees Celsius.\n", tempF, tempC);
    }
    return 0;
}
