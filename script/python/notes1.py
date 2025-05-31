# Copyright (c) 2025 Joseph Chierichella | All rights reserved

import random

class notez:
    def __init__(self):
        self.all = []

    def add(self, txt):
        self.all.append(txt)

    def show(self):
        return self.all

z = notez()

def nNotes():
    n = input("note: ")
    z.add(n)
    print("saved\n")

def vNotes():
    lst = z.show()
    if not lst:
        print("No notes to show :(\n")
    else:
        for i, n in enumerate(lst, 1):
            print(f"{i}) {n}")
        print()

def main():
    while True:
        print("     Notes")
        print("---------------")
        print("1 ) New note")
        print("2 ) View notes")
        print("3 ) Exit program")
        try:
            i = int(input("!: "))
            if i == 3:
                print("Exiting program!")
                break
            elif i == 1:
                nNotes()
            elif i == 2:
                vNotes()
            else:
                print("Invalid input!\n")
        except:
            print("Integrs only!\n")

main()
