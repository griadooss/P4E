# Assignment 3.3 by griadooss
#
# 3.3 Write a program to prompt the user for a score using raw_input. Print out a letter grade based on the following table:
# Score Grade
# >= 0.9 A
# >= 0.8 B
# >= 0.7 C
# >= 0.6 D
# < 0.6 F
# If the user enters a value out of range, print a suitable error message and exit. For the test, enter a score of 0.85.


#Declare error flag
iInputErr = 0

#Get user's score
sScore = raw_input("Enter a score between 0.0 and 1.0: ")
try:
    fScore = float(sScore)
except:
    iInputErr = -1

#Check for valid inputs
#If input error ask to re-run the program
if iInputErr == -1: 
    print("Please run the program again ensuring that you enter ONLY a valid number!")
else:
    if(0.0 <= fScore <= 1.0):
        if(0.9 <= fScore <= 1.0):
            print("Congrats!! .. you scored an 'A'")
        elif(0.8 <= fScore < 0.9):
            #print("Well Done!! .. a Distinction! ... you scored an 'B'")
            print("B")
        elif(0.7 <= fScore < 0.8):
            print("Creditable work!! .. you scored an 'C'")
        elif(0.6 <= fScore < 0.7):
            print("I think you can do better than this!! .. you scored an 'D'")
        elif(0.0 <= fScore < 0.6):
            print("Unfortunately .. you did not pass the exam .. you scored an 'F'")
    else:
        print("Please run the program again ensuring that you enter a valid score value between 0.0 and 1.0!")