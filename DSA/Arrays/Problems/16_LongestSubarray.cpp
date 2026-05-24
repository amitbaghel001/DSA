// class Solution {
//   public:
//     int longestSubarray(vector<int>& arr, int k) {
//         // code here
//         int length=0;
//         int i=0;
//         int j=0;
//         int n=arr.size();
//         int sum=arr[0];
//         while (j<n){
//             while(i<j && sum>k){
//                 sum-=arr[i];
//                 i++;
//             }
//             if(sum==k) {
//                 length=max(length,j-i+1);
//             }
//             j++;
//             if(j<n) sum+=arr[j];
//         }
//         return length;
//             }
// }; // this is optimal but for positive only 


// for negative also

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        map<long long ,int >presum;
        long long sum=0;
        int maxlen=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            
            if(sum==k){
                maxlen=max(maxlen, i+1);
            }
            
            long long rem=sum-k;
            if(presum.find(rem)!=presum.end()){
                int len=i-presum[rem];
                maxlen=max(maxlen,len);
            }
            
            if(presum.find(sum)==presum.end()){
                presum[sum]=i;
            }
        }
        return maxlen;
    }
};