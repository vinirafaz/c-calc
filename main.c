#include <stdio.h>

int main() {

    int operation;
    float number_one, number_two, result;

    printf("*************CALCULATOR*************\n");
    printf("\t\nChoose your option\n");
    printf("0. Leave\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    do {

        printf("Choose your operation: ");
        fflush(stdin);
        scanf("%d", &operation);

        if (operation == 0){
            break;
        } else {
            if (operation >= 1 && operation <= 4) {
                printf("Type one number: ");
                fflush(stdin);
                scanf("%f", &number_one);

                printf("Type the other number: ");
                fflush(stdin);
                scanf("%f", &number_two);

                switch (operation) {
                    case 1:
                        result = number_one + number_two;
                        printf("The result of your addition is: %.2f\n\n", result);
                        break;
                    case 2:
                        result = number_one - number_two;
                        printf("The result of your subtraction is: %.2f\n\n", result);
                        break;
                    case 3:
                        result = number_one * number_two;
                        printf("The result of your multiplication is: %.2f\n\n", result);
                        break;
                    case 4:
                        result = number_one / number_two;
                        printf("The result of your division is: %.2f\n\n", result);
                        break;
                }
            } else {
                printf("Invalid Option! Try again choosing one of the options below:");
                printf("\t\nChoose your option\n");
                printf("0. Leave\n");
                printf("1. Addition\n");
                printf("2. Subtraction\n");
                printf("3. Multiplication\n");
                printf("4. Division\n");

            }
        }
    }while(operation != 0);
}