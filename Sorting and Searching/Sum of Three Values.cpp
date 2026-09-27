//Problem Link: https://cses.fi/problemset/task/1641/
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, x; cin >> n >> x; 
	vector<pair<long long, int>> v(n);
	for(int i = 0; i < n; i++){
	    int temp; cin >> temp;
	    v[i] = {temp, i + 1};
	}
	sort(v.begin(), v.end());
	bool flag = false;
	for(int i = 0; i < n; i++){
	    long long target = x - v[i].first;
	    int l = i + 1, r = n - 1;
	    while(l < r){
	        long long cur_sum = v[l].first + v[r].first;
	        if(cur_sum == target){
	            cout << v[i].second << " " << v[l].second << " " << v[r].second << endl;
	            flag = true;
	            break;
	        }
	        else if(cur_sum < target) l++;
	        else r--;
	    }
	    if(flag) break;
	}
	if(!flag) cout << "IMPOSSIBLE" << endl;
}
