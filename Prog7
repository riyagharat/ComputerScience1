
/* Riya Gharat          04/07/2015
   N00901846
   8.29 - Read the size of the array from the keyboard as well    as the elements of the array. Write a function that reverses the elements of an array so that the last element becomes the first, the second from the last becomes the second, and so forth.    The function is to reverse the elements in place- that is, without using another array.
*/
#include <stdio.h>
#define MAXSIZE 50

void Array(int arr[], int n);
void Array(int arr[], int n){

        for(int i = 0; i < n; i++){
                printf("Enter next number: ");
                scanf("%d", &arr[i]);
        }
}
int main(){ // main

        //Local Variables
        int temp, num, value;

        printf("Please enter an integer for the number of numbers: ");
        scanf("%d", &num);

        // Creating the array

        int array[MAXSIZE];
        Array(array, num);

        // Printing the array
        printf("\nOriginal set:\n");
        for(int i = 0; i < num; i++){
                printf("The number is: %d\n", array[i]);
        }

        for(int i = 0; i < (num/2); i++){
                temp = array [i];
                array[i] = array[j];
                array[j] = temp;
                j--;
        }

        printf("\nNew Set: \n");
        for(int i = 0; i < num; i++){
                printf("The number is: %d\n", array[i]);
        }

        return 0;

} // end main
