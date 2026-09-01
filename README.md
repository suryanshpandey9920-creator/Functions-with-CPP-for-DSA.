# Functions-with-CPP-for-DSA.
In this repo all codes are done with  the help of a user defined functions, basics problems are solved with functions for code reusability. <br> <br> <br>

Concept of FUNCTIONS that how parameters work, what are arguments ,  <br> <br> Parameters are the varibales inside the  ex: <br> <br>  int sum ( int a, int b ) {
return a + b ;
} <br>
 of a function. <br><br>

Where the arguments are the values of the parameters at the time of function calling  ex: <br> <br> 

int  main() {

    sum ( 10 , 20) 
return 0;
}
<br> <br>
here the 10, 20 are the arguments, the value of the arguments AND parameters can be changed, <br> <br>

At different stages and points we can change the value of parameters (changing the parameter means changing the variable value inside the function). ex: <br> <br> <br>

int sum (int a , int b) {
    a = a + 10;   // changing the parameter by 10
    b = b + 20;   // changing the parameter by 20

    return a+b;
}

<br> <br>

changing the argument means ex ; 
sum ( 2 , 4) ;
sum ( 2 , 10) ; // here we change the value.
<br> <br> 


<br> Default parameter in Function.
<br> int sum (int a , int b) {
    return a + b;
} <br> <br> 

At the time of Function calling in main function 
<br> sum ( 10 , 10) // here the value passed is 10, but the default parameter setup is done at the time of parameter decleration ex : <br> <br>

int sum (int a , int b =1) {  //here b = 1 is the default value of b. 
    return a + b;
}
<br> <br>

but the 1st parameter cannot set as the default, only the second parameter can have a default value. <br> <br> <br> <br>

Function Call in Memory,  <i> <u> Stack Memory  <br> 
The main  function ( )  aqquires the 1st block of memory or Stack Frame in any program. <br>
All the variables, cout statements takes place or get stored in that one main () { 1st Stack Fram}. <br><br>
The Other functions such as<br> <br> int sum ( int a ,  int b ){
    return a+b; <br> } <br> // The Sum function aqquires the 2nd block of memory or Stack Frame. <br>
}