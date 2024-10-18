// 'C' -- By dennis ritchie -- to directly interact with the hardware devices like drivers, kernels ...etc

/*
C can also be defined as following ways:-- 
1) Mother Language 
2) System oriented language 
3) Procedural -- Oriented programming language 
4) Structured language 
5) mid-level programming language
*/

// consideredd as a mother language of most of the modern programming languages 
// most of the compilers, JVMs, Kernels, etc. are written in C language 
// Most programming languages follow its syntax -- C++, Java, C#, etc.

//  C as a system programming language -- can be used to do low level programming -- like kernel and driver.
// used to create hardware devices like OS , drivers, kernels...etc. For Example, Linux kernel is build on C.

// C as a procedural languages -- specifies a sequence of steps for a program to solve the problem 
// Procedural language breaks a program into series of steps to solve the problem. -- Breaks the program into functions , data structures ..etc

// C as structured programming language -- to break the program into parts or blocks. --> To make it easy to understand 

// C as mid level programming language -- easier to understand and modify. 
// supports feature of both low level and high level language

// Low level - specific to one machine -- machine dependent --fast to run. not easy to understand 
// High Level -- not specific to one machine -- machine independent -- easy to understand.

// History of C language -- 1972 by dennis ritchie -- to be used in UNIX operating system 
// C inherits many features of previous programming languages like B,BCPL.

// ******* Features of C: *******
/*
Simple
Machine Independent or Portable
Mid-level programming language
structured programming language
Rich Library
Memory Management
Fast Speed -- compilation and execution 
Pointers -- to directly interact with the memory 
Recursion
Extensible -- easily adopts to new features 
*/


// ******* First C programming language ******* --> Writing , compiling , and running 
#include<stdio.h>
int main(){
    printf("Hello World!\n");
    return 0 ; // '0' -- typically means perfect execution
}
// General Architecture --  header files -- essential functions and vital components , main function -- execution starts from here 
// variable declarations , Statements and Expressions , Comments , Functions , Return Statement , Standard Input/Output , 
// Additional information -- Preprocessor Directives , Data Types , Control Structures , Error Handling , Modularization.

// \n -- newline character

// Compilation process:-- Compiler -- checks the codes -- if syntacticcally correct & is error free then converts the source code into object code .
// onject or machine code -- in complete binary .

// preprocessor-- takes source code and removes all the comments & replace the content in the <stdio.h> ..etc header files .

// (Source Code) --> preprocessor --> (expanded code) --> Compiler --> (assembly code) --> Assembler --> (Object code) --> Linker(Other object files & Libraries) into executable code.

// hello.i --> expanded code ; hello.s --> Assembly code (Compiler converts this expandable code into assembly code)
// hello.c to hello.obj --> object code by the assembler 
// linker gives the hello.exe file (This is the executable file) ; loader -- the final execution of the code.


// printf() and scanf() functions: input and output in C language.
// inbuilt library functions in stdio.h

printf("format string",argument_list) ; ; scanf("format string",argument_list)

#include<stdio.h>
int main(){
    int n ; 
    scanf("%d",&n); // to take the input -- reads input from the console
    printf("%d",n*n*n); // to print the statement into the console
    return 0; 
}

#include<stdio.h>
int main(){
    int a,b ;
    printf("Give me the values") ;
    scanf("%d %d",&a,&b) ;
    printf("%d + %d = %d",a,b,a+b) ;
    return 0 ; // perfect execution 
}

// Variables -- name of the memory location -- to store the information --- can be altered or reused many times.
// to represent memory locations for easy representation

// variables -- to store or modify data -- specified data type 
// variables -- unique identifiers  -- its name and data type describing the type of data it may hold.

// data_type variable_name ; 
// int , float , double , 

// type variable_list

// case sensitive ; should not be variable names , length limitations.
// reserved identifiers  --> starting with double underscore is specially for the compilers 

// should not start with a number --> should be a letter or underscore 
// should not contain special characters 


// Variable Declaration -- telling compiler about its existence ; variable definition-- reserving memory space , variable initialization-- initializing with values ; 

// without initialization -- it contains random data -- garbage values.

