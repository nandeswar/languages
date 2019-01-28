Numbers = []
print("Enter the ten numbers you want to print maximum,enter the first number:", end = '')
Number = int(input())
Numbers.append(Number)
for Counter in range(1, 11):
    Number = int(input("Enter the next number:"))
    Numbers.append(Number)
Numbers.sort()
print("The maximut m  number among ten numbers is:",Numbers[10])