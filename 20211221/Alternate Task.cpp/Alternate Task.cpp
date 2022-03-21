#include <bits/stdc++.h>
using namespace std;

int main(){
	int s;
	int tmp=0 ;
	cin >> s;
	for (int i=1 ; i<s ; i++){
		tmp = 0;
		for (int j=1 ; j<=i ; j++){
			if(i%j == 0){
				tmp += j;
			}
		}
		if (tmp == s){
			cout << i;
			return 0;
		}
	}
	cout << -1;
}

