/* 365. Water and Jug Problem
It is famous Die hard problem

https://leetcode.com/problems/water-and-jug-problem/
*/
class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        if(targetCapacity>(jug1Capacity+jug2Capacity)){
            return false;
        }
        if(targetCapacity%__gcd(jug1Capacity,jug2Capacity)==0){
            return true;
        }else{
            return false;
        }
    }
};