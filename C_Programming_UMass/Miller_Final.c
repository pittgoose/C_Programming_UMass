// *******************************************************************
//2)  Write a function which will determine how many words are in a given string.  You can assume that one or more
//consecutive white spaces is a delimiter between words, and that the string you pass to your function is null terminated.
// *******************************************************************


// *******************************************************************
//3)  Write a function that is passed a month, day, and year and will determine if
//that date is valid.   You can assume each parameter is passed in as an integer.
//Remember to check for leap year!
//
//validDate (5, 31, 1961)    .... would be valid
//
//validDate (13, 4, 1967)    ... would be invalid, the month is invalid
// *******************************************************************



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
//7)  Write a function that will return in a structure the following characteristics of a given string:
//
//1) string length (use strlen),
//2) number of upper case characters
//3) number of lower case characters,
//4) number of digits
//5) number of non-alphanumeric characters.
// *******************************************************************



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

// *******************************************************************
// Function area_of_circle
//
// Purpose: This function will calculate the area of a circle, given
// the radius.
//
// Parameters: radius - the radius of the circle to be calculated
//
// Returns: area of the circle
//
// *******************************************************************
float area_of_circle (float radius)
{
    float area; // Stores the area of the circle
    const float PI = 3.14159; // Constant variable of Pi. This would be defined as a constant if it were more than a macro
    
    // Area of a circle equals Pi time radius squared
    area = PI * (radius * radius);
    
    // Return the area of the circle to the calling function
    return area;
}

// *******************************************************************
// Function area_of_square
//
// Purpose: This function will calculate the area of a square, given
// the length of a side.
//
// Parameters: side - the length of one side from the square
//
// Returns: area of the circle
//
// *******************************************************************
float area_of_square (float side)
{
    float area; // Stores the area of the square
    
    // Area of a square equals 1 side squared
    area = side * side;
    
    // Return the area of the square to the calling function
    return area;
}

// *******************************************************************
// Function area_of_rectangle
//
// Purpose: This function will calculate the area of a rectangle, given
// the width and height.
//
// Parameters: width - the width of the rectangle
//             height - the height of the rectangle
//
// Returns: area of the rectangle
//
// *******************************************************************
float area_of_rectangle (float width, float height)
{
    float area; // Stores the area of the rectangle
    
    // Area of a rectangle equals width times height
    area = width * height;
    
    // Return the area of the rectangle to the calling function
    return area;
}

// *******************************************************************
// Function area_of_triangle
//
// Purpose: This function will calculate the area of a triangle, given
// the base and the vertical height.
//
// Parameters: base - the base of the triangle to be calculated
//             height - the vertical height of the triangle
//
// Returns: area of the triangle
//
// *******************************************************************
float area_of_triangle (float base, float height)
{
    float area; // Stores the area of the rectangle
    
    // Area of a triangle is one half times the base times the vertical height
    area = .5 * base * height;
    
    // Return the area of the triangle to the calling function
    return area;
}