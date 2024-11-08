#include <stdio.h>
#include <stdlib.h>

FILE *fp = NULL;

int main(int argc, char *argv[])
{
    // Function declarations for different categories
    void ocmale(int *);
    void ocfemale(int *);
    void obcmale(int *);
    void obcfemale(int *);
    void scmale(int *);
    void scfemale(int *);
    void stmale(int *);
    void stfemale(int *);
    void others(int *);

    int rank, *r;
    char gender;
    int caste;
    char sports;

    // Ask for the rank directly from the user
    printf("Enter your rank: ");
    scanf("%d", &rank);

    r = &rank;

    // Open file for writing
    fp = fopen("output.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1; // Return an error code indicating failure
    }

    // Welcome message and input prompts
    printf("WELCOME TO BRANCH PREDICTOR OF VNR COLLEGE\n");
    printf("***************************\n");
    printf("Enter 'm' for male and 'f' for female: ");
    scanf(" %c", &gender); // Added a space before %c to skip any previous newline character

    printf("Enter 1. OC 2. OBC 3. SC 4. ST: ");
    scanf("%d", &caste);

    printf("If you belong to NCC or sports quota, enter 'y'. Otherwise, enter 'n': ");
    fflush(stdin); // To flush the input buffer
    scanf(" %c", &sports);

    // Check if user is eligible based on caste and gender
    if (sports == 'y')
        others(&rank);
    else
    {
        if (caste == 1)
        {
            if (gender == 'm')
                ocmale(&rank);
            else
                ocfemale(&rank);
        }
        if (caste == 2)
        {
            if (gender == 'm')
                obcmale(&rank);
            else
                obcfemale(&rank);
        }

        if (caste == 3)
        {
            if (gender == 'm')
                scmale(&rank);
            else
                scfemale(&rank);
        }
        if (caste == 4)
        {
            if (gender == 'm')
                stmale(&rank);
            else
                stfemale(&rank);
        }
    }

    // Close the file after writing
    fclose(fp);
    return 0;
}

// Function for OC male category
void ocmale(int *r)
{
    if (*r > 0 && *r < 1500)
        fprintf(fp, "ELIGIBLE FOR CSE\n");
    else if (*r > 1500 && *r < 3000)
        fprintf(fp, "ELIGIBLE FOR ECE\n");
    else if (*r > 3000 && *r < 4500)
        fprintf(fp, "ELIGIBLE FOR EEE\n");
    else if (*r > 4500 && *r < 6000)
        fprintf(fp, "ELIGIBLE FOR MECHANICAL\n");
    else if (*r > 6000 && *r < 7500)
        fprintf(fp, "ELIGIBLE FOR CIVIL\n");
    else
        fprintf(fp, "SORRY YOU ARE NOT ELIGIBLE FOR VNR COLLEGE\n");
}

// Function for OC female category
void ocfemale(int *r)
{
    if (*r > 0 && *r < 2000)
        fprintf(fp, "ELIGIBLE FOR CSE\n");
    else if (*r > 2000 && *r < 4000)
        fprintf(fp, "ELIGIBLE FOR ECE\n");
    else if (*r > 4000 && *r < 6000)
        fprintf(fp, "ELIGIBLE FOR EEE\n");
    else if (*r > 6000 && *r < 8000)
        fprintf(fp, "ELIGIBLE FOR MECHANICAL\n");
    else if (*r > 8000 && *r < 9000)
        fprintf(fp, "ELIGIBLE FOR CIVIL\n");
    else
        fprintf(fp, "SORRY,YOU ARE NOT ELIGIBLE FOR VNR COLLEGE\n");
}

// Function for OBC male category
void obcmale(int *r)
{
    if (*r > 0 && *r < 3000)
        fprintf(fp, "ELIGIBLE FOR CSE\n");
    else if (*r > 3000 && *r < 6000)
        fprintf(fp, "ELIGIBLE FOR ECE\n");
    else if (*r > 6000 && *r < 9000)
        fprintf(fp, "ELIGIBLE FOR EEE\n");
    else if (*r > 9000 && *r < 12000)
        fprintf(fp, "ELIGIBLE FOR MECHANICAL\n");
    else if (*r > 12000 && *r < 15000)
        fprintf(fp, "ELIGIBLE FOR CIVIL\n");
    else
        fprintf(fp, "SORRY,YOU ARE NOT ELIGIBLE FOR VNR COLLEGE\n");
}

