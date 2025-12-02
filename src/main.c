#include <stdio.h>
#include "io.h"
 //Entry point for the whole program.
int main(void) {
    int choice = 0;
    printf("=================================================\n");
    printf("    DATA ANALYSIS & STATISTICS SYSTEM v1.0\n");
    printf("    NAME - NAMAN TOMAR\n SAP ID -590024327\nBATCH- 37\n");
    printf("=================================================\n\n");

    do {
        display_main_menu();
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) { while(getchar()!='\n'); choice = 0; }  // force default case
        switch(choice) {
            case 1: data_input_menu(); break;
            case 2: statistical_analysis_menu(); break;
            case 3: visualization_menu(); break;
            case 4: machine_learning_menu(); break;
            case 5: data_export_menu(); break;
            case 6:
                printf("\nThank you for using Data Analysis System!\nGoodbye!\n");
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
        if (choice != 6) { printf("\nPress Enter to continue..."); getchar(); getchar(); }// clears leftover newline
          } while (choice != 6);

    return 0;
}
