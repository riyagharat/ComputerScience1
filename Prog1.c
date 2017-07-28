/* Riya Gharat                          01/22/2015
   N00901846
        2.37
   prog1.c prompts the user to enter a quantity and a cost.
*/

# include <stdio.h>

int main (void){
        // Variables
        int quantity;
        float unitPrice;

        // Statements
        printf("Enter a quantity first and then enter a unit price. In the format xx xxx.xx\n");
        scanf("%d %f", &quantity, &unitPrice);

        printf("\nThe Quantity is: %10d", quantity);
        printf("\nThe Unit Price is: $%10.2f\n", unitPrice);

        return 0;
} // end main
