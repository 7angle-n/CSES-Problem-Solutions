// Problem Link: https://cses.fi/problemset/task/1660/
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, x; cin >> n >> x; 
	vector<long long> v(n);
	for(int i = 0; i < n; i++){
	    cin >> v[i];
	}
	long long cur_sum = 0;
	long long cnt = 0;
	int l = 0;
	for(int r = 0; r < n; r++){
	    cur_sum += v[r];
	    while(cur_sum > x && l <= r){
	        cur_sum -= v[l];
	        l++;
	    }
	    if(cur_sum == x){
	        cnt++;
	    }
	}
	cout << cnt << endl;
}
