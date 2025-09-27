class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // int n=arr.size();
        // int max = INT_MIN;
        // int maxindex = -1;
        // for(int i=0;i<n;i++){
        //     if(arr[i]>max){
        //         max = arr[i];
        //         maxindex =i;
        //     }
        // }
        // return maxindex;
      int n=arr.size();  
      int s=0;
        int e=n-1;


        int arrindex =-1;
        
        
         while(s<=e){
                    int mid =s+(e-s)/2;
            if(arr[mid]<arr[mid+1]){
                s =mid+1;
            }
            else{
                arrindex = mid;
                e=mid-1;
            }

         }
         return arrindex;
    }
};