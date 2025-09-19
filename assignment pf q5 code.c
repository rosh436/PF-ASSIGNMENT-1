#include<stdio.h>
int main(){
    int card1, card2, card3, card4, card5;
    printf("Enter 5 cards (values between 1 and 13): ");
    scanf("%d %d %d %d %d", &card1, &card2, &card3, &card4, &card5);
    if ((card1 == card2 && card1 == card3 && card4 == card5) ||   
        (card1 == card2 && card1 == card4 && card3 == card5) ||   
        (card1 == card2 && card1 == card5 && card3 == card4) ||
        (card1 == card3 && card1 == card4 && card2 == card5) ||
        (card1 == card3 && card1 == card5 && card2 == card4) ||
        (card1 == card4 && card1 == card5 && card2 == card3) ||
        (card2 == card3 && card2 == card4 && card1 == card5) ||
        (card2 == card3 && card2 == card5 && card1 == card4) ||
        (card2 == card4 && card2 == card5 && card1 == card3) ||
        (card3 == card4 && card3 == card5 && card1 == card2)) 
        
        printf("This hand is a full house.");
    else {
        printf("This hand is not a Full House.");
    }

    return 0;
}


