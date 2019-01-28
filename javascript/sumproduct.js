var readln = (typeof readline === 'function') ? (readline) : (function() {
   importPackage(java.io);
   importPackage(java.lang);
   var stdin = new BufferedReader(new InputStreamReader(System['in']));
   return function() {
     return String(stdin.readLine());  // Read line, 
    };                                    // force to JavaScript String
 }());
   System.out.print("Enter the sum and product of two numbers\nEnter the sum:")
    var Sum = parseInt(readln())
    System.out.print("Enter the Product:")
    var Product = parseInt(readln())
    Count = 0;
    Counter = 2;
    while(Count != 1){
        if(Product % Counter == 0){
           NumberOne = Product / Counter;
           if(NumberOne <= Sum){
               NumberTwo = Sum - NumberOne;
               if(Product == NumberOne * NumberTwo){
                  Count = 1;
               }
           }
        }
        Counter += 1;
     }
 if(Count == 1){
 print("The sum "+Sum+" and product "+Product+" of the numbers are "+NumberOne+" and "+ NumberTwo+".");
 }