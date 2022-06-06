/*https://leetcode.com/problems/reorganize-string

here my approch is placing similar character at alternate position
-first map char in map and count occuranace of each character
-insert all map pairs in max heap but reverse keep occurance firat then character
(so that we will get sort our  pair according to count of character);
-now make charcter array assing 0 to i;
-now while priority queue is not pop element from queue and for that number of occurance of charcher placed it in array
- increase i by 2 if i beacomes greater than s.length() assign it 1
-here first we keeping char at even position and then at odd positions



class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int,int>> pq;
        map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto it:mp){
            pq.push({it.second,it.first});
            
        }
        int l = s.length();
        int o =pq.top().first;
        if(pq.top().first>((s.length()+1)/2)){
            return "";
        }
        char ans[l];
        int i=0;
        while(pq.size()>0){
            int x = pq.top().first;
            char y = pq.top().second;
            pq.pop();
            while(x>0){
                if(i>=l){
                    i =1;
                }
                ans[i] =y;
                i=i+2;
                x--;
            }
        }
        string a ="";
        for(int i=0;i<l;i++){
            a+=ans[i];
        }
       return a;
    }
};

*/