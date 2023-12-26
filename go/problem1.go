package main

import "fmt"

func main(){
	var word1 string = "ab"
	var word2 string = "pqrs"
	var solution = "apbqrs"

	if (solution == mergeAlternately(word1, word2)){
		fmt.Println("TEST PASSED")
	} else {
		fmt.Println("TEST FAILED")
	}

	return
}

func mergeAlternately(word1 string, word2 string) string {
	var result string;
	var i int;

	for (i < len(word1) && i < len(word2)){
		result += string(word1[i])
		result += string(word2[i])
		i++
	}

	for (i < len(word1)){
		result += string(word1[i])
		i++
	}
	for (i < len(word2)){
		result += string(word2[i])
		i++
	}

	return result;
}
