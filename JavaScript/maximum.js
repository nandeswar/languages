 var readln = (typeof readline === 'function') ? (readline) : (function() {
     importPackage(java.io);
     importPackage(java.lang);
     var stdin = new BufferedReader(new InputStreamReader(System['in']));

     return function() {
         return String(stdin.readLine());  // Read line, 
     };                                    // force to JavaScript String
 }());
 var Count = new Number(10);
 print("Enter any 10 numbers do want to print mmaximum number:");
var Element = parseInt(readln());
var ReadElement = "";
Count[0] = Element;
for(Counter = 1; Counter <= 10; Counter++)
{
  print("Enter next number:" );
  Element = parseInt(readln());
  Count[Counter] = Element;
  ReadElement += " " + Count[Counter];
}
var Maximum = Count[0];
for(Counter = 0; Counter <= Count; Counter++)
{
  if( Count[Counter] > Maximum)
  {
    Maximum = Count[Counter];
  }
}
print("The maximum number of 10 numbers is " + Maximum + ".");
