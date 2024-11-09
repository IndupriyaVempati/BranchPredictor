# BranchPredictor

This program predicts the engineering branch in which a student can get admitted to VNR College based on their rank, caste, gender, and special quotas (such as NCC or sports). The program takes user input for these factors and writes the eligibility results to an output file.

Features

Predicts the eligible engineering branch for students based on their rank and category.
Takes into account gender, caste, and special quota (such as NCC or sports).
Generates an output file (output.txt) with the eligibility results.

Categories considered:
OC (Open Category)
OBC (Other Backward Classes)
SC (Scheduled Caste)
ST (Scheduled Tribe)
Others (for NCC or sports quota)

How It Works
The program prompts the user to enter their rank, gender, caste, and whether they belong to the NCC or sports quota.
Based on the inputs, the program determines the eligibility for different branches at VNR College:
CSE (Computer Science Engineering)
ECE (Electronics and Communication Engineering)
EEE (Electrical and Electronics Engineering)
Mechanical Engineering
Civil Engineering
The program writes the eligibility result to an output file (output.txt).

Prerequisites
C compiler (e.g., GCC) to compile the C code.
A text editor to open the output.txt file to check the eligibility result.

How to Run the Program
Download the Code: Download the C file (branch_predictor.c).
Compile the Code:
gcc branch_predictor.c -o branch_predictor
Run the Program:
./branch_predictor
The program will prompt you to enter your rank, gender, caste, and whether you belong to the NCC or sports quota.
View the Results: After entering the details, the program will generate an output.txt file with your eligibility results.
