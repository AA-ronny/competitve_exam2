#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    stack<char> st;
    stack<char> new_st;

    for(int i = 0; i < s.size(); i++){
        st.push(s[i]);

        if(st.top() == '<'){
            st.pop();
            st.pop(); //remove twice '<' & a char
        }else{
            continue;
        }
    }

     while(!st.empty()){
        if(new_st.empty()){
            new_st.push(st.top());
            st.pop();
        }else{
            new_st.push(st.top());
            st.pop();
        }
    }

    while(!new_st.empty()){
        cout << new_st.top();
        new_st.pop();
    }
    
    return 0;
}
