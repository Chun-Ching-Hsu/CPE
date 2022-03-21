#include <iostream>
using namespace std;
int len(int n);
int main(){
    int i, j;
    while(cin>>i>>j){
        int Max = 0;
        int left = min(i,j);
        int right = max(i,j);
        for (int a = left; a <= right; a++){
            Max = max(Max, len(a));
        }
        cout << i << " " << j << " " << Max << endl;
    }
    return 0;
}
int len(int n){
    int count=1;
    if(n == 1)
        return count;
    while(n!=1){
		if(n%2 == 0){
	        n = n / 2;
	        count++;
	    }
	    else{
	        n = 3*n + 1;
	        count++;
	    }
	}
	return count;
}

