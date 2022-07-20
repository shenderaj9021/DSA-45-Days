/* 227. Basic Calculator II

https://leetcode.com/problems/basic-calculator-ii/
*/


/// First solution  - using stack  TC- O(n)  and SC - O(n)
class Solution {
public:
    int calculate(string s) {
      if(s.length()==0){
          return 0;
      }
        stack<long long> st;
        char curr ='+';
        long long num =0;
        for(int i=0;i<s.length();i++){
            cout<<num<<endl;
            if(isdigit(s[i])){
                num = num*10+s[i]-'0';
            
            }
            if(!isdigit(s[i])  &&s[i]!=' ' || i==s.length()-1){
                cout<<"entered "<<endl;
                if(curr=='+'){
                    st.push(num);
                }else if(curr=='-'){
                    st.push(-num);
                }else if(curr=='*'){
                    int temp = st.top();
                    st.pop();
                    st.push(temp*num);
                }else if(curr=='/'){
                    int temp =st.top();
                    st.pop();
                    st.push(temp/num);
                }
                curr =s[i];
                num =0;
            }
        }
    
        cout<<num<<endl;
        int ans =0;
        cout<<st.top()<<endl;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};


/// Second solution  - We will remove stack here to reduce space complexity
// TC- O(n)  and SC - O(n)
class Solution {
public:
    int calculate(string s) {
      if(s.length()==0){
          return 0;
      }
        char curr ='+';
        long long num =0;
    long long lnum =0;
        long long ans =0;
        for(int i=0;i<s.length();i++){
            
            if(isdigit(s[i])){
                num = num*10+s[i]-'0';
            
            }
            if(!isdigit(s[i])  &&s[i]!=' ' || i==s.length()-1){
                if(curr=='+' || curr=='-'){
                    ans+=lnum;
                lnum = (curr == '+') ? num : -num;
                }else if(curr=='*'){
                    lnum = lnum*num;
                }else if(curr=='/'){
               
                    lnum = lnum/num;
                }
                curr =s[i];
                num =0;
            }
        }
    
        ans+=lnum;
        return ans;
    }
};