#include <bits/stdc++.h>
using namespace std;

//  vector<int> leader(vector<int> &arr, int n){
//     vector<int> ans;
//     for (int i = 0; i < n; i++)
//     {
//         bool leader = true;

//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] > arr[i])
//             {

//                 leader = false;
//                 break;
//             }
//         }
//         if (leader)
//         ans.push_back(arr[i]);
//     }
//     return ans;
// }



vector<int> leader(vector<int> &arr, int n){
    vector<int> ans;
    int maxi=INT_MIN;
    //O(N)
    for (int i = n-1; i >=0; i--)
    {
        if(arr[i]>maxi) {
            ans.push_back(arr[i]);
            }
        maxi = max(maxi,arr[i]);
       
        
    }
    // O(N log N)
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    int n = arr.size();

    vector<int> ans = leader(arr, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
   }