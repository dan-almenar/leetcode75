/*
Merge strings alternately

You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.
*/

/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
const mergeAlternately = function(word1, word2) {
    let solution = "";
    for (let i = 0; i < word1.length || i < word2.length; i++){
        if (word1[i]) solution += word1[i];
        if (word2[i]) solution += word2[i];
    }
    return solution;
};

const word1 = "ab";
const word2 = "pqrs"
const solution = "apbqrs";

console.log(`TEST ${solution === mergeAlternately(word1, word2) ? "PASSED" : "FAILED"}`);
