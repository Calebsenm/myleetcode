package main

import "fmt"

func twoSum(nums []int, target int) [][]int {

	var newList [][]int

	for i := 0; i < len(nums); i++ {
		for j := i; j < len(nums); j++ {

			if i == j {
				continue
			}
			if nums[i]+nums[j] == target {
				newList = append(newList, []int{i, j})
			}
		}

	}
	return newList
}

func main() {
	numbers := []int{-2, -2}
	fmt.Println(twoSum(numbers, -4))
}
