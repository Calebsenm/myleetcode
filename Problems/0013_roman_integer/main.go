package main

func romanToInt(s string) int {
    
    numbers := map[string]int { 
        "I": 1, 
        "V": 5,
        "X": 10,
        "L": 50,
        "C": 100,
        "D": 500,
        "M": 1000,
    }

    number := 0

    for a := 0 ;  a <= len(s)  ; a++ {
        if  a +1  == len(s) {
            number += numbers[string(s[a])]
            return number
        }

        if numbers[string(s[a])] >= numbers[string(s[a+1])] {
            number += numbers[string(s[a])]
        }   else {
            number -= numbers[string(s[a])]
        }

      
    }
    return number 
}