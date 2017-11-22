#include <iostream>
using namespace std;
 
int main()
{
    int n,m, reversedNumber = 0, remainder;
 
    cout << "Enter an integer: ";
    cin >> n;
    m=n;
 
    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
 
    cout << "Reversed Number = " << reversedNumber<<endl;
    if (reversedNumber ==m){
    	cout << "the number you entered is a palindrome number";
    }
    else{
    	cout<< "it's not a palindrome number";
    }
 
    return 0;
}