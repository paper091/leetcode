class Solution {
public:
    bool isValid(string word) {

        regex special("(.)*[@#$](.)*");
        regex vow("(.)*[AEIOUaeiou](.)*");
        regex cons("(.)*[^AEIOUaeiou0-9@#$](.)*");

        if( regex_match(word, special) || word.size()<3 ){
            return false;
        }

        if( regex_match(word, vow) && regex_match(word, cons) ){
            return true;
        }

        return false;
    }
};