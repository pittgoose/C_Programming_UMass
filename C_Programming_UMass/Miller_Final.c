// *******************************************************************
//1)  Write a macro for each of the following:
//
//a) Area of a Circle
//b) Area of a Square
//c) Area of a Rectangle
//d) Area of a Triangle
//
//You can find formulas and detailed explanations at:  http://www.mathisfun.com
// *******************************************************************

#define PI 3.14159
#define AREA_OF_CIRCLE(radius) (PI * radius * radius)
#define AREA_OF_SQUARE(side) (side * side)
#define AREA_OF_RECTANGLE(width,height) (width * height)
#define AREA_OF_TRIANGLE(base,height) (.5 * base * height)

// *******************************************************************
//2)  Write a function which will determine how many words are in a given string.  You can assume that one or more
//consecutive white spaces is a delimiter between words, and that the string you pass to your function is null terminated.
// *******************************************************************

#include <stdio.h>
#include <stdbool.h>

// *******************************************************************
// FUNCTION:  total_words
//
// DESCRIPTION: This function will return the number of words in a
//              give string as an integer.
//
// PARAMETERS:  string - an array of characters (string)
//
// OUTPUTS:     int - number of words in the string
//
// CALLS:       is_alphabetic
// *******************************************************************
int total_words (char string[])
{
    int i; // increments the loop
    int words = 0; // Used to store the number of words in the string
    bool looking_for_word = true; // tells if you are still looking for a word or if you've found it
    bool is_alphabetic (const char c); // determines if the letter is alphabetic (function included below)
    
    // loops through each letter of the string and adds to word count if a space is encountered
    for (i = 0; string[i] != '\0'; ++i) {
        if (is_alphabetic(string[i])) {
            if (looking_for_word) {
                ++words;
                looking_for_word = false;
            }
        }
        else
        {
            looking_for_word = true;
        }
    }
    
    // Returns the number of words
    return words;
}

// *******************************************************************
// FUNCTION:    is_alphabetic
//
// DESCRIPTION: This function will take a character and return true if
//              it is alphabetic and false if not.
//
// PARAMETERS:  c - a single character
//
// OUTPUTS:     bool - true or false
//
// CALLS:       none
// *******************************************************************
bool is_alphabetic (const char c)
{
    // check if the character is alphabetic
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return true;
    }
    else {
        return false;
    }
}








