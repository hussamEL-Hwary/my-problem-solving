# author: Hossam
# descri[tion: https://leetcode.com/problems/unique-morse-code-words/
# time: O(n), space: O(n)
class Solution:
    def uniqueMorseRepresentations(self, words: 'List[str]') -> 'int':
        letters_code = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        unique_code = set()
        for word in words:
            code_result = ''
            for char in word:
                code_result += letters_code[ord(char)-97]
            unique_code.add(code_result)
        return len(unique_code)
