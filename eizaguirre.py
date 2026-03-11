#Esthepanie Izaguirre
#CSC 321
#lab 08

userinput = input("Enter your name: ")
print("Your name is ",userinput)

#guessing
num = 6
guess = int(input("Guess a number between 0 - 9: "))

if guess < num:
    print("Your guess is LOWER then my number")
    print("you lose!!!")
elif guess > num:
    print("Your guess is Higher then my number")
    print("you lose!!!")
else:
    print("Congratulations! You Win")

x = 0
z = guess
x = 5 + z
print("x = ", x)

#for loop
for i in range(5):
    print("Why can't your nose be 12 inches long? Because then it would be a foot!!!!!!")

#while loop
while(x >0):
    print("TACOS")
    x = x - 1
