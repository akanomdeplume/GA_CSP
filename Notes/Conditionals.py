#GA 7th Condition Note

#homework_done = input("is your homework done?:").strip().capitalize

#if homework_done == "Yes"
#    print("Yes you can go")
#else:
#    print("then go do your homework!")

#    grade = 100
#    if grade > 89:
#        print(GOOD JOB! IM SO PROUD OF YOU!!)
#else:
#    print(I HATE YOU YOURE A FAILURE!)

grade = 100

if grade >89:
    print(f"You have {grade}% that is an A!")
if grade >79:
    print(f"you have {grade} that is a B!")
else:
   print(f"you have {grade}% thats an F!!!")

name= input("what is your name:")

if name=="ms laRose":
    print("you are the teacher")
elif name=="tia" or name == "ashley":
    print("you are the TA")
else:
    print(f"hello {name},you are a student!")

