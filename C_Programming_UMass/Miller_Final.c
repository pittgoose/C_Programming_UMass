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

//--------------------------------------------------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------------------------------------------------

// *******************************************************************
// 3)  Write a function that is passed a month, day, and year and will determine if
// that date is valid.   You can assume each parameter is passed in as an integer.
// Remember to check for leap year!
//
// validDate (5, 31, 1961)    .... would be valid
//
// validDate (13, 4, 1967)    ... would be invalid, the month is invalid
// *******************************************************************

// *******************************************************************
// FUNCTION:    valid_date
//
// DESCRIPTION: This function will take a date in three integer values
//              and return true or false if it is a valid date or not.
//
// PARAMETERS:  month - the month
//              day - the day
//              year - the year
//
// OUTPUTS:     bool - true or false
//
// CALLS:       number_days - gets the number of days in the month,
//                            depending on the month and year.
// *******************************************************************
bool valid_date (int month, int day, int year)
{
    int number_days (int month, int year);
    
    // Check if the month is a valid month
    if (month < 1 || month > 12) {
        return false;
    }
    
    // check if the day is a valid day
    if (day < 1 || day > number_days(month, year)) {
        return false;
    }
    
    // check if the year is a positive number
    if (year < 0) {
        return false;
    }
    
    // If the date is valid
    return true;
}

// *******************************************************************
// FUNCTION:    number_days
//
// DESCRIPTION: This function will take a month and year and return
//              the number of days in that month.
//
// PARAMETERS:  month - the month
//              year - the year
//
// OUTPUTS:     int - number of days in the month
//
// CALLS:       is_leap_year
// *******************************************************************
int number_days (int month, int year){
    bool is_leap_year (int year);
    
    // an array with the number of days in each month in a regular year
    const int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (is_leap_year(year) && month == 2) {
        // if it's a leapyear and the user is requesting the days in feb
        return 29;
    }
    else {
        // if it's not a leap year
        return days_per_month[month - 1];
    }
}

// *******************************************************************
// FUNCTION:    is_leap_year
//
// DESCRIPTION: This function will take a year and determine if it is
//              a leap year.
//
// PARAMETERS:  year - the year
//
// OUTPUTS:     bool - true or false
//
// CALLS:       none
// *******************************************************************
bool is_leap_year (int year) {
    bool leap_year_flag;
    // check if the year passed is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
    }
    else {
        return false;
    }
}

//--------------------------------------------------------------------------------------------------------------------------------------------

// *******************************************************************
//4)  Write a function that takes the values of a two-card blackjack hands as input, and returns the point total of the hand. The value
//of the cards '2' through '9' is equal to their face value, the cards 'T', 'K', 'Q', 'J' are worth 10 points and the ace ('A') is worth 11 points
//unless it comes with another ace, then that second ace is worth 1 point. The program should be able to catch incorrect input.
//
//Enter cards: A Q
//The score is 21
//
//Enter cards: A A
//The score is 12
//
//Enter cards: T 7
//The score is 17
//
//Enter cards: A 5
//The score is 16
//
//Enter cards: 7 #
//*** Would be invalid, # is not a valid card
//
//Enter cards: Z 4
//*** Would be invalid, Z is not a valid card
//
//Hint:  I've used a value of 'T' for the 10 card so you can simply pass in two characters,
//instead of strings, as parameters to this function.
// *******************************************************************

// *******************************************************************
// FUNCTION:    blackjack_hand
//
// DESCRIPTION: This function will take two cards and tell you what
//              the blackjack hand total is.
//
// PARAMETERS:  card1 - the first card
//              card2 - the second card
//
// OUTPUTS:     int - the value of the hand
//
// CALLS:       valid_card
// *******************************************************************
int blackjack_hand (char card1, char card2)
{
    bool valid_card (char card);
    int hand_total;
    
    // make the cards uppercase
    card1 = toupper(card1);
    card2 = toupper(card2);
    
    // check that both inputs are valid
    if (!valid_card(card1) || !valid_card(card2)) {
        return -1;
    }
    
    // find the value of card1
    if (card1 <= '9' && card1 >= '2') {
        hand_total = card1 - 48; // subtract 48 from the value of the char to get the int value
    }
    else if (card1 == 'T' || card1 == 'J' || card1 == 'Q' || card1 == 'K') {
        hand_total = 10;
    }
    else { // card1 = 'A'
        hand_total = 11;
    }
    
    // find the value of card2
    if (card2 <= '9' && card2 >= '2') {
        hand_total += card2 - 48; // subtract 48 from the value of the char to get the int value
    }
    else if (card2 == 'T' || card2 == 'J' || card2 == 'Q' || card2 == 'K') {
        hand_total += 10;
    }
    else { // card2 = 'A'
        hand_total += 1;
    }
    
    return hand_total;
}

// *******************************************************************
// FUNCTION:    valid_card
//
// DESCRIPTION: This function will take a character and tell the
//              calling function whether or not it is a real card
//
// PARAMETERS:  card - the potential card
//
// OUTPUTS:     bool - true or false
//
// CALLS:       none
// *******************************************************************
bool valid_card (char card)
{
    // check the valid card types
    if ((card <= '9' && card >= '2') || (card == 'A' || card == 'T' || card == 'J' || card == 'Q' || card == 'K')) {
        // If valid
        return true;
    }
    else
    {
        // invalid
        return false;
    }
    
}

//--------------------------------------------------------------------------------------------------------------------------------------------

// *******************************************************************
//5) Write a function to determine is a given word is legal.   A word is illegal if it contains no vowels. For this problem,
//the letter Y is considered to be a legal vowel.   Pass in a word to this function and it will determine if the word is
//legal or not.   You can make the following assumptions about the word you a passing to this function.
//
//1) The string being passed is a combination of letters only (no non-letter check needed)
//2) The string being passed is null terminated
//3) Letters may be capital or lower case and it has no effect on whether its a word
//
//Examples:
//
//sch  - is illegal, no vowels
//apple - legal, contains a vowel
//APPle - legal, uppercase letter combinations do not matter
//try - legal, no vowel, but contains the letter 'y'
// *******************************************************************

// *******************************************************************
// FUNCTION:    is_word_legal
//
// DESCRIPTION: This function will traverse a character string and
//              determine if it is a legal word (has a vowel or a y)
//
// PARAMETERS:  *str_ptr - a pointer to the first value in the string
//
// OUTPUTS:     bool - true or false
//
// CALLS:       none
// *******************************************************************
bool is_word_legal (char *str_ptr)
{
    // check the string 1 character at a time
    while (*str_ptr) {
        // check if the current char is a vowel or y
        if (tolower(*str_ptr) == 'a' || tolower(*str_ptr) == 'e' || tolower(*str_ptr) == 'i' || tolower(*str_ptr) == 'o' || tolower(*str_ptr) == 'u' || tolower(*str_ptr) == 'y') {
            // if yes
            return true;
        }
        // if not increment the loop and run it again
        ++str_ptr;
    }// end while
    
    // if there were no vowels
    return false;
}

//--------------------------------------------------------------------------------------------------------------------------------------------











