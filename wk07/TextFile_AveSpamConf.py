# 7.2 Write a program that prompts for a file name, then opens that file and reads through the file, 
# looking for lines of the form:
#
# X-DSPAM-Confidence:    0.8475
#
# Count these lines and extract the floating point values from each of the lines and compute the average of those values 
# and produce an output as shown viz: "Average spam confidence: 0.750718518519".
#
# You can download the sample data at http://www.pythonlearn.com/code/mbox-short.txt 
#
# when you are testing below enter mbox-short.txt as the file name.
# Use the file name mbox-short.txt as the file name
#
#
count = 0
sumConf = 0
fConf = 0.0

fname = raw_input("Enter file name: ")
if len(fname) == 0:
    fname = "mbox-short.txt"
fh = open(fname)
for line in fh:
    if not line.startswith("X-DSPAM-Confidence:") : continue
    iStart = line.find(" ",0)
    iEnd = len(line)
    sSlice = line[iStart:iEnd]
    fConf =  float(sSlice.strip())
    count = count + 1
    sumConf = sumConf + fConf
print "Average spam confidence: " + str(sumConf/count)
