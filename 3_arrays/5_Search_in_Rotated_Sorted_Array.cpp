class Solution {
public:
    int getpivotIndex(vector<int>& nums) {
        int s = 0;
        int n = nums.size();
        int e = n-1;
        int mid = s+(e-s)/2;

        while (s<=e){
            if (s==e){      //handle single element case
                return s;
            }
            if (nums[mid] < nums[0]){   //mid on line B.
                e = mid-1;
            }
            else{
                s = mid+1;   //Mid on line A.
            }
            if (mid+1<n && nums[mid] > nums[mid+1]){  //mid on ansIndex
                return mid;
            }
            mid = s+(e-s)/2;   //update the mid value
        }
        return -1;
    }

    int binarysearch(vector<int>& nums , int s, int e, int target){   //apply B.S for find
        int mid = s+(e-s)/2;                                         //        Target
        while (s<=e){
            if (nums[mid] == target){
                return mid;
            }
            if (nums[mid] < target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return -1;
    }

    int search(vector<int>& nums, int target){        //funcion call
        int pivotIndex = getpivotIndex(nums);

        int n = nums.size();

        if(target >= nums[0] && target <= nums[pivotIndex]){
            int ans = binarysearch(nums, 0, pivotIndex, target);
            return ans;
        }
        else{
            int ans = binarysearch(nums, pivotIndex+1, n-1, target);
            return ans;
        }

    return -1;
    }
};