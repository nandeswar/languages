Number = int(input("How many even numbers do you want to print:"))
Counter = 0
Count = 0
print("The first %d even numbers are" %Number)
while Counter < Number:
    if (Count % 2) == 0:
        print(" %d" %Count, end = ' ')
        Counter += 1
    Count += 1
    
else: 
    print(".")