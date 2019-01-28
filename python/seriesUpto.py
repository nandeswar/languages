Number = int(input("Enter the number upto which you want to print the series 1,4,27,...:"))
print("The series upto %d is 1" %Number, end = '')
Product = 1
Counter = 1
while Product < Number:
      Counter += 1
      Product = Counter ** Counter
      if Product <= Number:
         print (", %d" %Product, end = '')
else:
     print(".")