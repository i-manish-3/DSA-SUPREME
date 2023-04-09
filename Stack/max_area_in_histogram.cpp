//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        vector<long long> left;
        stack <pair<long long,long long>> sl;
        // vector<long long> width;

        int temp = -1;
        
        for(long long i = 0; i < n ; i++)
        {
            if(sl.size() == 0)
            {
                left.push_back(temp);
            }
            else if(sl.size() > 0 && sl.top().first < arr[i])
            {
                left.push_back(sl.top().second);
            }
            else if(sl.size() > 0 && sl.top().first >= arr[i])
            {
                while(sl.size() > 0 && sl.top().first >= arr[i])
                {
                    sl.pop();
                }
                if(sl.size() == 0)
                {
                    left.push_back(temp);
                }
                else
                {
                    left.push_back(sl.top().second);
                }
            }
            sl.push({arr[i],i});
        }
        
        for(int i = 0; i < n ; i++)
        {
            cout<<left[i]<<" ";
        }
        cout<<endl;

        vector<long long> right;
        stack <pair<long long,long long>> sr;
        temp = n;
        for(long long i = n - 1; i >= 0; i--)
        {
            if(sr.size() == 0)
            {
                right.push_back(temp);
            }
            else if(sr.size() > 0 && sr.top().first < arr[i])
            {
                right.push_back(sr.top().second);
            }
            else if(sr.size() > 0 && sr.top().first >= arr[i])
            {
                while(sr.size() > 0 && sr.top().first >= arr[i])
                {
                    sr.pop();
                }
                if(sr.size() == 0)
                {
                    right.push_back(temp);
                }
                else
                {
                    right.push_back(sr.top().second);
                }
            }
            sr.push({arr[i],i});
        }
        reverse(right.begin(), right.end());
        
        // for(int i = 0; i < n ; i++)
        // {
        //     cout<<right[i]<<" ";
        // }
        // cout<<endl;
        
        
        // for(long long i = 0; i < n; i++)
        // {
        //     width[i] = right[i] - left[i] - 1;
        // }

        // // 
        // for(int i = 0; i < n ; i++)
        // {
        //     cout<<width[i]<<" ";
        // }
        // cout<<endl;
        // 

        // (arr[i] * (right[i] - left[i] - 1))

        // vector<long long> area;
        long long maxi = INT_MIN;
        for(long long i = 0; i < n ; i++)
        {
            maxi = max(maxi,(arr[i] * (right[i] - left[i] - 1)));
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends
