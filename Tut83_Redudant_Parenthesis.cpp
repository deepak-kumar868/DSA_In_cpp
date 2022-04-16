#include<bits/stdc++.h>
using namespace std;

bool redudant(string s){
    stack<int> st;
    bool ans=false;
    for(int i=0;i<s.length();i++){
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='('){
                ans=true;
            }
            while (st.top()=='+' || st.top()=='*' || st.top()=='-' || st.top()=='/')
            {
                st.pop();
            }
            st.pop();
        }
    }
    return ans;

}

int main(){
    cout<<redudant("((a+b))");
    return 0;
}