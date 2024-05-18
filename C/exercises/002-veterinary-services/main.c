#include<stdio.h>

void showMenu();
float calculatePayment( int service );

// Utils
int getInt( char* message );

int main(){
    int service = -1;
    float payment = 0;

    // Display welcome message and show menu
    printf("\nChoose the type of service\n");
    printf("you want for your pet: \n\n");
    showMenu();
    service = getInt("> ");

    // Calculate payment and show result
    payment = calculatePayment( service );
    printf("User must pay $%.2f\n", payment);    

    return 0;
}

void showMenu(){
    printf("1. Bath ($3,500)\n");
    printf("2. Hair-cut ($6,000)\n");
    printf("3. Vaccination ($12,500)\n");
    printf("4. Bath & Hair-cut\n");
    printf("5. All 3 services\n");
    printf("6. Bath & Vaccination\n");
    printf("7. Hair-cut & Vaccination\n");
}

float calculatePayment( int service ){
    float prices[3] = {3500, 6000, 12500};
    float payment = 0;

    switch( service ){
        case 1:
            payment = prices[0];
            break;
        case 2:
            payment = prices[1];
            break;
        case 3:
            payment = prices[2];
            break;
        case 4:
            payment = prices[0] + prices[1];
            break;
        case 5:
            payment = prices[0] + prices[1] + prices[2];
            break;
        case 6:
            payment = prices[0] + prices[2];
            break;
        case 7:
            payment = prices[1] + prices[2];
            break;
        default:
            break;
    }

    return payment;
}

int getInt( char* message ){
    int value = 0;
    int status = 0;

    printf("%s", message);
    status = scanf("%i", &value);
    while( getchar() != '\n' );

    if( status != 1 ){
        printf("\nThat's not a valid input!\n");
        printf("Try again, with a valid one!\n\n");
        showMenu();
        return getInt( message );
    }

    return value;
}