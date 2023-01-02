// Counting Sort

class Solution {
public:
    void sortColors(vector<int>& nums) {
    
        int n0=0,n1=0,n2=0;
        for (int i = 0; i<nums.size(); i++){
            if (nums[i] == 0){
                n0++;
            }
            if (nums[i] == 1){
                n1++;
            }
            if (nums[i] == 2){
                n2++;
            }
            
        }

        for (int i = 0; i < n0; i++){
            nums[i] = 0;
        }
        for (int i = n0; i < n1+n0; i++){
            nums[i] = 1;
        }
        for (int i = n0+n1; i < n0+n2+n1; i++){
            nums[i] = 2;
        }
    }
};

// Dutch National Flag Algo

class Solution {
public:
    void sortColors(vector<int>& nums) {
       int lo = 0; 
        int hi = nums.size() - 1; 
        int mid = 0; 

        while (mid <= hi) { 
            switch (nums[mid]) { 

            case 0: 
                swap(nums[lo++], nums[mid++]); 
                break; 

            case 1: 
                mid++; 
                break; 

            case 2: 
                swap(nums[mid], nums[hi--]); 
                break; 
            }
        }
    }
};