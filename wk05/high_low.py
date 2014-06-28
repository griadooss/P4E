
#5.2 Write a program that repeatedly prompts a user for integer numbers until the user enters 'done'. 
#    Once 'done' is entered, print out the largest and smallest of the numbers. 
#    If the user enters anything other than a valid number catch it with a try/except 
#    and put out an appropriate message and ignore the number. 
#    Enter the numbers from the book for problem 5.1 and Match the desired output as shown.


iSml = None
iLrg = 0
UserInput = 0
iErr=0

while UserInput != "done":
    UserInput = raw_input("Enter an integer (or "'"done"'" if finished):")
    try:
        i = 0 #just a placeholder to test for valid input
        i = int(UserInput) #test for valid integer input
        #If the first time through this loop initialize smallest number (iSml) 
        if iSml == None:
            iSml = UserInput
        elif UserInput < iSml: 
            iSml = UserInput
        if UserInput > iLrg:
            iLrg = UserInput
    except:
        iErr=-1
        break # This is for when user enters characters other than 'done' .. ie invalid input

if UserInput != "done":
    print "Try again ... whole numbers only please!"
elif iSml is not None: 
    print "The largest number you entered was : ", iLrg
    print "The lowest number you entered was : ", iSml
    print "All done now!"  
else:
    print "All done now!"    
