#Recitation 10 Example

#print a string
#raw_input and print 
name = raw_input("Enter your name")
print "Hello %s\n" % name

#printing even numbers using a while loop
#input, while loop and if 
number = input("Enter a number between 0 and 25");
sumOfNumbers = 0
i=0
while i < number:
	if i % 2 == 0:
		sumOfNumbers = sumOfNumbers + i
	i = i + 1
print sumOfNumbers

#printing sum of odd numbers using a for loop
#input, for loop and if
num = input("Enter a number between 0 and 25")
total = 0
for i in range(0, num):
	if(num % 2 == 1):
		total += num
print total
