//
//  Algos and Coding 15.2a
//  Problems involving manipulation of text
//
//  Created by George E. Correa on 11/28/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
/* a) Given two strings: write a function that prints true if they are equal and false if they are not equal. */

#include <stdio.h>

void compareStrings(char *word1, char *word2)
{
    int i = 0;
    int word1Length;
    int word2Length;
    
    while(word1[i] != '\0')
    {
        i++;
    }
    
    word1Length = i;
    i = 0;
    
    while(word2[i] != '\0')
    {
        i++;
    }
    
    word2Length = i;
    i = 0;
    
     // First check if the words entered are the same length.
        if(word1Length == word2Length)
        {
            // While the word1 and word2 are the same length check the following conditions.
            while(word1Length == word2Length)
            {
    
                /* If i is equal to the length of word1 and word2 and the contents of word1 at i and word2 at i are equal, the words are the same. Print True and exit the loop. */
                if(i == word1Length && word1[i] == word2[i])
                 {
                     printf("True\n");
                 break;
                 }
    
                /* If the contents of word1 and word2 are the same but i is not the same number as the length of word1 and word2, increase i by one and loop again. */
                 else if(word1[i] == word2[i])
                     i++;
    
                /* If the contents of word1 and word2 at i are not the same, the words are not the same. Print False and exit the loop. */
                else
                {
                    //printf("%s is not the same word as %s.\n", word1, word2);
                    printf("False\n");
                    break;
                }
            }
        }
    
        /* If the words are not the same length, they are not same word. Print False. */
    
        else if(word1Length != word2Length)
        {
            //printf("%s is not the same word as %s.\n", word1, word2);
            printf("False\n");
        }
    
    

}

int main(int argc, const char * argv[]) {
    
    compareStrings("test", "eat");
    
    return 0;
}
