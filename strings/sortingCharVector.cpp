#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "lEeTcOdE";
    vector<char> lowerChar;
    vector<char> upperChar;
    for(int i = 0; i < s.size(); i++){
        if(islower(s[i])){
            lowerChar.push_back(s[i]);
        }
        else{
            upperChar.push_back(tolower(s[i]));
        }
    }
    sort(lowerChar.begin(), lowerChar.end(), greater<int>());
    // reverse(lowerChar.begin(), lowerChar.end());
    sort(upperChar.begin(), upperChar.end(), greater<int>());
    // reverse(upperChar.begin(), upperChar.end());

    for(int i = 0; i < lowerChar.size(); i++){
        cout << lowerChar[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < upperChar.size(); i++){
        cout << upperChar[i] << " ";
    }
    cout << endl;

    string ans = "";
    int l = 0;
    int u = 0;
    while(l<lowerChar.size() && u<upperChar.size()){
        if(lowerChar[l] < upperChar[u]){
            cout << "<\n";
            u++;
        }
        else if(lowerChar[l] > upperChar[u]){
            cout << ">\n";
            l++;
        }
        else{
            char t = upperChar[u];
            ans += t;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}