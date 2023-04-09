#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int leftSize = (m - l + 1);
        int rightSize = (r - m);
        
         
        int* leftArr = new int[leftSize];
        int* rightArr = new int[rightSize];
        
        
        // copy values
        
        int temp = l;
        for(int i = 0; i < leftSize; i++)
        {
            leftArr[i] = arr[temp];
            temp++;
        }
        temp = m + 1;
        
        for(int i = 0; i < rightSize; i++)
        {
            rightArr[i] = arr[temp++];
        }
        
        // merge logic
        
        int leftIndex = 0, rightIndex = 0;
        int mainArrayIndex = l;
        
        while(leftIndex < leftSize && rightIndex < rightSize)
        {
            if(leftArr[leftIndex] < rightArr[rightIndex])
            {
                arr[mainArrayIndex++] = leftArr[leftIndex++];
            }
            else
            {
                arr[mainArrayIndex++] = rightArr[rightIndex++];                
            }
        }
        while(leftIndex < leftSize)
        {
            arr[mainArrayIndex++] = leftArr[leftIndex++];        
        }
        while(rightIndex < rightSize)
        {
            arr[mainArrayIndex++] = rightArr[rightIndex++];        
        }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        int mid = l + (r - l) / 2;
        
        // base case
        
        if(l >= r)
        {
            return;
        }
        
        // sort left part recursively
        mergeSort(arr, l, mid);
        
        // sort right part recursively
        mergeSort(arr, mid + 1, r);
        
        merge(arr, l, mid, r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends