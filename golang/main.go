package main

import (
	"fmt"
	"math"
)

func main() {
	_range := 100000000
	maxPrimeNumber := 0

	for number := 1; number <= _range; number++ {
		if isPrime(number) {
			maxPrimeNumber = number
		}
	}

	fmt.Printf("Max prime number is : %d\n", maxPrimeNumber)
}

func isPrime(number int) bool {

	if number == 2 {
		return true
	} else if number <= 1 || (number > 2 && number%2 == 0) {
		return false
	} else {
		upperLimit := int(math.Sqrt(float64(number)))

		for i := 3; i <= upperLimit; i = i + 2 {
			if number%i == 0 {
				return false
			}
		}

		return true
	}
}
