#include<bits/stdc++.h>
using namespace std;

vector<int> minHeap(int n, vector<vector<int>>& q) {
     multiset<int>st;
    vector<int>ans;
    for(auto &it : q){
        if(it[0] == 1){
            auto it = st.begin();
            ans.push_back(*it);
            st.erase(it);
        }else{
            st.insert(it[1]);
            
        }
    }
    return ans;
   
}
