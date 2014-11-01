// *******************************************************************
//2)  Write a function which will determine how many words are in a given string.  You can assume that one or more
//consecutive white spaces is a delimiter between words, and that the string you pass to your function is null terminated.
// *******************************************************************

int total_words (char string[])
{
    int words = 0; // Used to store the number of words in the string
    
    
    // Returns the number of words
    return words;
}







int count_words (const char string[])
{
    int i;
    int word_count = 0;
    bool looking_for_word = true;
    bool is_alphabetic (const char c);
    
    for (i = 0; string[i] != '\0'; ++i) {
        if (is_alphabetic(string[i])) {
            if (looking_for_word) {
                ++word_count;
                looking_for_word = false;
            }
        }
        else
        {
            looking_for_word = true;
        }
    }
    return word_count;
}





































