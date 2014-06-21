# Assignment 3.1 by griadooss
#
# 3.1 Write a program to prompt the user for hours and rate per hour using raw_input to compute gross pay. 
# Award time-and-a-half for the hourly rate for all hours worked above 40 hours. 
# Use 45 hours and a rate of 10.50 per hour to test the program (the pay should be 498.75). 
# You should use raw_input to read a string and float() to convert the string to a number. 
# Do not worry about error checking the user input - assume the user types numbers properly.


#Declare error flag
iInputErr = 0

#Get hours worked
sHrs = raw_input("Enter Hours: ")
try:
    fHrs = float(sHrs)
except:
    iInputErr = -1

#Get pay rate
sRate = raw_input("Hourly Rate: ")
try:
    fRate = float(sRate)
except:
    iInputErr = -1
    
#Check for valid inputs
#If input error ask to re-run the program .. else print the amount of pay
if iInputErr == -1: 
    print("Please run the program again ensuring that you enter ONLY valid numbers!")
else:
    if(int(sHrs) > 40.0):
        print((40 * fRate) + ((fHrs - 40) * (fRate * 1.5)))
    else:
        print(fHrs * fRate)