#include <iostream>
using namespace std;
int main(){
	int T;
	int terms,ans;
	cin >> T;
	while(T){
		cin >> terms;
		ans = 0;
		int *arr;
		arr = new int [terms];
		for(int i=0 ; i<terms ; i++){
			cin >> arr[i];
			if(i>0){
				for(int j=0 ; j<i ; j++){
					if(arr[i]>=arr[j]){
						ans++;
					}
				}
			}
		}
		cout << ans <<endl;
		delete [] arr;
		T--;
	}
}

