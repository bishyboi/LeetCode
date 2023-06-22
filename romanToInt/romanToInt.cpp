#include "romanToInt.h"
using namespace std;

//** https://leetcode.com/problems/roman-to-integer/

int romanToInt(string s) {
    char previous_char = s[0];
    int total = 0;
    for(char current_char: s)
    {
        if(getValue(current_char) <= getValue(previous_char))
        {
            total += getValue(current_char);
        } else{
            total -= getValue(previous_char);
            total += getValue(current_char) - getValue(previous_char);
        }
        previous_char = current_char;
    }
    
    return total;
}

int getValue(char c)
{
    switch(c){
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        default:
            return 0;
    }
}


int main()
{
    string s = "LVIII";
    int expect = 58;

    romanToInt(s);
    bool pass = expect== romanToInt(s);
    return 0;
}