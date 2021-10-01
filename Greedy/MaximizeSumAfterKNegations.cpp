#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k) {
        sort(a, a + n);
        
        for (int i = 0; i < n; ++i) {
            if (a[i] < 0 and k > 0) {
                a[i] = -a[i];
                k--;
            }
        }
        
        long long sum = 0;
        
        for (int i = 0; i < n; ++i)
            sum += a[i];
        
        int min = *min_element(a, a + n);
        
        if (k & 1)
            sum -= 2 * min;
        
        return sum;
    }
};

int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;
}

// Time Complexity: O(N*logN)
// Auxiliary Space: O(1)

// Test case : 
// 1
// 5 1
// 1 2 -3 4 5