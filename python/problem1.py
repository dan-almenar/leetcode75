def mergeAlternately(word1: str, word2: str) -> str:
    result: str = ""
    counter: int = 0

    for _, (char1, char2) in enumerate(zip(word1, word2)):
        result += char1
        result += char2
        counter += 1

    if len(word1) > counter:
        result += word1[counter:]

    if len(word2) > counter:
        result += word2[counter:]

    return result

