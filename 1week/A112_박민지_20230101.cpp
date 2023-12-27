/*
기타줄
Source: https://www.acmicpc.net/problem/1049
2023/01/01
*/
#include <iostream>

using namespace std;

int main(){
	int line, brand;
	cin >> line >> brand;

	int min_pack, min_one, pack, one;
	int result_pack, result_one, result_one_pack; 
	int result;

	for(int i=0; i<brand; i++){
		cin >> pack >> one;
		if(i == 0 || min_pack > pack){
			min_pack = pack;
		}
		if(i == 0 || min_one > one){
			min_one = one;
		}
	}

	//package로만 or one 혼합으로 살 경우
	if(line%6 > 0){
		result_pack = (line/6+1)*min_pack;
		result_one_pack = (line/6)*min_pack + (line%6)*min_one;
	}else{
		result_pack = (line/6)*min_pack;
	}
	
	//개별로만 살 경우
	result_one = line*min_one;

	result = result_pack;
	if(result > result_one)
		result = result_one;
	if(result > result_one_pack)
		result = result_one_pack;

	cout << result << endl;
	
	return 0;
}