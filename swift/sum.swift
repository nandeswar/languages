print("How many natural numbers do to want to add:", terminator: "")
var Number = Int(readLine()!)!
var Counter = 1
var Sum = 0
print("The sum of the first \(Number) natural numbers is", terminator: " ")
while (Number > 0){
      Sum += Number
      Number -= 1
}
print("\(Sum).")