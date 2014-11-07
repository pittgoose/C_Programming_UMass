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






int main (void)
{
    char a, b;
    scanf("%c %c", &a, &b);
    printf("%i\n", blackjack_hand(a, b));
}















