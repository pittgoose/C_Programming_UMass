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

// *******************************************************************
//6)  Write a function that will determine if a given string is a palindrome.  DO NOT use the C library function: strrev
//
//A palindrome is a word or sentence that reads the same forward as it does backward.
//
//Examples of word palindromes would be civic or rotor ... a word or phase would be:
//
//Never odd or even
//
//A good web site of examples is:  http://www.rinkworks.com/words/palindromes.shtml
// *******************************************************************

// *******************************************************************
// FUNCTION:    is_palindrome
//
// DESCRIPTION: This function will take a string and determine if it
//              is a palindrome or not.
//
// PARAMETERS:  string - a word
//
// OUTPUTS:     bool - true or false
//
// CALLS:       none
// *******************************************************************
bool is_palindrome(char string[])
{
    int begin; // first position of the array
    int end; // last position of the array
    int middle; // middle of the array
    int length = 0; // length of the array
    
    // determine the length of the array
    while (string[length] != '\0' ){
        length++;
    }
    
    // assign the middle and end positions of the array
    end = length - 1;
    middle = length/2;
    
    // check the first value against the last value
    for( begin = 0 ; begin < middle ; begin++, end--)
    {
        if (string[begin] != string[end])
        {
            // if they don't match
            return false;
        }
    }
    // if they all match
    return true;
}

//--------------------------------------------------------------------------------------------------------------------------------------------

// *******************************************************************
//7)  Write a function that will return in a structure the following characteristics of a given string:
//
//1) string length (use strlen),
//2) number of upper case characters
//3) number of lower case characters,
//4) number of digits
//5) number of non-alphanumeric characters.
// *******************************************************************

struct stats{
    int str_length;
    int upper_case;
    int lower_case;
    int digits;
    int non_alphanumeric;
};

// *******************************************************************
// FUNCTION:    string_data
//
// DESCRIPTION: This function will take a string and parse it out to
//              determine how many of each type of character there is.
//
// PARAMETERS:  *str_ptr - pointer to the first position of the string
//
// OUTPUTS:     struct stats - a structure with the data
//
// CALLS:       none
// *******************************************************************
struct stats string_data (char *str_ptr)
{
    struct stats string_stats; // declare the struct
    
    while (*str_ptr) {
        // increment the length of the string for each pass
        string_stats.str_length++;
        
        // if the character is an upper case letter
        if (*str_ptr >= 'a' && *str_ptr <= 'z') {
            string_stats.upper_case++;
        }
        // if the character is a lower case letter
        else if (*str_ptr >= 'A' && *str_ptr <= 'Z') {
            string_stats.lower_case++;
        }
        // if the character is a digit
        else if (*str_ptr >= '0' && *str_ptr <= 9) {
            string_stats.digits++;
        }
        // if the character is none of the above
        else {
            string_stats.non_alphanumeric++;
        }
        
        ++str_ptr;
    }// end while
    return string_stats;
}

//--------------------------------------------------------------------------------------------------------------------------------------------

// *******************************************************************
//8)  Write a function, myBaseBallStats, that is passed the following integer stats on a baseball player:
//
//Number of Singles, Doubles, Triples, and Home Runs as well as Number of At Bats.
//
//Based on this information, return a structure that contains the following
//
//Total Bases, Batting Average, Home Run Ratio, and Slugging Average.
//
//You do not need to be a baseball fan to do this ... All the information you need in
//terms of the formulas and explanations can be found at:
//
//http://www.baseball-almanac.com/stats.shtml
//
//Note:  Number of hits is:  singles + doubles + triples + home runs
// *******************************************************************

struct baseball_stats{
    int total_bases;
    float batting_average;
    float home_run_ratio;
    float slugging_average;
};

struct baseball_stats myBaseBallStats (int singles, int doubles, int triples, int homers, int at_bats)
{
    struct baseball_stats my_stats;
    int hits;
    
    // determine number of hits
    hits = singles + doubles + triples + homers;
    
    // Determine how many total bases (
    my_stats.total_bases = singles + (doubles * 2) + (triples * 3) + (homers * 4);
    
    // determine batting average
    my_stats.batting_average = (float) hits / at_bats;
    
    // determine home run ratio
    my_stats.home_run_ratio = (float) homers / at_bats;
    
    // determine slugging average
    my_stats.slugging_average = (float) my_stats.total_bases / at_bats;
    
    return my_stats;
}

//--------------------------------------------------------------------------------------------------------------------------------------------

// *******************************************************************
//9)   Most people enjoy watching movies these days, whether its the classics or modern ones.
//Develop a set of structures that could be used to model the information about a movie collection.
//What type of information would you want to collect and store about a movie?   What would be the right
//types in C for that information?  Define supporting structures as needed and have one final structure type that
//is made up of various members (some members may be on some structure type, others may be simple integers,
//                               floats, chars, arrays, etc).
//
//No program is needed although you might want to create a simple main function
//and include your structure types just to test that everything compiles.
//
//This question is similar to the final question on the midterm, but you have learned about many different
//types since then.    Here is a template to use to get started and indicates what I am looking for in your answer.
//Use everything you learned this semester, especially the last set of lectures notes from Chapters 13 - 17.
//
//
///* add supporting structures - expect many structure types here ... date is good example */
//
//
//struct date
//{
//    int month;
//    int day;
//    int year;
//};
//
//
///* add other supporting structures */
//
//
///* Final structure, such as struct movie */
//struct movie
//{
//
//    /* some members may be a structure type themselves, here is an example */
//    struct date releaseDate;   /* the date the movie was released */
//
//
//    /* other members may be ints, floats, doubles, chars, enum, ...  */
//    char title [100];   /* the title of the move */
//
//
//    /* add others */
//
//};
//
//
//int main  (  )
//{
//
//    struct movie myMovie [1000];
//
//    /* nothing else needs to be added to main */
//
//    return (0);
//
//};
// *******************************************************************

struct date
{
    int month;
    int day;
    int year;
};

struct name {
    char first_name[20];
    char last_name[40];
};

struct actor {
    struct name actor_name;
    struct date birth_date;
};

struct character {
    struct name actor_name;
    struct name character_name;
};

struct movie {
    char title[100];
    struct character top_25_cast[25];
    struct date release_date;
    struct date to_dvd_date;
    struct name producer_name;
    struct name director_name;
    char synopsis[1000];
    int rating;
    char primary_genre[10];
    char secondary_genre[10];
    
    struct movie *next;
};