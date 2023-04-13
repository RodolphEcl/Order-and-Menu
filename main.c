
#include <stdio.h>
#include <stdlib.h>


// Display the menu function and assign the burger choosen to a number
int menu(){
    int choice = 0;
    while (choice < 1 || choice > 4){
        printf("Menu : \n");
        printf("1- Double cheese burger\n");
        printf("2- Triple cheese burger\n");
        printf("3- Steakhouse cheese burger\n");
        printf("4- Whooper cheese burger\n");
        printf("Your choice? ...");
        scanf("%d", &choice);
    }
    return choice;

}

// Choose a drink and assign it to a number
int chooseDrink(){
    int drinkChoice = 0;
    do{
        printf("Choose your drink: \n\n");
        printf("0- Coca Cola \n");
        printf("1- Sprite \n");
        printf("2- Ice Tea Peach \n");
        scanf("%d", &drinkChoice);
    }
    while(drinkChoice > 2 || drinkChoice < 0);

    return drinkChoice;
}


// Function that sums everything up and ask them if they want fries or drink with the burger
int addFriesDrink(char burger[50]){
    int answer = 0;
    do{
        printf("Do you want to add fries and drink to the %s? \n ", burger);
        printf("1- yes \n ");
        printf("0- No just the Burger \n ");
        scanf("%d", &answer);
    }
    while(answer < 0 || answer > 1);

    if(answer == 0){
        printf("Okay So your total order is the %s without additionnals \n", burger);
        printf("The total price will be : 5 USDT \n");
    }
    else{
        //Call the fucntion choose Drink
        int drink = chooseDrink();
        if(drink == 0){
            printf("\nOkay so your total order will be the %s with fries and Coca Cola \n ", burger);
            printf("The total price will be 8.5 USDT");
        }
        else if (drink == 1){
            printf("Okay so your total order will be the %s with fries and Sprite \n", burger);
            printf("The total price will be 8.6 USDT");

        }
        else if (drink == 2){
            printf("Okay so your total order will be the %s with fries and Ice Tea \n", burger);
            printf("The total price will be 8.7 USDT");
        }
    }
    return answer;
}

int main(){

    int loop = 1;

    while(loop){
        int res = menu();
        if(res == 1){
            addFriesDrink("DoubleCheeseburger");
        }
        else if (res == 2){
            addFriesDrink("TripleCheeseburger");
        }
        else if (res == 3){
            addFriesDrink("SteakhouseCheeseburger");
        }
        else if (res == 4){
            addFriesDrink("WhooperCheeseburger");
        }

        printf("\n\n Would you like to add another order?\n");
        printf("1- Yes\n 0- No \n");
        scanf("%d", &loop);

    }

    return 0;
}
