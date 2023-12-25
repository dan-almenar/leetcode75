#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* mergeAlternately(const char* word1, const char* word2) {
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    char* result = (char*)malloc(len1 + len2 + 1);

    if (result == NULL) {
        // Handle memory allocation failure
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0, j = 0; i < len1 || i < len2; i++) {
        if (i < len1) {
            result[j] = word1[i];
            j++;
        }
        if (i < len2) {
            result[j] = word2[i];
            j++;
        }
    }

    result[len1 + len2] = '\0';  // Null-terminate the merged string
    return result;
}

int main() {
    const char* word1 = "ab";
    const char* word2 = "pqrs";
    const char* solution = "apbqrs";

    char* test = mergeAlternately(word1, word2);

    printf("TEST ");
    printf(
		    strcmp(solution, test) != 0 ? "FAILED" : "PASSED"
	  );
    printf("\n");

    // free dynamically allocated memory
    free(test); 

    return 0;
}

