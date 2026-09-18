class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int pos=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[pos]=nums[i];
                pos++;
            }
        }
        for(int i=pos;i<n;i++){
            nums[i]=0;
        }
        
    }
};


/* ==========================================
        // APPROACH 2: THE SINGLE-PASS OPTIMIZATION (Using std::swap)
        // Time Complexity: O(n) - Iterates through the array exactly once
        // Space Complexity: O(1) - No extra memory allocated
        // ==========================================
        int pos = 0; // Tracks the boundary of confirmed non-zero elements
        
        for (int i = 0; i < n; i++) {
            // If we find a non-zero element, swap it with the element at 'pos'
            if (nums[i] != 0) {
                swap(nums[pos], nums[i]);
                pos++; // Expand the non-zero boundary
            }
            // CRITICAL LOGIC: If nums[i] is 0, 'pos' stays still while 'i' advances.
            // This traps the zeroes between 'pos' and 'i'. When the next non-zero 
            // is found, it swaps with the oldest trapped zero at 'pos', 
            // automatically kicking the zeroes to the back without a second loop.
*/