// Types of variable 
global variable --- declared outside the block/function -- every function can edit/modify its value 
local Variables -- inside the function 
static variables -- using static keyword -- retains the value between multiple function calls  
automatic variables --- all values inside the function block are automatic values by default also we can declare using the auto keyword . 
for memory allocation aand deallocation -- history -- stack memory , heap memory 
for faster access.
no need for the modern C compilers -- compatability , code readability , historic reasons are the reasons we have auto variable.
variables declared inside the function block are automatically allocated in the stack 

external variables -- can be used in multiple files -- 

for examples if we used extern int x = 1683 ; in myFile.h 
then we can use the same variable in this way -- #inlcude<myFile.h> printf(global_variable) 

// Static Variables -- to retain the value between the functions -- static global , static local variables -- sub division.
#include<stdio.h>
int main(){
    static int n=10 ;
    n+=1 ; // this makes the value of n = 11 now 
    printf("%d\n",n); // 11
    n += 1 ;
    printf("%d\n",n) ; // 12
    return 0; 
} // This is inside the main function

// now lets see the changes inside a real function we built-in
#include<stdio.h>
void func(void){
    static int count = 1 ; // prints the value from 1 to 10
    printf("%d",count); // without static this print 1 for 10 times 
    count++ ;
}
int main(){
    int max_count=1 ;
    while(max_count <= 10){ // do not run 
        func() ;
        max_count++ ;
    }
    return 0 ;
}

// misunderstanding -- if we want to run the function again then , then values will be again from 1 to 10 not from 11 to 20.

// varibles -- to store and manipulate the data -- these are the critical components -- acts as named placeholders for memory regions.
// follow some rules while naming -- do not start with a number , do not give it a name that is for the reserved keywords. 


// Data Types:  in which a variable can stored - such as int , float , ...etc
// basic -- int , char , float ..etc
// Derived -- array , pointer , structure , union 
// Enumeration -- enum 
// Void Data Type -- void 

// unsigned char -- 0 to 255

%u -- unsigned char or to get the ASCII value of a character 
#include<stdio.h>
int main(){
    unsigned char c = 'A' ;
    printf("character: %c , ASCII value: %u\n",c,c) ; 
    return 0 ;
}

// Derived Datatypes:-- arrays , structures , enums , unions ..etc
// Array -- fixed-size elements of the same type .  
int numbers[5] = // lenght of the array = 5 ;  

// pointer -- this is a data structure that stores the Value of address of the variable. --> Proceeded by using the '*' symbol.

// to specify dynamic memory allocation. 

#include<stdio.h>
int main(){
    int x = 10 ;
    int *ptr = &x ; // value at x = address of x 
    printf("value of num: %d\n",*ptr) ; // value at ptr
    return 0 ;
}

// Structure -- grouping of many data types under a single name.
// using this we are able to create our own data structure by fusing together of various sorts.

struct Person{
    char RegNo[9] ;
    char name[20] ;
    int age ;
}; <-- This ';' is necessary
struct Person person1 ; // this is the creation of structure data structure.
person1.name = "Vishnu" ; // one way to assign value to the variables
strcpy(person1.RegNo = "21BRS1683")


// Union -- store various data types in same memory address.
// in structures each element has a separate memory address.
// We can access the members of a union by using the .(dot) symbol.

// enumerators -- these are the set of constants -- that represents a collection of connected values.

enum DaysOfWeek{
    Monday ;
    Tuesday ;
    Wednesday ;
    Thursday ; 
    Friday ;
    Saturday ;
    Sunday ;
}

// Void Data Type: void printHello(){} <--> denotes lack of particular type -- that returns no value.
// void parameter: void func(void) ; -- to indicate the function that accepts no parameters.

// void pointers :-- void *dataPtr -- any address can be stored making this a universal pointer.
// that doesnot return any value 
#include<stdio.h>
int main(){
    int num = 10 ;
    void* dataPtr = &num ;
    printf("Value of number: %d\n",*(int*)dataPtr) ;
    return 0 ;
}

// Keywords -- These are the reserved keywords in C language -- 
// Compilation error if give these names to name the varibles...

// ex:-- auto -- automatic variable with a local scope.

