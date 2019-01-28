var readln = (typeof readline === 'function') ? (readline) : (function() {
   importPackage(java.io);
   importPackage(java.lang);
   var stdin = new BufferedReader(new InputStreamReader(System['in']));
   return function() {
     return String(stdin.readLine());  // Read line, 
    };                                    // force to JavaScript String
 }());
System.out.print("Enter the number you want to print reverse order:");
var Number1 = parseInt(readln())
Result = "";
Reverse = 0;
Reminder = 0;  
//print() 
Number2 = Number1
while (Number1 > 0){
     Reminder = (Number1 % 10);
     Result += '' + Reminder;
     Reverse = ((Reverse * 10) + Reminder);
     Number1 = parseInt(Number1 / 10)
}
print("The revesre order of the number " + Number2 + " is " + Result + ".");
