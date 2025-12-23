#include <stdio.h>

int main(void){
    // SHOPPING MALL


    // VARIABLES
    char item[50] = "";
    char currency = '$';
    
    float price = 0.0f;
    float total = 0.0f;

    int amount = 0;

    // INPUT

    printf("What is the item you would like to buy?: ");
    fgets(item, sizeof(item), stdin);

    printf("How much is this item?: ");
    scanf("%f", &price);

    printf("How many would you like to purchase?: ");
    scanf("%d", &amount);

    // CALCULATE

    total = price * amount;

    // OUTPUT

    printf("The total is: %c%.2f", currency, total);
}