#include<stdio.h>
int main(){
    int count = 10 ; // scope -- main()
    printf("%d\n",count);
    {
        int count = 5; // 10
        printf("%d\n",count) ; // 5
    }
    printf("%d\n",count) ; // 10
    return 0 ;
}

// break -- to get out of the loop 
// continue -- to get to the start of the loop -- to continue with the next iteration.
// or to skip this iteration and move on to the next iteration.
// case -- in a switch statement to define different cases.
// default: --> default case inside a switch statement


// long --> for long integer data type 
long var = 1000 ; 
%ld --> format specifier for long int type 

// register --- for faster access 
register int x = 10 ;
printf("Register Value: %d\n",x) ; --> This is just for the faster access.

// return -- this is used for the exit function 

short variable_name ; --> 
sizeof(variable_type or variable_name)

// goto -- for the transfer control --- goto end 

signed --> for both positive & negative numbers storage...

typedef --> To create new name for existing datatypes/variables.
typedef int marks 
marks math_marks = 50 
marks english_marks = 69 ..etc

******

struct -- different data-types under same name -- different memory space
union() -- under same memory space ; different data-types
enum -- Enumeration -- to create a named constants. ex -- all days of week 

******

// volatile int -- that can be modified externally -- should not be optimized by the compiler.

// alphanumeric -- identifiers naming ... 

//Varaibles vs Identifiers -- identifiers -- name to the entities  -- for classes , functions , start , end 
variables - names assigned to the memory location int x , float y ..etc
all variables are identifiers but all identifiers are not variables...

total , sum , average , ...etc
functions are stored in different part of memory -- these are stored as a text part -- 

internal identifiers -- local variables
external identifiers -- global variables 

---

Operators -- symbols that are used for operations(different types)
operator precedence -- what to be operated first 
++ , -- , ~ , ! --> These are the only operators that have precedence from right to left...
1) Arithmetic operations -- carry out fundamental mathematics operations. 
= - + * / , % -- modolus operator
2) Relational Operators: == , != , < , > , >= , <= 
3) Shift Operators -- Left shift operators << , Right shift operators >> ;

#include<stdio.h>
int main(){
    int num = 5 ; // 0000 0101 --> 5 in binary  --> 00-0101-00 = 16+4 = 20
    printf("%d\n",num<<2) ; // left shift operator 
    printf("%d\n",num>>2) ; // right shift operator --> 0000 0101 -- 00-0000 01-01 --> 2 added and 2 removed  
    return 0 ;
}

basically left shift by n == multiple the number with 2^n ; 
right shift operator == integer division with the number 2^n ; 

// Logical Operator -- perform logical opearations on boolean values -- return either 1 or 0: 
true(1) or false(0)
&& -- logical AND operator 
|| -- logical OR operator
! -- logical NOT operator 
Bitwise Operator -- perform operations on individual bits of the operands.
bitwise operators -- & -- bitwise AND operators
bitwise OR operators -- |
bitwise XOR operations -- ^ 
bitwise NOT operations -- ~ --> This flips each bit of operand 


ternary or Conditional operators: if
result = condition ? value1 : value2 --> condition ? --> if(condition) ; value1 or value2 --> comparision.

int result = (a>b)?a:b ; 


// Assignment operator -- '=' -- simple assignment operator.
Miscelleneous opeartions -- sizeof() operator ; ',' -- this is the comma operator 
'?:' -- ternary operator 


// COMMENTS -- for documentation of code -- to provide information about the lines of code ..
2 types -- single line comments ; multi line comments.


--

Format Specifiers -- the string used in formatted input and output .
starts with % symbol -- 

%d or %i -- this is for the integer type functions 
%u --- unsigned integer 
%o -- octal integer
%x -- hexaxdecimal value 
%X -- for alphabetical characters in upper case 
%f - for float values 
%e -- for scientific notation -- mantessa or exponent
%p -- to print address in hexaxdecimal form 
%c -- for unsigned characters
%s -- for strings
%ld -- for long signed integer value 

signed -- positive and negative ; -- MSB -- most significant bit -- if this is 0 - positive ; 1 - negative
unsigned -- only positive ; 

