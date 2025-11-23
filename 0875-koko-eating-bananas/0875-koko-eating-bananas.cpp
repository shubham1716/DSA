// class Solution {
// public:
//    int findmax(vector<int>& v){
//     int maxi=v[0];
//     int n=v.size();
//     for(int i=0;i<n;i++){
//         maxi = max(maxi,v[i]);

//     }
//     return maxi;
//    }

//     // int caltotalhr(vector<int>& v, int hourly){
//     //     int totalhr=0;
//     //     int n=v.size();
//     //     for(int i=0;i<n;i++){
//     //         // totalhr += ceil((double)v[i]/(double)hourly);

//     //         totalhr += ((long long)v[i] + hourly - 1) / hourly;
//     //          if(totalhr > 1e18) return totalhr;

//     //     }
//     //     return totalhr;
//     // }
// long long caltotalhr(vector<int>& v, int hourly){
//     long long totalhr = 0;
//     for(long long x : v){                    // long long x
//         totalhr += (x + hourly - 1) / hourly;  // safe ceil
//         if(totalhr > 1e18) return totalhr;     // safety cutoff
//     }
//     return totalhr;
// }

   
//     int minEatingSpeed(vector<int>& v, int h) {
//         // int start =1;
//         // int end =*max_element(piles.begin(),piles.end());
//         // int ans =end;
//         // while(start<=end){
//         //     int mid = start+(end-start)/2;
//         //     long long hour =0;
//         //     for(int pile:piles){
//         //         hour +=(pile+mid-1)/mid;

//         //     }
//         //     if(hour<=h){
//         //         ans= mid;
//         //         end =mid-1;
//         //     }
//         //     else{
//         //         start = mid+1;
//         //     }
         
//         // }
//         //    return ans;

//         int low =1; 
//         int high = findmax(v);
//         // int ans = INT_MAX;
//         while(low<=high){
//             int mid =(low+high)/2;
//             int totalhr = caltotalhr(v,mid);
//             if(totalhr<=h){
//                 // ans = mid;
//                 high =mid-1;
//             }
//             else{
//                 low=mid+1;
//             }
        
//         }
//         return low;
//     }
// };

class Solution {
public:
    int findmax(vector<int>& v){
        int maxi = v[0];
        for(int x : v) maxi = max(maxi, x);
        return maxi;
    }

    long long caltotalhr(vector<int>& v, int hourly){
        long long totalhr = 0;
        for(long long x : v){
            totalhr += (x + hourly - 1) / hourly;
            if(totalhr > 1e18) return totalhr; // overflow prevention
        }
        return totalhr;
    }

    int minEatingSpeed(vector<int>& v, int h) {
        int low = 1;
        int high = findmax(v);

        while(low <= high){
            int mid = low + (high - low) / 2;
            long long totalhr = caltotalhr(v, mid);

            if(totalhr <= h){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
