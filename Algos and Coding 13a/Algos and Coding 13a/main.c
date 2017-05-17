//
//  Algos and Coding 13a
//
//  Created by George E. Correa on 11/17/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//

int main(int argc, const char * argv[]) {
    /* s = 1/2 + 1/3 + ... + 1/(n+1), print the vale that cause s to exceed 4. */
    
    /* First declare the variable s, n and MAX. This time will will be comparing the value of s to MAX. We want the loop to end at the value of n that causes s to exceed 4. */
    float s = 0;
    
    float n;
    float MAX = 4;
    
    /* Write a for loop to add 1/2 + 1/3 + ... + 1/(n+1). Since we are starting at 1/2, n will start at 1 so that the denominator, n+1, begins at 2. */
    
    for(n = 1; s <= MAX; n++)
    {
        // In here we will add the the value of 1/(n+1) to sum, s, each time the loop is executed.
        s = s + (1/(n+1));
    }
    
    // Print out the number, n, which caused s to exceed 4. Answer should be 83.
    printf("The number that caused 1/2 + 1/3 + ... + 1/(n+1) to exceed 4 is %.0f.\n", n);
    
    return 0;
}