// Function for OBC female category
void obcfemale(int *r)
{
    if (*r > 0 && *r < 3500)
        fprintf(fp, "ELIGIBLE FOR CSE\n");
    else if (*r > 3500 && *r < 7000)
        fprintf(fp, "ELIGIBLE FOR ECE\n");
    else if (*r > 7000 && *r < 10500)
        fprintf(fp, "ELIGIBLE FOR EEE\n");
    else if (*r > 10500 && *r < 14000)
        fprintf(fp, "ELIGIBLE FOR MECHANICAL\n");
    else if (*r > 14000 && *r < 17500)
        fprintf(fp, "ELIGIBLE FOR CIVIL\n");
    else
        fprintf(fp, "SORRY,YOU ARE NOT ELIGIBLE FOR VNR COLLEGE\n");
}

// Function for SC male category
void scmale(int *r)
{
    if (*r > 0 && *r < 4000)
        fprintf(fp, "ELIGIBLE FOR CSE\n");
    else if (*r > 4000 && *r < 8000)
        fprintf(fp, "ELIGIBLE FOR ECE\n");
    else if (*r > 8000 && *r < 12000)
        fprintf(fp, "ELIGIBLE FOR EEE\n");
    else if (*r > 12000 && *r < 16000)
        fprintf(fp, "ELIGIBLE FOR MECHANICAL\n");
    else if (*r > 16000 && *r < 20000)
        fprintf(fp, "ELIGIBLE FOR CIVIL\n");
    else
        fprintf(fp, "SORRY,YOU ARE NOT ELIGIBLE FOR VNR COLLEGE\n");
}

// Function for SC female category
void scfemale(int *r)
{
    if (*r > 0 && *r < 5000)
        fprintf(fp, "ELIGIBLE FOR CSE\n");
    else if (*r > 5000 && *r < 10000)
        fprintf(fp, "ELIGIBLE FOR ECE\n");
    else if (*r > 10000 && *r < 15000)
        fprintf(fp, "ELIGIBLE FOR EEE\n");
    else if (*r > 15000 && *r < 20000)
        fprintf(fp, "ELIGIBLE FOR MECHANICAL\n");
    else if (*r > 20000 && *r < 25000)
        fprintf(fp, "ELIGIBLE FOR CIVIL\n");
    else
        fprintf(fp, "SORRY,YOU ARE NOT ELIGIBLE FOR VNR COLLEGE\n");
}

// Function for ST male category
void stmale(int *r)
{
    if (*r > 0 && *r < 5500)
        fprintf(fp, "ELIGIBLE FOR CSE\n");
    else if (*r > 5500 && *r < 11000)
        fprintf(fp, "ELIGIBLE FOR ECE\n");
    else if (*r > 11000 && *r < 16500)
        fprintf(fp, "ELIGIBLE FOR EEE\n");
    else if (*r > 16500 && *r < 22000)
        fprintf(fp, "ELIGIBLE FOR MECHANICAL\n");
    else if (*r > 22000 && *r < 27500)
        fprintf(fp, "ELIGIBLE FOR CIVIL\n");
    else
        fprintf(fp, "SORRY,YOU ARE NOT ELIGIBLE FOR VNR COLLEGE\n");
}

// Function for ST female category
void stfemale(int *r)
{
    if (*r > 0 && *r < 6000)
        fprintf(fp, "ELIGIBLE FOR CSE\n");
    else if (*r > 6000 && *r < 12000)
        fprintf(fp, "ELIGIBLE FOR ECE\n");
    else if (*r > 12000 && *r < 18000)
        fprintf(fp, "ELIGIBLE FOR EEE\n");
    else if (*r > 18000 && *r < 24000)
        fprintf(fp, "ELIGIBLE FOR MECHANICAL\n");
    else if (*r > 24000 && *r < 30000)
        fprintf(fp, "ELIGIBLE FOR CIVIL\n");
    else
        fprintf(fp, "SORRY,YOU ARE NOT ELIGIBLE FOR VNR COLLEGE\n");
}

// Function for NCC or sports quota
void others(int *r)
{
    if (*r > 0 && *r < 10000)
        fprintf(fp, "ELIGIBLE FOR CSE\n");
    else if (*r > 10000 && *r < 15000)
        fprintf(fp, "ELIGIBLE FOR ECE\n");
    else if (*r > 15000 && *r < 30000)
        fprintf(fp, "ELIGIBLE FOR EEE\n");
    else if (*r > 30000 && *r < 35000)
        fprintf(fp, "ELIGIBLE FOR MECHANICAL\n");
    else if (*r > 35000 && *r < 38000)
        fprintf(fp, "ELIGIBLE FOR CIVIL\n");
    else
        fprintf(fp, "SORRY,YOU ARE NOT ELIGIBLE FOR VNR COLLEGE\n");
}
