/*
Source: https://www.acmicpc.net/problem/17210

문문문

# 문제
유신이는 여러개의 문을 통과해야 밖으로 나갈 수 있는 방에 갇혔다. 
유신이를 가둔 재현이는 유신이가 탈출할 수 없도록 하기 위해 특이한 규칙을 만들어 문을 순서대로 규칙에 맞는 방법으로 열어야하도록 시스템을 구성하였다.

규칙 1 : 문을 여는 방법은 두가지가 있다. 밀어서 여는 법과 당겨서 여는 법이 있다.
규칙 2 :연속 2번 같은 방법으로 문을 열 수 없다.
규칙 3 : 2의 배수(2,4,6,...)번째 문들은 반드시 같은 방법으로 문을 열어야 한다. 
예를 들어 2번째 통과하는 문을 밀어서 열었다면, 4번째 통과하는 문 또한 밀어서 열어야 한다.
규칙 4 : 3의 배수(3,6,9,...)번째 문들은 반드시 같은 방법으로 문을 열어야 한다. 
예를 들어 3번째 통과하는 문을 밀어서 열었다면, 6번째 통과하는 문 또한 밀어서 열어야한다.
유신이는 위의 규칙 4가지를 모두 알고 있음에도 불구하고 탈출하지 못하고 있다. 
유신이가 방을 탈출할 수 있도록 도와주는 프로그램을 만들어보자.

# 입력
첫째 줄에 총 문의 개수 N(2 ≤ N ≤ 2,500,000,000)이 주어진다.
둘째 줄에는 유신이가 첫 번째 문을 통과할 때 문을 연 방법이 주어진다. 
밀어서 여는 법은 숫자 0, 당겨서 여는 법은 숫자 1로 표기된다.

# 출력
두 번째 문부터 문을 여는 방법을 한줄에 하나씩 출력한다. 
만약 탈출이 불가능하다면 "Love is open door"를 출력한다.
*/
#include <iostream>

using namespace std;

int main(){
	int cnt_N;
	int first;
	bool possible = true;

	cin >> cnt_N;
	cin >> first;

	if(cnt_N > 5){
		cout << "Love is open door" << endl;
		return 0;
	} 
	
	int door[cnt_N+1] = {};
	door[1] = first;
	for(int i=2; i<=cnt_N; i++){
		if(i%2 == 0){
			if(first == 0) door[i] = 1;
			else door[i] = 0;
		}else if(i%3 == 0){
			if(door[2] == 0) door[i] = 1;
			else door[i] = 0;
		}else{
			if(door[i-1] == 0) door[i] = 1;
			else door[i] = 0;
		}
	}

	for(int i=2; i<=cnt_N; i++){
		cout << door[i] << endl;
	}

	return 0;
}