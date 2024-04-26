class Solution {
public:
    string toGoatLatin(string sentence) {

        // adding trailing whitespace at end for regex to consider it a word too
        sentence += " ";

        // regex for finding words
        regex r("[A-Za-z]+\\s");

        // regex to check if word starts with a vowel
        regex vowel("^[aeiouAEIOU]");

        // match object for words
        smatch words;

        // initialisation
        string suffix = "a";
        string ans = "";
        regex_search(sentence, words, r);
        do{ 

            string w = words[0];
            // removing whitespace from the word
            w.pop_back();

            // match object for vowel check
            smatch isVow;
            regex_search(w, isVow, vowel);

            // modifying for consonants
            if(isVow.empty()){
                char f = w[0];
                w = w.substr(1);
                w += f;
            }

            // goatifying
            w = w + "ma" + suffix;
            ans = ans + w + " ";

            // updation
            suffix += 'a';
            sentence = words.suffix();
            regex_search(sentence, words, r);
        }while(!words.empty());

        // removing trailing whitespace
        ans.pop_back();
        return ans;
    }
};