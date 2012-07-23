//
//  main.cpp
//  FirstRepeatingChar
//
//  Created by umut can genlik on 7/15/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

/*
    Scan the string from left to right and construct the count array.
    Again, scan the string from left to right and check for count of each
    character, if you find an element who's count is 1, return it.
 
 */


#include<stdlib.h>
#include<stdio.h>
#define NO_OF_CHARS 256

/* Returns an array of size 256 containg count
 of characters in the passed char array */
int *getCharCountArray(char *str)
{
    int *count = (int *)calloc(sizeof(int), NO_OF_CHARS);
    int i;
    for (i = 0; *(str+i);  i++)
        count[*(str+i)]++;
    return count;
}

/* The function returns index of first non-repeating
 character in a string. If all characters are repeating
 then reurns -1 */
int firstNonRepeating(char *str)
{
    int *count = getCharCountArray(str);
    int index = -1, i;
    
    for (i = 0; *(str+i);  i++)
    {
        if(count[*(str+i)] == 1)
        {
            index = i;
            break;
        }  
    } 
    return index;
}

/* Driver program to test above function */
int main()
{
    
    
    char str[]="denemeler";
    char string[]="asfgeafg";
    char test[]="testwhytest";
    
    int index =  firstNonRepeating(str);
    printf("String is %s \n",str);
    if(index == -1) 
        printf("Either all characters are repeating or string is empty\n");
    else
        printf("First non-repeating character is %c \n", str[index]);
    
    int index1 =  firstNonRepeating(string);
    printf("String is %s \n",string);
    if(index1 == -1) 
        printf("Either all characters are repeating or string is empty\n");
    else
        printf("First non-repeating character is %c\n", string[index]);
    
    int index2 =  firstNonRepeating(test);
    printf("String is %s \n",test);
    if(index2 == -1) 
        printf("Either all characters are repeating or string is empty\n");
    else
        printf("First non-repeating character is %c\n", test[index2]);
    
    
    return 0;
}

