// 5 basic questions :-- 

// Question - 1: Count the Number of Digits
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    int count = 0;
    cout << "Number of digits in " << n << "= " ;
    if(n == 0){
        cout << 0 <<endl;
    }
    else{
        while(n!=0){
            n = n/10 ; 
            count += 1 ;
        }
    }
    cout<<count<<endl ;
    return 0 ;
}


// Question - 2: Sum of digits 
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "n = " ;
    cin >> n ;
    int num = n ; // To not lose the value of 'n'
    int sum = 0 ;
    int lastDigit ; // to get hold the last digit of a number
    while(num != 0){
        lastDigit = num%10 ;
        sum += lastDigit ;
        num = num/10 ; 
    }
    cout<<"Sum of all the digits in " << n << "= " << sum << endl ;
    return 0 ;
}

// Question - 3 : Reversing a Number
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "n = " ;
    cin >> n ;
    int num = n ;
    int revNum = 0;
    int lastDigit ;
    while(num!=0){
        lastDigit = num%10 ;
        revNum = revNum*10+lastDigit ;
        num = num/10 ;
    } 
    cout << "Reversed number of " << n << " is " << revNum << endl ;
    return 0 ;
}

// Question - 4 : Checking Whether the Number is Palindrome
// forward and backward == same then it is a palindrome 
// num == revNum then it is a palindrome
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout << "n = " ;
    cin >> n ;
    int num = n ; // To get hold of the value of 'n' .
    int revNum = 0;
    while(num != 0){
        revNum = revNum*10 + num%10 ;
        num = num/10 ;
    }
    if(n == revNum){
        cout << "Yes " << n << " is a palindrome." << endl ;
    }
    else{
        cout << n << "is not a palindrome" << endl ;
    }
    return 0; 
}


// Question 5: Check if a Number is a Perfect Square
#include <iostream>
#include <cmath>
using namespace std ;
int main(){
    int n ;
    cout << "n= " ;
    cin >> n ; 
    int root = sqrt(n) ;
    if (root*root == n) {
        cout << n << " is a perfect square" << endl ;
    }
    else{
        cout << n << " is not a perfect square" << endl ;
    }
    return 0 ;
}

// Without using the cmath headerfile
#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout << "n= " ;
    cin >> n ; 
    if(n<0){
        cout << "Negative numbers cant be a perfect square" << endl;
    }
    else if(n == 0 || n == 1){
        cout << n << " is a perfect square" << endl ;
    }
    bool isPerfectSquare = false ;
    for(int i = 1 ; i <= n/2 + 1 ; i++ ){ // or just n/2
        if(i*i == n){   
            isPerfectSquare = true ; // do not use bool isPerfectSquare here cause it will change it into local variable
            break ;
        }
    }
    if(isPerfectSquare == true){ // don't do --> isPerfectSquare == true ..etc no need of that.
    // isPerfectSquare == true is same as isPerfectSquare .
        cout << n << " is a perfect square" << endl ;
    }
    else{
        cout << n << " is not a perfect square" << endl ;
    }
    return 0 ;
}
