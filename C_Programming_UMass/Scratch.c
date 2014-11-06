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
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int blackjack_hand (char card1, char card2)
{
    bool valid_card (char card);
    
    // TODO make cards to upper
    
    
    // check that both inputs are valid
    if (!valid_card(card1) || !valid_card(card2)) {
        return -1;
    }
    
}

bool valid_card (char card)
{
    if ((card <= 9 && card >= 2) || card == 'A' || card == 'T' || card == 'J' || card == 'Q' || card == 'K') {
        return true;
    } else {
        return false;
    }
}






int main (void)
{
    printf("%i\n", valid_card('2'));
}















