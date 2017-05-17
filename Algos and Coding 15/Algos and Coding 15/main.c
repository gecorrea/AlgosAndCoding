//
//  Algos and Coding 15
//
//  Created by George E. Correa on 11/18/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /* Write a program that accepts user input of two time values and computes the difference between them. */
    
    // First we have to prompt and store the two time values.
    
    int userInput1;
    int userInput2;
    
    printf("Enter first time: ");
    scanf("%d", &userInput1);
    printf("Enter second time: ");
    scanf("%d", &userInput2);
    
    /* Create input1 and input2 variables such that input1 will be the larger of the user input and input2 will be the lesser of the two user inputs. */
    
    int input1;
    int input2;
    
    if(userInput1 > userInput2)
    {
        input1 = userInput1;
        input2 = userInput2;
    }
    else
    {
        input1 = userInput2;
        input2 = userInput1;
    }
    
    // Take the input and separate it into HH, MM, and SS
    int secondsInput1 = input1 % 100;
    int secondsInput2 = input2 % 100;
    
    int minutesInput1 = ((input1 - secondsInput1)% 10000) / 100;
    int minutesInput2 = ((input2 - secondsInput2)% 10000) / 100;
    
    int hoursInput1 = ((input1 - minutesInput1)% 1000000) / 10000;
    int hoursInput2 = ((input2 - minutesInput2)% 1000000) / 10000;
    
    // Get the time difference in the seconds, minutes, and hours.
    int secondsDiff;
    int minutesDiff;
    int hoursDiff;
    
    /* If the secondsInput2 is greater than secondsInput1, we must borrow from minutesInput1. If there is nothing to borrow from minutesInput1, we must borrow from hoursInput1 to give to minutesInput1 and then give to secondsInput1. */
    if (secondsInput2 > secondsInput1)
    {
        if(minutesInput1 > 0)
        {
            minutesInput1--;
            secondsInput1 = secondsInput1 + 60;
        }
        else{
            hoursInput1--;
            minutesInput1 = 59;
            secondsInput1 = secondsInput1 + 60;
        }
    }
    
    secondsDiff = secondsInput1 - secondsInput2;

    if (minutesInput2 > minutesInput1)
    {
        hoursInput1--;
        minutesInput1 = minutesInput1 + 60;
    }
    
    minutesDiff = minutesInput1 - minutesInput2;
    hoursDiff = hoursInput1 - hoursInput2;
    
    //Now, pull the data back together so that it is in the format we received it.
    
    int timeDiff = (hoursDiff * 10000) + (minutesDiff * 100) + secondsDiff;
    
    /* Display the time difference. If the second user input is larger than the first, we want to disply that the time difference is negative. */
    
    if(userInput1 > userInput2)
    {
        printf("Time difference: %d\n", timeDiff);
    }
    else
    {
        timeDiff = timeDiff * -1;
        printf("Time difference: %d\n", timeDiff);
    }
    
    return 0;
}
