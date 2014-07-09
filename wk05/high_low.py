# Assignment 5.2 by griadooss

#5.2 Write a program that repeatedly prompts a user for integer numbers until the user enters 'done'. 
#    Once 'done' is entered, print out the largest and smallest of the numbers. 
#    If the user enters anything other than a valid number catch it with a try/except 
#    and put out an appropriate message and ignore the number. 
#    Enter the numbers from the book for problem 5.1 and Match the desired output as shown.

# Initialize variables
iMin = None
iMax = 0
inp = str("mt") #User input

while inp != "done":
    inp = raw_input("Enter an integer, or "'"done"'" to finish: ")
    try:
        i = 0 #just a placeholder to test for valid input
        i = int(inp) #test for valid integer input
        #If the first time through this loop then must initialize smallest number (iMin) 
        if iMin == None:
            iMin = inp
        elif inp < iMin: 
            iMin = inp
        # iMax is in its own if statement in case only one number is entered, so that it will be both min and max
        if inp > iMax:
            iMax = inp
    except:
        if inp != "done": #Which will occur if invalid data is entered (other than the 'reserved word' "done"!
#            print "Try again ... whole numbers only please!"
            print "Invalid input!"
        continue

if iMin is not None: 
    print "Maximum is : ", iMax
    print "Minimum is : ", iMin
#    print "All done now!"  
else:
    print "You aborted before entering any numbers!"    
