#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n;
	cin >> n;
	while(n){
		int r;// 0<r<500
		int ans=0;
		cin >> r;
		vector<int> tmp;
		while(r){
			int x;
			cin >> x;
			tmp.push_back(x);
			r-- ;
		}
		sort(tmp.begin(),tmp.end());
		int size = tmp.size()/2;
		for (int i=0 ; i<tmp.size() ; i++){
			ans += abs(tmp[size]-tmp[i]);
		} 
		cout << ans <<endl;
		n--;
	}
}

