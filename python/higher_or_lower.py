#  Copyright (c) 2025 Joseph Chierichella | All rights reserved

import random

i = random.randint(1, 100)

guess = int(input("Enter your guess: "))

while guess != i:
    if guess == i:
        print("You got it!")
        break
    elif guess > i:
        print("Too high!")
    elif guess < i:
        print("Too low!")

    guess = int(input("Enter your guess: "))  
