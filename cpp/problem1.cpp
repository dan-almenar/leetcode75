/*
Merge Strings Alternately
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.
*/

#include <iostream>
#include <string>

std::string mergeAlternately(std::string word1, std::string word2){ std::string result;

	for (int i = 0; i < word1.size() || i < word2.size(); i++){
		if (i < word1.size()){
			result.push_back(word1[i]);
		}
		if (i < word2.size()){
			result.push_back(word2[i]);
		}
	}

	return result;
}

// The main function is set to test the implementation
int main(){
	std::string word1 = "ab";
	std::string word2 = "pqrs";
	std::string solution = "apbqrs";

	std::string test = mergeAlternately(word1, word2);

	std::cout << "TEST " << (solution.compare(test) != 0 ? "FAILED" : "PASSED") << std::endl;
	return 0;
}

