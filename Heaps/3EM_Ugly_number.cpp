/*https://leetcode.com/problems/ugly-number-ii


The main problem is how to maintain the order of the generated ugly numbers, ie, how can we get {1,2,3,4,5,...} instead of {1,2,4,3,6,5...} which is a general result of generating the ugly numbers using pow method while maintaining three pointers for 2,3,5 respectively.

We can maintain a min heap and keep inserting the numbers obtained by multiplying a given number with 2,3 and 5 respectively. Initialise the min heap with 1. Now observe the following example:

-pop 1 from queue
-check if we have encountered this number before
-insert 1* 2, 1* 3, 1* 5 into the queue which will automatically maintain the order and during the next pop operation, provide us with the next smallest ugly number.
-increase the count as we just popped an ugly number from the prior queue.
-continue the same till count becomes n.
-return the last popped element as it was the one who set the count to n and hence is the nth ugly number.

class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long long,vector<long long>, greater<long long>>pq;
        map<long long ,long long>  mp;
        pq.push(1);
        long long c =0;
       long long temp;
        while(c<n){
             temp = pq.top();
            pq.pop();
            if(mp[temp]==0){
                pq.push(temp*2);
                pq.push(temp*3);
                pq.push(temp*5);
                c++;
                mp[temp]++;
            }
        }
        
        return int(temp);
    }
};


*/