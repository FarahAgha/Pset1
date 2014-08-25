# include <stdio.h>
# include <cs50.h>
/*
 * The program recreates half-pyramid using hashes for blocks 
 */
int main(){

    int userInput;
    
    do
    {
        //first prompt the user for the half-pyramid’s height.
        printf("Height: ");
        userInput = GetInt();
    
    } while (userInput > 23 || userInput < 0); //re-prompt for a non-negative integer or greater than 23.
    
    // code for left-hand edge aligned half-pyramid
    for (int i = 1; i <= userInput; i++)
    {
        
        //generates blank spaces
        for (int j = userInput; j > i; j--)
        {
            printf(" ");
        }
        
        //generates #'s 
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        
        //added # and new line character
        printf("#\n"); 
    }
}
