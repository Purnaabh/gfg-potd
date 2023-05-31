#include <bits/stdc++.h>
using namespace std;

#define input_stream \
    freopen("input.txt", "r", stdin);\
    freopen("output.txt", "w", stdout);

// Given an array A of size N. The elements of the array consist of positive integers. 
// You have to find the largest element with minimum frequency.
	

int LargButMinFreq(int arr[], int n) {
    int largestNumber=INT_MAX;
    int ans=INT_MIN;
    map<int, int> occurences;
    for(int i=0;i<n;occurences[arr[i++]]+=1);
    for(auto it:occurences) largestNumber=min(largestNumber,it.second);
    for(auto it:occurences){
        if(it.second==largestNumber) ans=max(ans,it.first);
    }
    return ans;
}

int main()
{
	input_stream;
	int a;
	cin>>a;
	int arr[a];
	for(int i=0;i<a;i++) cin >> arr[i];
	int answer = LargButMinFreq(arr,a);
	cout<<"The largest element with minimum frequency in the given array is: "<<answer;
	return 0;

}
