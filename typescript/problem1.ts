/*
Merge Strings Alternately

You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.
*/

const mergeAlternately = (word1: string, word2: string): string => {
	let result: string = "";

	for (let i: number = 0; i < Math.max(word1.length, word2.length); i++){
		if (word1[i]) result += word1[i];
		if (word2[i]) result += word2[i];
	}
	return result;
}

const word1 = "ab";
const word2 = "pqrs";
const solution = "apbqrs";

console.log(`TEST ${solution === mergeAlternately(word1, word2) ? "PASSED" : "FAILED"}`);
