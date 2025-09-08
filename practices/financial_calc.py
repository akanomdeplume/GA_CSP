#gyan alandia period 7 9/7/2
# Personal Finance Calculator
income = float(input("What is your monthly income: "))

rent = float(input("What is your monthly rent/mortgage: "))
utilities = float(input("What is your monthly utilities: "))
groceries = float(input("What is your monthly groceries: "))
transportation = float(input("What is your monthly transportation: "))

# percentages
rent_pct = (rent / income) * 100
utilities_pct = (utilities / income) * 100
groceries_pct = (groceries / income) * 100
transport_pct = (transportation / income) * 100

# savings (10%)
savings = income * 0.10
savings_pct = 10

# leftover
total_expenses = rent + utilities + groceries + transportation + savings
leftover = income - total_expenses

# print results
print("Your rent is $", rent, "and that is", round(rent_pct), "% of your income.")
print("Your utilities are $", utilities, "and that is", round(utilities_pct), "% of your income.")
print("Your groceries are $", groceries, "and that is", round(groceries_pct), "% of your income.")
print("Your transportation is $", transportation, "and that is", round(transport_pct), "% of your income.")

print("\nYou should save $", savings, "a month, that is", savings_pct, "% of your income.")
print("You have $", leftover, "of spending money each month!")