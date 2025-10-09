#GA 7th Old Enough

age = int(input("How old are you: "))


if age >= 18:
    print("you are old enough to vote!")
elif age >= 16:
    print("you are old enough to drive!")
elif age >= 15:
    print("you are old enough to get a learners permit!")
elif age >= 5:
    print("you are old enough to go to school")
else:
    print("you are the youngest person ever!")