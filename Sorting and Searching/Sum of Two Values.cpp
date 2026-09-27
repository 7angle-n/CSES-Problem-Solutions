//Problem Link: https://cses.fi/problemset/task/1640
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n, x; cin >> n >> x; 
	vector<pair<long long, int>> v;
	for(int i = 0; i < n; i++){
	    int x; cin >> x;
	    v.push_back({x, i + 1});
	}
	sort(v.begin(), v.end());
	int l = 0, r = n - 1;
	bool flag = false;
	while(l < r){
	    long long cur_sum = v[l].first + v[r].first;
	    if(cur_sum == x){
	        cout << v[l].second << " " << v[r].second << endl;
	        flag = true;
	        break;
	    }
	    else if(cur_sum < x) l++;
	    else r--;
	}
	if(!flag) cout << "IMPOSSIBLE" << endl;
}
