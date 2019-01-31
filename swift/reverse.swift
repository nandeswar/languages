print("Enter the number do you want to print reverse:", terminator: "")
var Number = Int(readLine()!)!
var Reminder = 0
var Reverse = 0
print("The reverse of the number \(Number) is ", terminator: " ")
while (Number != 0){
      Reminder = Number % 10
      print(Reminder, terminator: "")
      Reverse = (Reverse * 10) + Reminder
      Number = Number / 10
}
print(".")