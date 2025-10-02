class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
           int ans = 0;                 // total bottles drunk
        int empty = 0;               // empty bottles count
        int full = numBottles;       // full bottles initially

        while (full > 0) {
            // 1. Drink all full bottles
            ans += full;
            empty += full;
            full = 0;

            // 2. Check if exchange possible
            if (empty >= numExchange) {
                empty -= numExchange;   // give empty bottles
                full = 1;               // get 1 full bottle
                numExchange++;          // next exchange needs +1
            }
        }
        return ans;
    }
};