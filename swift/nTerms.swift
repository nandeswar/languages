print("How many terms print in the series 1, 4, 27...:", terminator: "")
var Number = Int(readLine()!)!
var Term = 1
var Counter = 1
var TermCount = 1
print("The first \(Number) terms in the series 1, 4, 27... are ", terminator: " ") 
while(TermCount <= Number){
        Term = 1
        Counter = 1
        while(Counter <= TermCount){
             Term = Term * TermCount
             Counter += 1
        }
        print(Term, terminator: " ")
        TermCount += 1
}
print(".")