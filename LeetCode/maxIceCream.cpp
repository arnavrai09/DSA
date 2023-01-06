class Solution {
public:
    int maxIceCream(vector<int>& c, int coins) {
        sort(c.begin(), c.end());

        int count = 0;
        int sum = 0;
        for (int i = 0; i < c.size(); i++){
            sum = sum + c[i] ;
            
            if ( sum <= coins ){
                count++;
            }
            else{

                break;
            }
        }

        return count;
    }
};