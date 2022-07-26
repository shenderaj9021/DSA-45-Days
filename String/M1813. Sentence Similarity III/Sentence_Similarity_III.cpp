/* 1813. Sentence Similarity III
https://leetcode.com/problems/sentence-similarity-iii/

*/
class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
    deque<string> q;
        vector<string> v;
        
        if(sentence1.size()>sentence2.size()){
            string temp =sentence1;
            sentence1 = sentence2;
            sentence2 = temp;
        }
        if(sentence2.size()>=sentence1.size()){
            string word = "";
            for(int i=0;i<sentence2.size();i++){
                if(sentence2[i]==' '){
                    v.push_back(word);
                    word="";
                }else{
                      word+=sentence2[i];
                }
            }
            v.push_back(word);
             word = "";
            for(int i=0;i<sentence1.size();i++){
                if(sentence1[i]==' '){
                    q.push_back(word);
                    word="";
                }else{
                      word+=sentence1[i];
                }
            }
            q.push_back(word);
            int i=0;
            while(i<v.size() && !q.empty()){
                if(v[i]==q.front()){
                    q.pop_front();
                    i++;
                }else{
                    break;
                }
            }
            i = v.size()-1;
            while(i>=0 && !q.empty()){
                if(v[i]==q.back()){
                    q.pop_back();
                    i--;
                }else{
                    break;
                }
            }
            if(q.empty()){
                return true;
            }else{
                return false;
            }
        }
        return false;
    }
};