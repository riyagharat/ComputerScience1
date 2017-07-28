/* Riya Gharat                  02/10/2015
   N00901846
   4.34
   prog 3.c reads three integers as input and then prints them in the order read and reversed. It uses four functions to to accomplish this.
*/
#include<stdio.h>

//Function Declarations
void readInput();
void printOrder(int x, int y, int z);
void printReverse(int x, int y, int z);

// main
int main(void){
        // Calling Read function
        readInput();

        return 0;
}//end main

// Read the Data
void readInput(){

        // Local Variables
        int a, b, c;

        // Statements
        printf("Enter 3 values with a space in between each. \n");
        scanf("%d %d %d", &a, &b, &c);

        //Calling Functions
        printOrder(a, b, c);
        printReverse(a, b, c);

}//end readInput

// Print in order read
void printOrder(int x, int y, int z){
        printf("\n Printing in the order read: \n");

        printf("%d, %d, %d \n", x, y, z);
}//end printOrder

// Print reverse
void printReverse(int x, int y, int z){
        printf("\n Printing the order reversed: \n");

        printf("%d, %d, %d \n", z, y, x);

}//end printReverse
