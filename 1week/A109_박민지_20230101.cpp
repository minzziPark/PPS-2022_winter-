/*
벨트
Source: https://www.acmicpc.net/problem/10834
2023/01/01
*/

#include <iostream>

using namespace std;

int main(){
	int M;
	cin >> M;

	//입력을 위한 변수
	long long i_spin, i_1_spin;
	int shape;

	//계산을 위한 변수
	long long ratio;
	long long cur_spin = 1;
	int cur_shape = 0;

	for(int i=0; i<M; i++){
		cin >> i_spin;
		cin >> i_1_spin;
		cin >> shape;

		cur_spin = cur_spin/i_spin*i_1_spin;

		if(shape == 1){
			if(cur_shape == 0){
				cur_shape = 1;
			}else{
				cur_shape = 0;
			}
		}
	}

	cout << cur_shape << " " << cur_spin << endl;

	return 0;
}
