/*
3000번 버스
Source: https://www.acmicpc.net/problem/9546
2023/01/01
*/
#include <iostream>

using namespace std;

int main(){
	int num_case, k;
	int n = 0;
	cin >> num_case;

	for(int i=0; i<num_case; i++){
		cin >> k;
		n = 0;

		for(int j=0; j<k; j++){
			n = (n + 0.5) * 2;
		}

		cout << n << endl;
	}

	return 0;
}
