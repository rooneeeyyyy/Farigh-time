#include<stdio.h> 
int main(){
    int choice;
    char gmail[50], password[18], username[90];
    float Balance = 5000.0;
    float amount;
    

    printf("Press 1 to create a new account\n");
    printf("Press 2 to login into an existing account\n");
    scanf("%d", &choice);
    switch (choice)
    {
        case (1):
        {
            printf("Enter your gmail: \n");
            scanf(" %s", gmail );
            printf("Create a username: \n");
            scanf(" %s", username);
            printf("Create a password: \n");
            scanf(" %s", password);
            printf("Password Confirmed\n");

        }
            break;
        case (2):
        {
            printf("Enter the password:\n");
            scanf(" %s", password);
            break;
        }
    default:
            printf("Invalid option\n");}


    printf("Press 1 to withdraw amount: \n");
    printf("Press 2 to deposit amount: \n");
    scanf("%d",&choice);

    switch (choice)
    {
        case (1):
        {
    
            printf("Enter the amount you want to withdraw:\n");
            scanf(" %f", &amount);
            if (amount > 5000)
                printf("Insufficient amount\n");
            else{
                Balance = Balance - amount;
            }
            break;

        }
        case(2):
        {
            printf("Enter the amount you want to deposit: \n");
            scanf(" %f", &amount);
            Balance = Balance + amount;
            break;
        }
       
        default:
        printf("Invalid option\n");}
    printf("=====Your Bank Balance=====\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("===========================\n");
    printf("===========================\n");
    printf("===========================\n");
    printf("===========================\n");
    printf("====Bank Balance: %.2f====\n", Balance);
    printf("===========================\n");
    printf("===========================\n");
    
    return 0;
}