

# Copyright (c) 2025 Joseph Chierichella | All rights reserved


def addition():
    add1 = int(input("Enter the first number : "))
    add2 = int(input("Enter the second number : "))
    add = add1 + add2
    print(f"{add1} + {add2} = {add}")

def subtraction():
    minus1 = int(input("Enter the first number : "))
    minus2 = int(input("Enter the second number : "))
    minus = minus1 - minus2
    print(f"{minus1} - {minus2} = {minus}")

def multiplication():
    times1 = int(input("Enter the first number : "))
    times2 = int(input("Enter the second number : "))
    times = times1 * times2
    print(f"{times1} x {times2} = {times}")

def division():
    div1 = int(input("Enter the first number : "))
    div2 = int(input("Enter the second number : "))
    div = div1 / div2
    print(f"{div1} / {div2} = {div}")

choice = None

while choice != 5:
    print("    CALCULATOR")
    print("____________________")
    print(" 1) Addition")
    print(" 2) Subtraction")
    print(" 3) Multiplication")
    print(" 4) Division")
    print(" 5) Exit")
    choice = int(input("Enter : "))
    if choice == 1:
        addition()
    elif choice == 2:
        subtraction()
    elif choice == 3:
        multiplication()
    elif choice == 4:
        division()
    elif choice == 5:
        break
    else:
        print("ERROR | NOT A OPTION")
