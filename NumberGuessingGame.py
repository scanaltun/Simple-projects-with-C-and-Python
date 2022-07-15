import random
import time

print("************************\n")
print("Number Guessing Game!\n")
print("************************\n")
print("Please Guess a number between 1-50\n")
number= random.randint(1,50)
RemainingTrial=3
while True:
    guess = int(input("Your Guess: "))

    if guess == number:
        print(" ")
        time.sleep(1)
        print("Congrulations! Right Guess")
        break
    elif guess > number:
        print("The Guess Is Being Questioned ")
        time.sleep(1)
        RemainingTrial -= 1
        print("Please,enter a  smaller number")
        print("Remaining Guesswork: ", RemainingTrial)
    else:
        print("The Guess Is Being Questioned ")
        time.sleep(1)
        RemainingTrial -= 1
        print("Please,enter a bigger number")
        print("Remaining Guesswork: ", RemainingTrial)
    if RemainingTrial == 0:
        print("Game Over")
        print("Guess Of The Computer: ", number)
        break