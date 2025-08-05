package main 

import "fmt"

func containsDuplicate(nums []int) bool {
    var numLen = len(nums); 
    numbers := map[int]int{}   

    for i := 0; i < numLen ; i++ {
        var num int = nums[i];
        numbers[num] += 1;  

        if numbers[num] > 1{
            return true  
        }
    }  

    fmt.Println(numbers)
    return false 
}

func main(){
    var nums[]int = []int{1,2,3,4,2,4,6,7,8,9,0 ,1}
    var result = containsDuplicate(nums); 
    fmt.Println(result); 
}
