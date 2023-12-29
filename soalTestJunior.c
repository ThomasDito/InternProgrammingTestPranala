#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int menuFunct (int menu);
float triangleFunct (float edge, float height);
int oddFunct (int max, int i);
int primeFunct (int  max, int prime, int i, int j);


int main()
{
    int menu, max, prime, i, j;
    float edge, height;
    char choice;
    choice == 'y' || choice == 'Y';

    printf("\n===========================================================");
    printf("\nJalankan Program? \n1. yes\t: type (y) \n2. no\t: type (n)");
    printf("\nInsert your choice: ");
    scanf("%s", &choice);

    while (choice == 'y' || choice == 'Y')
    {
        menuFunct (menu);
        scanf("%d", &menu);

        if (menu == 1)
        {
            triangleFunct(edge, height);
        }else
        {
            if (menu == 2)
            {
                oddFunct(max, i);
            }else
            {

            }if (menu == 3)
            {
                primeFunct(max, prime, i, j);
            }else
            {
                if (menu == 4)
                {
                    choice = 'n';
                }else
                {
                    printf("\n===========================================================");
                    printf("\nInput Error!");
                }
            }
        }
        if (choice != 'N')
        {
            printf("\n===========================================================");
            printf ("\n\nDo you want to run this calculating machine once again?");
            printf ("\n 1. YES\t: type (Y) \n 2. NO\t: type (N)");
            printf ("\n Please insert your choice: ");
            scanf ("%s", &choice);
        }
    }

    printf("\n===========================================================");
    printf ("\n\nThank you");
    printf ("\nHAVE A NICE DAY:)");
    printf("\n===========================================================");
    printf ("\n\n");

    printf ("\nPlease press any key...");
    
    return 0;
}


int menuFunct(int menu){
    printf("\n===========================================================");
    printf("\nmenu:\n1. Segitiga\n2. Bilangan Ganjil\n3. Bilangan Prima\n4. Keluar");
    printf("\nChoose The Menu: ");
}

float triangleFunct(float edge, float height){
    float triangle;
    printf("\n===========================================================");
    printf("\nInsert the following parameter: ");
    printf("\nEdge: ");
    scanf("%f", &edge);
    printf("\nHeight: ");
    scanf("%f", &height);

    if (edge < 0)
    {
        printf("\nInput Error!");
    }else if (height < 0)
    {
        printf("\nInput Error!");
    }else
    {
        triangle = edge * height / 2;
        printf("\n Luas dari segitiga dengan:\n Alas\t: %.2f \n Tinggi\t: %.2f \n adalah\t\t: %.2f", edge, height, triangle);
    }
    
    return triangle;
}

int oddFunct(int max, int i){
    printf("\n===========================================================");
    printf("\nMasukan Nilai Max Ganjil: ");
    scanf("%d", &max);

    printf("\nGenerate Bilangan Ganjil: ");
    for (i = 1; i < max; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d", i);
        }
        
    }    
}

int primeFunct(int max, int prime, int i, int j){
    printf("\n===========================================================");
    printf("\nMasukan Nilai Max Prima: ");
    scanf("%d", &max);

    printf("\nGenerate Bilangan Ganjil: ");
    for(i = 2; i < max; i++){
        prime == true;
        for (j = 2; j < i; j++)
        {
            prime == false;
            break;
        }
        if (prime)
        {
            printf("%d", i);
        }
    }
}