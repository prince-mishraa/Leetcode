class Solution {
public:
    bool isValid(string word) {
        if(word.length() < 3) return false;

        int vowel = false;
        int cons = false;

        for(char c : word)
        {
            if(!isalnum(c))
            {
                return false;
            }

            if(isalpha(c))
            {
                char lower = tolower(c);
                if(lower == 'a' || lower == 'e' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                {
                    vowel = true;
                }
                else
                {
                    cons = true;
                }
            }
        }
        return vowel && cons;
    }
};