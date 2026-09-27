// Problem Link: https://cses.fi/problemset/task/1661/
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, x; cin >> n >> x; 
	vector<long long> v(n);
	for(int i = 0; i < n; i++){
	    cin >> v[i];
	}
	map<long long, long long> pref_cnt;
	pref_cnt[0] = 1;
	long long cur_sum = 0;
	long long total_cnt = 0;
	for(int i = 0; i < n; i++){
	    cur_sum += v[i];
	    long long target = cur_sum - x;
	    if(pref_cnt.count(target)){
	        total_cnt += pref_cnt[target];
	    }
	    pref_cnt[cur_sum]++;
	}
	cout << total_cnt << endl;
}
