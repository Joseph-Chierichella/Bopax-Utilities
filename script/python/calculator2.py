# Copyright (c) 2025 Joseph Chierichella | All rights reserved

def operation1(num1):
    add1 = float(input("     |"))
    add2 = add1 + num1
    print("     |----")
    print(f"     |{add2}")
    return 0

def operation2(num1):
    sub1 = float(input("     |"))
    sub2 = num1 - sub1
    print("     |----")
    print(f"     |{sub2}")
    return 0

def operation3(num1):
    tim1 = float(input("     |"))
    tim2 = num1 * tim1
    print("     |----")
    print(f"     |{tim2}")
    return 0

def operation4(num1):
    div1 = float(input("     |"))
    if div1 != 0:
        div2 = num1 / div1
        print("     |----")
        print(f"     |{div2}")
    else:
        print("     |----")
        print("     |Error: Division by zero.")
    return 0

def main():
    print("use the '!' operation to quit program")
    while True:
        print("________")
        try:
            num1 = float(input("     |"))
        except ValueError:
            print("     |Invalid number.")
            continue

        sighn = input("    !|")
        if sighn == "!":
            break
        elif sighn == "+":
            operation1(num1)
        elif sighn == "-":
            operation2(num1)
        elif sighn.lower() == "x":
            operation3(num1)
        elif sighn == "/":
            operation4(num1)
        else:
            print("     |Unknown operation.")

if __name__ == "__main__":
    main()