why unsigned when we can store positive in signed too -- because this doubles the positive numbes that we can store --range of positive numbers we can store...
8 BIT unsigned -- 0 TO 255. -- used where negative numbers does not make sense -- count , memory , address , pixel values ..etc.
8 bit signed - (-128) to 127. -- 

-- we cant compare -- that does not mean it will throw error the compiler just gives no output.

#include<stdio.h>
int main(){
    int signed_num = -5;
    unsigned int unsigned_num = 10;

    if (signed_num < unsigned_num) {  // Unexpected behavior due to signed vs unsigned comparison
        printf("This can be misleading!\n");
    }

}

%x -- for lowercase letters 
%X -- for uppercase letters 
#include<stdio.h>
int main(){
    int num = 168 ;
    printf("usage ") ;
    return 0 ;
}
char to int and int to char is automatic but if int value more that char(8 bit) -- ie not in the range -128 to 127 -- then the value might get truncated(cut or replaced).

char ch = 'A';  // ASCII value of 'A' is 65
int num = ch;
printf("Integer: %d\n", num);  // Output: 65

--

int num = 300;
char ch = num;  // Only the lower 8 bits of 300 are kept

printf("Character from 300: %d\n", ch);  // Output may be unexpected (e.g., 44)

---

char ch = (char) num;  // Explicitly cast to char, truncating as needed
#include<stdio.h>
int main(){
    int a = 300 ;
    char ch = (char)a ;
    printf("%c",ch) ; // ',' -- the unexpected output . 
    return 0 ;
}

char does not mean just alphabets this also include symbols.

%8d --prints the value after 8 spaces 
#include<stdio.h>
int main(){
    int num = 100;
    printf("%8d\n",num) ;
    printf("%-8d\n",num) ; // This makes the value left alligned 
    printf("%8d %-8d\n",num,num) ; // %8d %-8d\n -- prints the number after 8 spaces then a space as there is a space in between %8d and %-8d --> This prints the value in the left allignment.
    printf("%08d\n",num) ; // this fills the first empty spaces fill with 0 
    printf("%18d\n",num) ; // this does not fill the first 8 spaces with 1 this prints 18 spaces and then the value 
    return 0 ;
}

%.2f --> 2 decimals of the float value 

// Escape sequences -- these are to represent or write directly -- some characters that are not easy to represent 
a standard feature - this enables the inclusion of special characters and control patterns in strings and char constants that are not easy to represent or to write 
this enables difficult to represent characters -- 
/*
/a -- alarm or beep sound
/b - backspace
/n -- newline 
/t -- tab
/v  -- vertical tab
/r -- carriage return 
/'
// 
/" 
/?
/nnn
/xhh
/0 -- to represent null 
*/
#include<stdio.h>
int main(){
    printf("This is vishnu\nmy name\0 is up above.") ;
//This is vishnu --> Output of the above line 
// my name
    // printf() ; // This will throw an error --> if we dont represent any statement inside the printf function
    return 0 ;
}

/b --> This cancels/delets the letter or char before it --  especially in a string - 
    printf("Hello\b World!\n"); -- Hell World!

printf("12345\b\b67\n");  // Two backspaces, replaces '45' with '67'
basically this is not replace it just removes those 2(45) form the string and the prints 67 besides it.

/f -- this is for the form feed -- similar to the page break or advance to the next page

/r - this will take the cursor to the start of the line without advancing to the next line 
#include<stdio.h> 
int main(){
    // printf("GoodMorning World\rHello") ; // Just replaces the first "Hello" into the GoodM -- Helloorning 
    printf("Goodmornning World\rHello\n") ; // \n -- This just moves the cursor to the next line 
    printf("Good Morning World\rHello") ;// HelloMorning World
    return 0 ;
}
--
#include<stdio.h> 
int main(){
    printf("Hello, World!\r\n"); // Goes to the start of the line and the prints everything 
    // simply moves the cursor to the beginning of the new line --\n-- 
    // How the above statement works -- first prints the Hello World then goes to the start of the next line 
    return 0 ;
}
--
// escape sequence -- crucial companonets -- that enables to successfully handle special chars and control sequences 

