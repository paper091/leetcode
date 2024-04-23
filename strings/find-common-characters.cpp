class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<vector<string>> characters;
        for(int i = 0; i < words.size(); i++){
            vector<string> temp;
            temp.clear();
            for(int j = 0; j < words[i].size(); j++){
                temp.push_back(words[i].substr(j, 1));
            }
            sort(temp.begin(), temp.end());
            characters.push_back(temp);
        }
        // cout << "N";
        for(int i = 0; i < characters.size(); i++){
            for(int j = 0; j < characters[i].size(); j++){
                cout << characters[i][j] << " ";
            }
            cout << endl;
        }

        vector<string> stringIntersection = characters[0];
        for(int i = 0; i < stringIntersection.size(); i++){
            cout << stringIntersection[i] << " ";
        }
        cout << endl;
        for(int i = 1; i < characters.size(); i++){
            int s = characters[i].size();
            int si = stringIntersection.size();

            vector<string>::iterator itr = set_intersection(stringIntersection.begin(), stringIntersection.begin()+si, characters[i].begin(), characters[i].begin()+s, stringIntersection.begin());
            stringIntersection.resize(itr-stringIntersection.begin());
            for(int i = 0; i < stringIntersection.size(); i++){
                cout << stringIntersection[i] << " ";
            }
            cout << endl;

        }
        // for(set<char>::iterator i = character.begin(); i != character.end(); i++){
        //     ch.push_back(*i);
        // }

        return stringIntersection;
    }
};