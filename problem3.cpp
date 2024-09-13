#include <bits/stdc++.h>
using namespace std;
int main()
{
    string string1, string2, number1,number2;
    int number;
    char ch;
    cout<<"Enter 's' for string checking or 'n' for number checking: ";    cin>>ch;
    if(ch == 's'){
        cout<<"Enter a word without space: ";        cin>>string1;
        string2 = string1;
        reverse(string2.begin(), string2.end());
        if(string1 == string2){
            cout<<"The given word is palindrome."<<endl;
        }
        else{
            cout<<"The given word is not palindrome."<<endl;
        }
    }
    if(ch == 'n'){
        cout<<"Enter number without space: ";        cin>>number;
        number1 = to_string(number);
        number2 = number1;
        reverse(number2.begin(), number2.end());
        if(number1 == number2){
            cout<<"The given number is palindrome."<<endl;
        }
        else{
            cout<<"The given number is not palindrome."<<endl;
        }
    }
    return 0;
}
