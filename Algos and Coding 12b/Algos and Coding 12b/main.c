//
//  Algos and Coding 12b
//
//  Created by George E. Correa on 11/16/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /* Print a table of Farhenheit to Celsius conversions from -40 F to 100 F for
    every degree*/
    float tempF;
    float maxTempF = 100;
    
    for (tempF = -40; tempF <= maxTempF; tempF++)
    {
        // Converting the Farhenheit temperature to Celsius.
        float tempC = (tempF-32)*5/9;
        printf("%.0f degrees Farhenheit is %.2f degrees Celsius.\n", tempF, tempC);
    }
    return 0;
}
