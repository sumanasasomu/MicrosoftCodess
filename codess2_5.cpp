#include <bits/stdc++.h> 
using namespace std; 
int main(){
    int col;
    cin >> col;
    string str;
    cin >> str;
    stack <int> mystack;
    vector <vector <char>> columns(1001);
    for(unsigned int i=0; i<str.size();i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            if(mystack.empty()){
                columns[0+700].push_back(str[i]);
                mystack.push(0+700);
            }
            else{
                if(str[i-1] == '('){
                    int x = mystack.top();
                    columns[x-1].push_back(str[i]);
                    mystack.push(x-1);
                } 
                else{
                    int x = mystack.top();
                    columns[x+1].push_back(str[i]);
                    mystack.push(x+1);
                }
            }
        }
        else if(str[i] == ')'){
            mystack.pop();
        }
    }
    vector<char> ans;
    for(unsigned int i=0; i<columns[col + 700].size();i++){
        ans.push_back(columns[col+700][i]);
    }
    sort(ans.begin(), ans.end()); 
    for (auto it = ans.begin(); it != ans.end(); ++it){
        cout << *it; 
    }
}