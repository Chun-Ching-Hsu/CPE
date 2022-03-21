#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	string s;
	//stringstream ss;
	while(cin >> s){
		int count = 0;
		if (s == "0")
			break;
		for (int i=s.size()-1 ; i>=0 ; i--) {
			if(i%2==0)
				count += s[i]-'0';
			else
				count -= s[i]-'0';
		}
		if(count%11 != 0)
			cout << s <<" "<<"is not a multiple of 11."<<endl;
		else
			cout << s <<" "<<"is a multiple of 11."<<endl;
		//cout << count;
	}
}

