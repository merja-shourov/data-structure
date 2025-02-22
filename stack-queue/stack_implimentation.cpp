#include<bits/stdc++.h>
using namespace std;


// Stack Implimentation by dynamic array
class myStack{
    vector<int> v;
    public:
        void push(int val){
            v.push_back(val);
        }
        void pop(){
            v.pop_back();
        }
        int top(){
            return v[v.size()-1];
        }
        bool empty(){
            if( v.size() == 0 ) return true;
            return false;
        }
        bool size(){
            return v.size();
        }
};

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    myStack st;
    st.push(10);
    st.push(12);
    st.push(16);

    // print stack
    while( !st.empty() ){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}