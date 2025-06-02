# Copyright (c) 2025 Joseph Chierichella | All rights reserved

notes = ""

def nNotes():
    global notes
    print("Enter Notes\n")
    input2 = input(": ")
    if notes:
        notes += "\n"
    notes += input2

def vNotes():
    global notes
    print("     Notes")
    print("---------------")
    print(notes)    

i = 0
while i == 0:
    print("      Notes")
    print("---------------")
    print(" 1 ) New notes")
    print(" 2 ) View notes")
    print(" 3 ) Quit program")
    input1 = int(input("!: "))
    if input1 == 3:
        print("Quiting program!")
        i = 1
        break
    elif input1 == 1:
        nNotes()
    elif input1 == 2:
        vNotes()
    else:
        print("SYNTAX ERROR")
