#GA 7th function notes

def welcome():
    name = input("What is your name? ")
    print(f"hello, {name}!")


print("this is not in my function")
welcome()
welcome()

def add(number, number_two):
    number += number_two
    print(number)
num_one = 12
num_two = 67

#add(80, 8)
#add(3, 6)
#add(9, 20)
#add(11, 71)
#add(num_one, num_two)





import random

def roll(mod):
    return random.randint(2, 18)
print("here are your character stats")
print(f"strength: {roll(0)}\nDex: {roll(1)}\nInt: {roll(1)}\nCharisma: {roll(0)}")