ASCII -- American Standard Code for Information Interchange
range of ASCII 
standard ASCII -- 0 to 127 
Extended ASCII -- 128 to 255

97 to 112 --- a to z ascii values
65 to 90 -- A to Z 

--> char in C does not represent values of char itself they rather represents the ASCII values 

// Constants -- same throughout the code -- to store unchanging values 
#define PI 3.14 
#include<stdio.h>
int main(){
    // int PI = 4.28 ; // We try to change -- this will throw the error
    printf("%f",PI) ; // This prints the value
    // If we try to print using %d this will throw vertain garbage value not the errors
    return 0 ;
}

const float PI = 3.14 ; --> This is another way of declaring constants

// Literals -- values assigned to the constant variables.
// Different types of literals -- integer literals ,float literals , char literals , string literals -- >These are the char types that exists. 

base 8 - starts with 0 ; base 16 -- starts with 0x or 0X 

// 2000 = 2e4 - 2*10^4  ; exponential form or mantissa form 

#define exp_example +1e23 --> This is the way to represent large values using #define Preprocessor
-9e2, +2e-25  

no type safety --> no specific data-type for #define 
no memory consumption & Global scope --> #define -- globally accesible unless they are given with #undef 

literals -- These are the constant values given to the const variables we have created

const and #define have differntiations -- scope , type safety , memorty , processing and compilation ...etc.

Tokens in C --> smallest individual element = token ; words basically 
keywords - reserved or predefined words , identifiers - names we have given to all , strings - ends with \0, constants -- fixed values throughout the code , special symbols -- those symbols that have special meaning , operators -- those we use for mathematical function calculation .

~ --> used as a destructor of free memory...

Boolean of C -- in C language we need to use a header file -- 
stdbool.h in cpp no need of any header file 


Bool -- data type that represents 2 types of values 0 or 1 .
2 types of relations -- true or false.

bool varaible_name ; bool -- data type of the variable 
false , true or 0 , 1 --> These are the boolean values 

#include<stdio.h>
#include<stdbool.h>
int main(){
    bool b[3] = {true,false,true} ; // boolean array
    for(int i=0 ; i<3; i++){
        printf("%d ",b[i]) ; 
    }
    return 0 ;
}

array = {} not [] ;

// typedef -- another way to give new name to or alias to an existing data type
typedef int myInt ---> now myInt is alias for int.

lets see boolean with the help of this 
we can also use boolean along with the logical operators -- 
bool x = true ; bool y = false ; printf(x && y) ; printf(x || y) ; printf(!x) -- negation of x ; printf(x ^ y) --> this is for the xor operation.

#include<stdio.h>
// #include<stdbool.h> --> this is to use the bool data type in C --> No need in cpp 
typedef enum{
    false,true
}b;
int main(){
    b x = false ;
    if(x == true){
        printf("Then the value of x is true.") ;
    }
    else{
        printf("then the value of x is false.") ;
    }
    return 0 ;
}

static in C: scope of this variable depends on where it is declared.
can be declared with functions or the variables

static global , local 
static function 
static method 
static member variables -- in a class 

// static varible inside a function
#include<stdio.h>
int func(){
    int count = 0 ;
    count++ ;
    return count ;
}
int main(){ 
    printf("%d\n",func()) ; // 1
    printf("%d\n",func()) ; // 1
    return 0 ;
}
// look at the output if don't use the static word for the variable then variable will be removed from the memory once the function gets executed
// if we use the static then the value persists(exists) across the varios function calls.

#include<stdio.h>
int func() ; // function should be declared before the main() function call
int main(){
    printf("%d\n",func()) ; // 1 as the value -- This value exists across the functions call - not removed from the memory once the function call gets executed.
    printf("%d\n",func()) ; // 2
    return 0 ;
}
int func(){
    static int count = 0 ;
    count++ ; 
    return count ;
}

both static and global values have static initialization mean if we dont initialize with some value then 0 = default value
memory of static variable is allocated within the static variable 
so the value will persist across the various function call 


PROGRAMMING ERRORS IN C: error - fault -- abnormal behavioral -- bubgs or faults 
removal of these bugs == debugging or correcting 

time of compilation or execution -- errors can rise 

