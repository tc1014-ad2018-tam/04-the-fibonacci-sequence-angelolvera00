/*This program was created for the purpose of asking the user for the amount of numbers in the fibonacci sequence that they want, when they give the number, the computer does the operation and gives back the amount of numbers the user wanted.
 *
 * Author: Angel Daniel Olvera Perales
 * Date: September 3
 * email: angelolvera00@gmail.com
 */
#include <stdio.h>

int main() {
    // Declares the variables that the computer will be using
    int i, n, t1=0, t2=1, nextTerm;

    //Asks the user for the amount of numbers they want
    printf("How many numbers do you want?");
    scanf("%d", &n);

    //Gives the user all the numbers from the Fibonacci Sequence that they wanted
    printf("Fibonacci Sequence is: ");

    //The operation for getting the numbers from the Fibonacci sequence
    for (i=1; i<=n; ++i)
    {
        printf("%d ", t1);
        nextTerm= t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return 0;
}