1) Syntax errors -- compilation errors - incorrect syntax -- mainly beginners -- easy to debug 
; ) trying to display variables without the declarations are the main reasons for these syntax or compilation errors 
undeclared type examples -- a = 10 ; printf("%d",a) --> a is undeclared but initialized this will throw a compilation or syntax error 

2) Run time errors -- errors after successful compilation = run time errors 
compiler does not point these errors -- hard to debug 

example -- floating point exception 
int a = 10 
int b = 2/0 ; print("%d",b) --> This will throw errors as /0 is basically impossible 

3) Linker error -- when the executable file of the program is not created. 
4) Logical error -- undesired output -- incorrect output
5) Semantic error -- when compilers cant understand the statements  -- int a,b,c ; a=2,b=3,c=1 , a+b =c ; 
this is incorrect cause we cant use 2 operands in the left side 


---

Compile time vs Run time errors: 2 diff types of errors 
compile time -- when the source code is converted into the executable code 
run time -- when the exec code is running 

compile time -- when the wrong syntax or semantics is provided in the code 
compiler will not allow the program to run until the exec file is created , the exec file will be created only if the semantics are correct 


Run Time errors -- division by 0 -- Floating point exception -- mathematically undefinable -- this leads to run time error 
array out of bounds -- 
Null pointer dereference -- trying to access null pointers memory 

stack overflow -- infinte recursion 
func(){
    func();  <-- No condition is provided.
}

unused variables -- declared but not initialized with any value -- this prints out some random value and this varies every time 
int num ;
printf("%d",num) ;

-----

Conditional Operator:-- also known as ternary operator -- '?:'

condition ? exp1:exp2 

----

(age>18)printf("Yep"):printf("Nope") ---> simple if or else

-----

#include<stdio.h>
int main(){
    int num1 = 10 , num2 = 15 ;
    (num1>num2) ? printf("Yes"):printf("Nope") ; 
    return 0 ;
}

nested ternary operator = more complex and not easy to debug -- while nested if is easy to read and maintain 


---

Bitwise operators -- 

&-AND , |-OR , !-NOT , ^-exclusive XOR -- only one of it should be true not both  , >>--Left shift , << -- right shift 
~ -- Ones complement operator(Unary operator) 

<<n --- left shift by n --> This mean multiply the number we are left shifting with 2^n 
>>n -- right shifting by n --> This mean dividing the number with 2^n 
only gets the integer value not the float and decimal values 


2's complement == sum of 1s completement of a number and 1 .
2s complement of a number == number in negative form 

#include<stdio.h>
int main(){
    int n ; 
    printf("Number of bits you want to give: ");
    scanf("%d",&n) ;
    char binary[n+1] ; // n+1 since <--> n bits & in C programmig \0 = last character inside the string.
    char onesComp[n+1];
    char twosComp[n+1];
    scanf("%s",binary) ;
    printf("The binary is %s\n",binary) ;
    // Finding the ones complement
    for(int i=0 ; i<n ; i++){
        if(binary[i] == '0'){
            onesComp[i] = '1' ; // 0 -> 1 
        }
        else{
            onesComp[i] = '0' ; // 1 -> 0
        }
    }
    onesComp[n] = '\0' ; // end of the string
    printf("The ones complement of %s is %s\n",binary,onesComp);
    // finding 2s complement 
    int carry = 1 ; // This is to add at the end of the ones complement to get the two complement 
    for(int i=n-1 ; i>=0 ; i--){ 
        if(onesComp[i] == '1' && carry == 1){ // if carry = 1 & bit = 1 -- then 1+1=10 in binary 
            twosComp[i] = '0' ; // prints 1 & carry is still 1  -- this conditional statement continues..
            
        }
        else if(onesComp[i] == '0' && carry == 1){ // if carry = 1 & bit = 0 --> 0+1 = 1 --- No carry 
            twosComp[i] = '1' ;
            carry = 0; ;
        }
        else{ // no carry ==> bits are same as ones complement bits
            twosComp[i] = onesComp[i] ;
        }
    }
    twosComp[n] = '\0' ;
    printf("The twos complement of %s is %s\n",binary,twosComp) ;
    return 0 ;
}